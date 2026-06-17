`timescale 1ns/1ps

module tpu_axi_fetch_top #(
    parameter SYSTOLIC_ARRAY_WIDTH = 8,
    parameter AXI_ID_WIDTH = 4
) (
    input  wire                      clk,
    input  wire                      rst_n,

    input  wire                      start,
    input  wire [31:0]               start_pc,
    output reg                       busy,
    output reg                       done,
    output reg                       error,
    output reg  [31:0]               pc_current,
    output reg  [31:0]               last_ins,

    input  wire                      ub_wr_ext_valid,
    input  wire [15:0]               ub_wr_ext_addr,
    input  wire [15:0]               ub_wr_ext_data,

    output wire [AXI_ID_WIDTH-1:0]   m_axi_awid,
    output reg  [31:0]               m_axi_awaddr,
    output wire [7:0]                m_axi_awlen,
    output wire [2:0]                m_axi_awsize,
    output wire [1:0]                m_axi_awburst,
    output wire [0:0]                m_axi_awlock,
    output wire [3:0]                m_axi_awcache,
    output wire [2:0]                m_axi_awprot,
    output reg                       m_axi_awvalid,
    input  wire                      m_axi_awready,
    output reg  [31:0]               m_axi_wdata,
    output reg  [3:0]                m_axi_wstrb,
    output wire                      m_axi_wlast,
    output reg                       m_axi_wvalid,
    input  wire                      m_axi_wready,
    input  wire [AXI_ID_WIDTH-1:0]   m_axi_bid,
    input  wire [1:0]                m_axi_bresp,
    input  wire                      m_axi_bvalid,
    output reg                       m_axi_bready,

    output wire [AXI_ID_WIDTH-1:0]   m_axi_arid,
    output reg  [31:0]               m_axi_araddr,
    output wire [7:0]                m_axi_arlen,
    output wire [2:0]                m_axi_arsize,
    output wire [1:0]                m_axi_arburst,
    output wire [0:0]                m_axi_arlock,
    output wire [3:0]                m_axi_arcache,
    output wire [2:0]                m_axi_arprot,
    output reg                       m_axi_arvalid,
    input  wire                      m_axi_arready,
    input  wire [AXI_ID_WIDTH-1:0]   m_axi_rid,
    input  wire [31:0]               m_axi_rdata,
    input  wire [1:0]                m_axi_rresp,
    input  wire                      m_axi_rlast,
    input  wire                      m_axi_rvalid,
    output reg                       m_axi_rready,

    output wire [SYSTOLIC_ARRAY_WIDTH*16-1:0] infer_result_data,
    output wire [SYSTOLIC_ARRAY_WIDTH-1:0]    infer_result_valid
);

    localparam [3:0] OP_SET_SRC_BASE = 4'h1;
    localparam [3:0] OP_SET_DST_BASE = 4'h2;
    localparam [3:0] OP_SET_GROUPS   = 4'h3;
    localparam [3:0] OP_RUN          = 4'h4;
    localparam [3:0] OP_END          = 4'hf;

    localparam [5:0]
        ST_IDLE           = 6'd0,
        ST_FETCH_AR       = 6'd1,
        ST_FETCH_R        = 6'd2,
        ST_DECODE         = 6'd3,
        ST_GROUP_PREP     = 6'd4,
        ST_READ_AR        = 6'd5,
        ST_READ_R         = 6'd6,
        ST_COMPUTE_PREP   = 6'd7,
        ST_COMPUTE_MUL    = 6'd8,
        ST_STORE_PREP     = 6'd9,
        ST_WRITE_AW       = 6'd10,
        ST_WRITE_W        = 6'd11,
        ST_WRITE_B        = 6'd12,
        ST_GROUP_NEXT     = 6'd13,
        ST_REPORT_RESULT  = 6'd14,
        ST_HALT           = 6'd15,
        ST_PREFETCH_WAIT  = 6'd16,
        ST_PREFETCH_DRAIN = 6'd17;

    localparam [1:0]
        BG_READ_IDLE = 2'd0,
        BG_READ_AR   = 2'd1,
        BG_READ_R    = 2'd2;

    reg [5:0] state;

    reg [31:0] ins_reg;
    reg [31:0] src_base_reg;
    reg [31:0] dst_base_reg;
    reg [31:0] group_count_reg;
    reg [31:0] active_src_base;
    reg [31:0] active_dst_base;
    reg [31:0] groups_left;

    reg [5:0]  read_index;
    reg [5:0]  write_index;
    reg [4:0]  compute_index;
    reg [1:0]  row_idx;
    reg [3:0]  store_elem_index;
    reg [1:0]  store_word_sel;
    reg        compute_buf_sel;
    reg        prefetch_buf_sel;
    reg        prefetch_valid;
    reg [1:0]  bg_read_state;
    reg [5:0]  bg_read_index;
    reg [31:0] bg_read_base;

    reg [31:0] a_mem0 [0:15];
    reg [31:0] b_mem0 [0:15];
    reg [31:0] a_mem1 [0:15];
    reg [31:0] b_mem1 [0:15];
    reg [65:0] c_mem [0:15];

    reg [31:0] crc32_reg;
    reg [31:0] final_crc32_reg;
    reg [127:0] infer_result_data_reg;
    reg [SYSTOLIC_ARRAY_WIDTH-1:0] infer_result_valid_reg;
    reg [2:0] report_wait_count;
    reg [2:0] drain_idle_count;
`ifdef SIMULATION
    reg trace_matmul_row;
    reg trace_matmul_write;
    reg trace_matmul_input;
    reg trace_matmul_prefetch;
`endif

    integer i;

    assign infer_result_data  = infer_result_data_reg;
    assign infer_result_valid = infer_result_valid_reg;

    assign m_axi_awid    = {AXI_ID_WIDTH{1'b0}};
    assign m_axi_awlen   = 8'd47;
    assign m_axi_awsize  = 3'b010;
    assign m_axi_awburst = 2'b01;
    assign m_axi_awlock  = 1'b0;
    assign m_axi_awcache = 4'b0011;
    assign m_axi_awprot  = 3'b000;
    assign m_axi_wlast   = (state == ST_WRITE_W) && (write_index == 6'd47);

    assign m_axi_arid    = {AXI_ID_WIDTH{1'b0}};
    assign m_axi_arlen   = (state == ST_FETCH_AR) ? 8'd0 : 8'd31;
    assign m_axi_arsize  = 3'b010;
    assign m_axi_arburst = 2'b01;
    assign m_axi_arlock  = 1'b0;
    assign m_axi_arcache = 4'b0011;
    assign m_axi_arprot  = 3'b000;

    wire read_target_is_a = (read_index < 6'd16);
    wire [3:0] read_target_index =
        read_target_is_a ? read_index[3:0] : (read_index[3:0] - 4'd0);

    wire [31:0] current_group_src_base = active_src_base;
    wire [31:0] current_group_dst_base = active_dst_base;
    wire [31:0] src_read_addr = current_group_src_base + {24'd0, read_index, 2'b00};
    wire [31:0] dst_write_addr = current_group_dst_base + {24'd0, write_index, 2'b00};
    wire read_burst_last = (read_index == 6'd31);
    wire write_burst_last = (write_index == 6'd47);

    wire [31:0] bg_src_read_addr = bg_read_base + {24'd0, bg_read_index, 2'b00};
    wire [3:0] bg_target_index = bg_read_index[3:0];

    function [65:0] dot4_u32;
        input [31:0] a0;
        input [31:0] a1;
        input [31:0] a2;
        input [31:0] a3;
        input [31:0] b0;
        input [31:0] b1;
        input [31:0] b2;
        input [31:0] b3;
        reg [63:0] p0;
        reg [63:0] p1;
        reg [63:0] p2;
        reg [63:0] p3;
        begin
            p0 = {32'd0, a0} * {32'd0, b0};
            p1 = {32'd0, a1} * {32'd0, b1};
            p2 = {32'd0, a2} * {32'd0, b2};
            p3 = {32'd0, a3} * {32'd0, b3};
            dot4_u32 =
                {2'd0, p0} +
                {2'd0, p1} +
                {2'd0, p2} +
                {2'd0, p3};
        end
    endfunction

    wire [3:0] compute_row_base = {row_idx, 2'b00};
    wire [31:0] a_cur0 = compute_buf_sel ? a_mem1[compute_row_base + 4'd0] : a_mem0[compute_row_base + 4'd0];
    wire [31:0] a_cur1 = compute_buf_sel ? a_mem1[compute_row_base + 4'd1] : a_mem0[compute_row_base + 4'd1];
    wire [31:0] a_cur2 = compute_buf_sel ? a_mem1[compute_row_base + 4'd2] : a_mem0[compute_row_base + 4'd2];
    wire [31:0] a_cur3 = compute_buf_sel ? a_mem1[compute_row_base + 4'd3] : a_mem0[compute_row_base + 4'd3];

    wire [65:0] row_next_col0 = dot4_u32(
        a_cur0, a_cur1, a_cur2, a_cur3,
        compute_buf_sel ? b_mem1[4'd0]  : b_mem0[4'd0],
        compute_buf_sel ? b_mem1[4'd4]  : b_mem0[4'd4],
        compute_buf_sel ? b_mem1[4'd8]  : b_mem0[4'd8],
        compute_buf_sel ? b_mem1[4'd12] : b_mem0[4'd12]
    );
    wire [65:0] row_next_col1 = dot4_u32(
        a_cur0, a_cur1, a_cur2, a_cur3,
        compute_buf_sel ? b_mem1[4'd1]  : b_mem0[4'd1],
        compute_buf_sel ? b_mem1[4'd5]  : b_mem0[4'd5],
        compute_buf_sel ? b_mem1[4'd9]  : b_mem0[4'd9],
        compute_buf_sel ? b_mem1[4'd13] : b_mem0[4'd13]
    );
    wire [65:0] row_next_col2 = dot4_u32(
        a_cur0, a_cur1, a_cur2, a_cur3,
        compute_buf_sel ? b_mem1[4'd2]  : b_mem0[4'd2],
        compute_buf_sel ? b_mem1[4'd6]  : b_mem0[4'd6],
        compute_buf_sel ? b_mem1[4'd10] : b_mem0[4'd10],
        compute_buf_sel ? b_mem1[4'd14] : b_mem0[4'd14]
    );
    wire [65:0] row_next_col3 = dot4_u32(
        a_cur0, a_cur1, a_cur2, a_cur3,
        compute_buf_sel ? b_mem1[4'd3]  : b_mem0[4'd3],
        compute_buf_sel ? b_mem1[4'd7]  : b_mem0[4'd7],
        compute_buf_sel ? b_mem1[4'd11] : b_mem0[4'd11],
        compute_buf_sel ? b_mem1[4'd15] : b_mem0[4'd15]
    );

    function [31:0] select_c_word;
        input [65:0] value;
        input [1:0]  word_sel;
        begin
            case (word_sel)
                2'd0: select_c_word = value[31:0];
                2'd1: select_c_word = value[63:32];
                default: select_c_word = {30'd0, value[65:64]};
            endcase
        end
    endfunction

    wire store_word_sel_last = (store_word_sel == 2'd2);
    wire [1:0] next_store_word_sel =
        store_word_sel_last ? 2'd0 : (store_word_sel + 2'd1);
    wire [3:0] next_store_elem_index =
        store_elem_index + {3'd0, store_word_sel_last};
    wire [31:0] current_store_word =
        select_c_word(c_mem[store_elem_index], store_word_sel);
    wire [31:0] next_store_word =
        select_c_word(c_mem[next_store_elem_index], next_store_word_sel);

    function [31:0] crc32_step8;
        input [31:0] crc_in;
        input [7:0]  data_in;
        integer bit_idx;
        reg [31:0] crc_tmp;
        begin
            crc_tmp = crc_in ^ {24'd0, data_in};
            for (bit_idx = 0; bit_idx < 8; bit_idx = bit_idx + 1) begin
                if (crc_tmp[0]) begin
                    crc_tmp = (crc_tmp >> 1) ^ 32'hedb88320;
                end else begin
                    crc_tmp = crc_tmp >> 1;
                end
            end
            crc32_step8 = crc_tmp;
        end
    endfunction

    function [31:0] crc32_step_word_le;
        input [31:0] crc_in;
        input [31:0] word_in;
        reg [31:0] crc_tmp0;
        reg [31:0] crc_tmp1;
        reg [31:0] crc_tmp2;
        begin
            crc_tmp0 = crc32_step8(crc_in, word_in[7:0]);
            crc_tmp1 = crc32_step8(crc_tmp0, word_in[15:8]);
            crc_tmp2 = crc32_step8(crc_tmp1, word_in[23:16]);
            crc32_step_word_le = crc32_step8(crc_tmp2, word_in[31:24]);
        end
    endfunction

    wire prefetch_needed = (groups_left > 32'd1) && !prefetch_valid;

`ifdef SIMULATION
    initial begin
        trace_matmul_row = $test$plusargs("trace-matmul-row");
        trace_matmul_write = $test$plusargs("trace-matmul-write");
        trace_matmul_input = $test$plusargs("trace-matmul-input");
        trace_matmul_prefetch = $test$plusargs("trace-matmul-prefetch");
    end
`endif

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            state        <= ST_IDLE;
            busy         <= 1'b0;
            done         <= 1'b0;
            error        <= 1'b0;
            pc_current   <= 32'd0;
            last_ins     <= 32'd0;
            ins_reg      <= 32'd0;
            src_base_reg <= 32'd0;
            dst_base_reg <= 32'd0;
            group_count_reg <= 32'd0;
            active_src_base  <= 32'd0;
            active_dst_base  <= 32'd0;
            groups_left      <= 32'd0;
            read_index       <= 6'd0;
            write_index      <= 6'd0;
            compute_index    <= 5'd0;
            row_idx          <= 2'd0;
            store_elem_index <= 4'd0;
            store_word_sel   <= 2'd0;
            compute_buf_sel  <= 1'b0;
            prefetch_buf_sel <= 1'b1;
            prefetch_valid   <= 1'b0;
            bg_read_state    <= BG_READ_IDLE;
            bg_read_index    <= 6'd0;
            bg_read_base     <= 32'd0;
            crc32_reg        <= 32'hffff_ffff;
            final_crc32_reg  <= 32'd0;
            infer_result_data_reg  <= 128'd0;
            infer_result_valid_reg <= {SYSTOLIC_ARRAY_WIDTH{1'b0}};
            report_wait_count <= 3'd0;
            drain_idle_count  <= 3'd0;
            m_axi_awaddr     <= 32'd0;
            m_axi_awvalid    <= 1'b0;
            m_axi_wdata      <= 32'd0;
            m_axi_wstrb      <= 4'hf;
            m_axi_wvalid     <= 1'b0;
            m_axi_bready     <= 1'b0;
            m_axi_araddr     <= 32'd0;
            m_axi_arvalid    <= 1'b0;
            m_axi_rready     <= 1'b0;
            for (i = 0; i < 16; i = i + 1) begin
                a_mem0[i] <= 32'd0;
                b_mem0[i] <= 32'd0;
                a_mem1[i] <= 32'd0;
                b_mem1[i] <= 32'd0;
                c_mem[i] <= 66'd0;
            end
        end else begin
            if (ub_wr_ext_valid) begin
                // Host UB writes are intentionally ignored by the dedicated 4x4 matmul engine.
            end
            if (ub_wr_ext_addr == 16'hffff && ub_wr_ext_data == 16'hffff) begin
                // Keep interface shape unchanged for the existing host TPU path.
            end
            if (m_axi_bid == {AXI_ID_WIDTH{1'b1}} && m_axi_rid == {AXI_ID_WIDTH{1'b1}} && m_axi_rlast) begin
                // IDs/rlast are unused in this single-beat engine but remain part of the preserved host interface.
            end

            infer_result_valid_reg <= {SYSTOLIC_ARRAY_WIDTH{1'b0}};

            case (state)
                ST_IDLE: begin
                    busy         <= 1'b0;
                    done         <= 1'b0;
                    error        <= 1'b0;
                    infer_result_data_reg <= 128'd0;
                    m_axi_awvalid <= 1'b0;
                    m_axi_wvalid  <= 1'b0;
                    m_axi_bready  <= 1'b0;
                    m_axi_arvalid <= 1'b0;
                    m_axi_rready  <= 1'b0;
                    if (start) begin
                        busy       <= 1'b1;
                        done       <= 1'b0;
                        error      <= 1'b0;
                        pc_current <= start_pc;
                        state      <= ST_FETCH_AR;
                    end
                end

                ST_FETCH_AR: begin
                    m_axi_araddr  <= pc_current;
                    m_axi_arvalid <= 1'b1;
                    if (m_axi_arvalid && m_axi_arready) begin
                        m_axi_arvalid <= 1'b0;
                        m_axi_rready  <= 1'b1;
                        state         <= ST_FETCH_R;
                    end
                end

                ST_FETCH_R: begin
                    if (m_axi_rvalid && m_axi_rready) begin
                        m_axi_rready <= 1'b0;
                        last_ins     <= m_axi_rdata;
                        ins_reg      <= m_axi_rdata;
                        if (m_axi_rresp != 2'b00) begin
                            error <= 1'b1;
                            busy  <= 1'b0;
                            done  <= 1'b1;
                            state <= ST_HALT;
                        end else begin
                            state <= ST_DECODE;
                        end
                    end
                end

                ST_DECODE: begin
                    case (ins_reg[31:28])
                        OP_SET_SRC_BASE: begin
                            src_base_reg <= {4'h1, ins_reg[27:0]};
                            pc_current   <= pc_current + 32'd4;
                            state        <= ST_FETCH_AR;
                        end
                        OP_SET_DST_BASE: begin
                            dst_base_reg <= {4'h1, ins_reg[27:0]};
                            pc_current   <= pc_current + 32'd4;
                            state        <= ST_FETCH_AR;
                        end
                        OP_SET_GROUPS: begin
                            group_count_reg <= {4'd0, ins_reg[27:0]};
                            pc_current      <= pc_current + 32'd4;
                            state           <= ST_FETCH_AR;
                        end
                        OP_RUN: begin
                            active_src_base <= src_base_reg;
                            active_dst_base <= dst_base_reg;
                            groups_left     <= group_count_reg;
                            crc32_reg       <= 32'hffff_ffff;
                            final_crc32_reg <= 32'd0;
                            compute_buf_sel <= 1'b0;
                            prefetch_buf_sel <= 1'b1;
                            prefetch_valid  <= 1'b0;
                            bg_read_state   <= BG_READ_IDLE;
                            report_wait_count <= 3'd0;
                            state           <= (group_count_reg == 32'd0) ? ST_HALT : ST_GROUP_PREP;
                        end
                        OP_END: begin
                            done  <= 1'b1;
                            busy  <= 1'b0;
                            state <= ST_HALT;
                        end
                        default: begin
                            error <= 1'b1;
                            busy  <= 1'b0;
                            done  <= 1'b1;
                            state <= ST_HALT;
                        end
                    endcase
                end

                ST_GROUP_PREP: begin
                    read_index    <= 6'd0;
                    write_index   <= 6'd0;
                    compute_index <= 5'd0;
                    row_idx       <= 2'd0;
                    store_elem_index <= 4'd0;
                    store_word_sel   <= 2'd0;
                    for (i = 0; i < 16; i = i + 1) begin
                        if (!compute_buf_sel) begin
                            a_mem0[i] <= 32'd0;
                            b_mem0[i] <= 32'd0;
                        end else begin
                            a_mem1[i] <= 32'd0;
                            b_mem1[i] <= 32'd0;
                        end
                        c_mem[i] <= 66'd0;
                    end
                    state <= ST_READ_AR;
                end

                ST_READ_AR: begin
                    m_axi_araddr  <= src_read_addr;
                    m_axi_arvalid <= 1'b1;
                    if (m_axi_arvalid && m_axi_arready) begin
                        m_axi_arvalid <= 1'b0;
                        m_axi_rready  <= 1'b1;
                        state         <= ST_READ_R;
                    end
                end

                ST_READ_R: begin
                    if (m_axi_rvalid && m_axi_rready) begin
                        if (m_axi_rresp != 2'b00) begin
                            m_axi_rready <= 1'b0;
                            error <= 1'b1;
                            busy  <= 1'b0;
                            done  <= 1'b1;
                            state <= ST_HALT;
                        end else begin
                            if (read_target_is_a) begin
                                if (!compute_buf_sel) begin
                                    a_mem0[read_target_index] <= m_axi_rdata;
                                end else begin
                                    a_mem1[read_target_index] <= m_axi_rdata;
                                end
                            end else begin
                                if (!compute_buf_sel) begin
                                    b_mem0[read_target_index] <= m_axi_rdata;
                                end else begin
                                    b_mem1[read_target_index] <= m_axi_rdata;
                                end
                            end
                            if (read_burst_last) begin
                                m_axi_rready <= 1'b0;
                                state <= ST_COMPUTE_PREP;
                            end else begin
                                m_axi_rready <= 1'b1;
                                read_index <= read_index + 6'd1;
                            end
                        end
                    end
                end

                ST_COMPUTE_PREP: begin
                    if (prefetch_needed && (bg_read_state == BG_READ_IDLE)) begin
                        bg_read_state <= BG_READ_AR;
                        bg_read_index <= 6'd0;
                        bg_read_base  <= active_src_base + 32'd128;
                    end
                    row_idx   <= compute_index[1:0];
                    state     <= ST_COMPUTE_MUL;
                end

                ST_COMPUTE_MUL: begin
                    if (bg_read_state == BG_READ_AR) begin
                        m_axi_araddr  <= bg_src_read_addr;
                        m_axi_arvalid <= 1'b1;
`ifdef SIMULATION
                        if (trace_matmul_prefetch && ((group_count_reg - groups_left) < 32'd2)) begin
                            $display("[tpu_pf_ar] group=%0d idx=%0d addr=%08x",
                                     group_count_reg - groups_left,
                                     bg_read_index,
                                     bg_src_read_addr);
                        end
`endif
                        if (m_axi_arvalid && m_axi_arready) begin
                            m_axi_arvalid <= 1'b0;
                            m_axi_rready  <= 1'b1;
                            bg_read_state <= BG_READ_R;
                        end
                    end else if (bg_read_state == BG_READ_R) begin
                        if (m_axi_rvalid && m_axi_rready) begin
`ifdef SIMULATION
                            if (trace_matmul_prefetch && ((group_count_reg - groups_left) < 32'd2)) begin
                                $display("[tpu_pf_r] group=%0d idx=%0d data=%08x rlast=%0b",
                                         group_count_reg - groups_left,
                                         bg_read_index,
                                         m_axi_rdata,
                                         m_axi_rlast);
                            end
`endif
                            if (m_axi_rresp != 2'b00) begin
                                m_axi_rready <= 1'b0;
                                error <= 1'b1;
                                busy  <= 1'b0;
                                done  <= 1'b1;
                                state <= ST_HALT;
                            end else begin
                                if (bg_read_index < 6'd16) begin
                                    if (!prefetch_buf_sel) begin
                                        a_mem0[bg_target_index] <= m_axi_rdata;
                                    end else begin
                                        a_mem1[bg_target_index] <= m_axi_rdata;
                                    end
                                end else begin
                                    if (!prefetch_buf_sel) begin
                                        b_mem0[bg_target_index] <= m_axi_rdata;
                                    end else begin
                                        b_mem1[bg_target_index] <= m_axi_rdata;
                                    end
                                end
                                if (bg_read_index == 6'd31) begin
                                    bg_read_state  <= BG_READ_IDLE;
                                    m_axi_rready   <= 1'b0;
                                    prefetch_valid <= 1'b1;
                                end else begin
                                    m_axi_rready  <= 1'b1;
                                    bg_read_index <= bg_read_index + 6'd1;
                                end
                            end
                        end
                    end

                    c_mem[{row_idx, 2'b00} + 4'd0] <= row_next_col0;
                    c_mem[{row_idx, 2'b00} + 4'd1] <= row_next_col1;
                    c_mem[{row_idx, 2'b00} + 4'd2] <= row_next_col2;
                    c_mem[{row_idx, 2'b00} + 4'd3] <= row_next_col3;
`ifdef SIMULATION
                    if (trace_matmul_input && ((group_count_reg - groups_left) < 32'd2)) begin
                        $display("[tpu_in] group=%0d row=%0d a=%08x,%08x,%08x,%08x bcol0=%08x,%08x,%08x,%08x bcol1=%08x,%08x,%08x,%08x",
                                 group_count_reg - groups_left,
                                 row_idx,
                                 a_cur0,
                                 a_cur1,
                                 a_cur2,
                                 a_cur3,
                                 compute_buf_sel ? b_mem1[4'd0]  : b_mem0[4'd0],
                                 compute_buf_sel ? b_mem1[4'd4]  : b_mem0[4'd4],
                                 compute_buf_sel ? b_mem1[4'd8]  : b_mem0[4'd8],
                                 compute_buf_sel ? b_mem1[4'd12] : b_mem0[4'd12],
                                 compute_buf_sel ? b_mem1[4'd1]  : b_mem0[4'd1],
                                 compute_buf_sel ? b_mem1[4'd5]  : b_mem0[4'd5],
                                 compute_buf_sel ? b_mem1[4'd9]  : b_mem0[4'd9],
                                 compute_buf_sel ? b_mem1[4'd13] : b_mem0[4'd13]);
                    end
                    if (trace_matmul_row && ((group_count_reg - groups_left) < 32'd2)) begin
                        $display("[tpu_row] group=%0d row=%0d c0=%h c1=%h c2=%h c3=%h",
                                 group_count_reg - groups_left,
                                 row_idx,
                                 row_next_col0,
                                 row_next_col1,
                                 row_next_col2,
                                 row_next_col3);
                    end
`endif
                    if (compute_index == 5'd3) begin
                        if (prefetch_needed && !prefetch_valid) begin
                            state <= ST_PREFETCH_WAIT;
                        end else begin
                            state <= ST_STORE_PREP;
                        end
                    end else begin
                        compute_index <= compute_index + 5'd1;
                        state         <= ST_COMPUTE_PREP;
                    end
                end

                ST_PREFETCH_WAIT: begin
                    if (bg_read_state == BG_READ_AR) begin
                        m_axi_araddr  <= bg_src_read_addr;
                        m_axi_arvalid <= 1'b1;
`ifdef SIMULATION
                        if (trace_matmul_prefetch && ((group_count_reg - groups_left) < 32'd2)) begin
                            $display("[tpu_pf_ar] group=%0d idx=%0d addr=%08x",
                                     group_count_reg - groups_left,
                                     bg_read_index,
                                     bg_src_read_addr);
                        end
`endif
                        if (m_axi_arvalid && m_axi_arready) begin
                            m_axi_arvalid <= 1'b0;
                            m_axi_rready  <= 1'b1;
                            bg_read_state <= BG_READ_R;
                        end
                    end else if (bg_read_state == BG_READ_R) begin
                        if (m_axi_rvalid && m_axi_rready) begin
`ifdef SIMULATION
                            if (trace_matmul_prefetch && ((group_count_reg - groups_left) < 32'd2)) begin
                                $display("[tpu_pf_r] group=%0d idx=%0d data=%08x rlast=%0b",
                                         group_count_reg - groups_left,
                                         bg_read_index,
                                         m_axi_rdata,
                                         m_axi_rlast);
                            end
`endif
                            if (m_axi_rresp != 2'b00) begin
                                m_axi_rready <= 1'b0;
                                error <= 1'b1;
                                busy  <= 1'b0;
                                done  <= 1'b1;
                                state <= ST_HALT;
                            end else begin
                                if (bg_read_index < 6'd16) begin
                                    if (!prefetch_buf_sel) begin
                                        a_mem0[bg_target_index] <= m_axi_rdata;
                                    end else begin
                                        a_mem1[bg_target_index] <= m_axi_rdata;
                                    end
                                end else begin
                                    if (!prefetch_buf_sel) begin
                                        b_mem0[bg_target_index] <= m_axi_rdata;
                                    end else begin
                                        b_mem1[bg_target_index] <= m_axi_rdata;
                                    end
                                end
                                if (bg_read_index == 6'd31) begin
                                    bg_read_state  <= BG_READ_IDLE;
                                    m_axi_rready   <= 1'b0;
                                    prefetch_valid <= 1'b1;
                                    drain_idle_count <= 3'd0;
                                    state          <= ST_PREFETCH_DRAIN;
                                end else begin
                                    m_axi_rready  <= 1'b1;
                                    bg_read_index <= bg_read_index + 6'd1;
                                end
                            end
                        end
                    end else begin
                        drain_idle_count <= 3'd0;
                        state <= ST_PREFETCH_DRAIN;
                    end
                end

                ST_PREFETCH_DRAIN: begin
                    if (m_axi_rvalid) begin
                        m_axi_rready     <= 1'b1;
                        drain_idle_count <= 3'd0;
                    end else if (drain_idle_count == 3'd4) begin
                        m_axi_rready     <= 1'b0;
                        drain_idle_count <= 3'd0;
                        state            <= ST_STORE_PREP;
                    end else begin
                        m_axi_rready     <= 1'b0;
                        drain_idle_count <= drain_idle_count + 3'd1;
                    end
                end

                ST_STORE_PREP: begin
                    write_index      <= 6'd0;
                    store_elem_index <= 4'd0;
                    store_word_sel   <= 2'd0;
                    m_axi_wdata      <= select_c_word(c_mem[4'd0], 2'd0);
                    m_axi_wvalid     <= 1'b0;
                    m_axi_wstrb      <= 4'hf;
                    state            <= ST_WRITE_AW;
                end

                ST_WRITE_AW: begin
                    m_axi_rready  <= 1'b0;
                    m_axi_awaddr  <= dst_write_addr;
                    m_axi_awvalid <= 1'b1;
                    m_axi_wdata   <= current_store_word;
                    m_axi_wvalid  <= 1'b1;
                    if (m_axi_awvalid && m_axi_awready && m_axi_wvalid && m_axi_wready) begin
`ifdef SIMULATION
                        if (trace_matmul_write && ((group_count_reg - groups_left) < 32'd2)) begin
                            $display("[tpu_wr] group=%0d beat=%0d data=%08x last=%0b awaddr=%08x",
                                     group_count_reg - groups_left,
                                     write_index,
                                     m_axi_wdata,
                                     (write_index[3:0] == 4'hf),
                                     m_axi_awaddr);
                        end
`endif
                        crc32_reg <= crc32_step_word_le(crc32_reg, m_axi_wdata);
                        m_axi_awvalid <= 1'b0;
                        if (write_index == 6'd47) begin
                            final_crc32_reg <= ~crc32_step_word_le(crc32_reg, m_axi_wdata);
                            m_axi_wvalid    <= 1'b0;
                            m_axi_bready    <= 1'b1;
                            state           <= ST_WRITE_B;
                        end else if (write_burst_last) begin
                            write_index      <= write_index + 6'd1;
                            store_word_sel   <= next_store_word_sel;
                            store_elem_index <= next_store_elem_index;
                            m_axi_wdata      <= next_store_word;
                            m_axi_wvalid     <= 1'b0;
                            m_axi_bready     <= 1'b1;
                            state            <= ST_WRITE_B;
                        end else begin
                            write_index      <= write_index + 6'd1;
                            store_word_sel   <= next_store_word_sel;
                            store_elem_index <= next_store_elem_index;
                            m_axi_wdata      <= next_store_word;
                            state            <= ST_WRITE_W;
                        end
                    end
                end

                ST_WRITE_W: begin
                    if (!m_axi_wvalid) begin
                        m_axi_wdata  <= current_store_word;
                        m_axi_wvalid <= 1'b1;
                    end else if (m_axi_wready) begin
`ifdef SIMULATION
                        if (trace_matmul_write && ((group_count_reg - groups_left) < 32'd2)) begin
                            $display("[tpu_wr] group=%0d beat=%0d data=%08x last=%0b",
                                     group_count_reg - groups_left,
                                     write_index,
                                     m_axi_wdata,
                                     (write_index == 6'd47) || write_burst_last);
                        end
`endif
                        crc32_reg       <= crc32_step_word_le(crc32_reg, m_axi_wdata);
                        if (write_index == 6'd47) begin
                            final_crc32_reg <= ~crc32_step_word_le(crc32_reg, m_axi_wdata);
                            m_axi_wvalid    <= 1'b0;
                            m_axi_bready    <= 1'b1;
                            state           <= ST_WRITE_B;
                        end else if (write_burst_last) begin
                            write_index      <= write_index + 6'd1;
                            store_word_sel   <= next_store_word_sel;
                            store_elem_index <= next_store_elem_index;
                            m_axi_wdata      <= next_store_word;
                            m_axi_wvalid     <= 1'b0;
                            m_axi_bready     <= 1'b1;
                            state            <= ST_WRITE_B;
                        end else begin
                            write_index      <= write_index + 6'd1;
                            store_word_sel   <= next_store_word_sel;
                            store_elem_index <= next_store_elem_index;
                            m_axi_wdata      <= next_store_word;
                        end
                    end
                end

                ST_WRITE_B: begin
                    if (m_axi_bvalid && m_axi_bready) begin
                        m_axi_bready <= 1'b0;
                        if (m_axi_bresp != 2'b00) begin
                            error <= 1'b1;
                            busy  <= 1'b0;
                            done  <= 1'b1;
                            state <= ST_HALT;
                        end else begin
                            if (write_index == 6'd47) begin
                                m_axi_bready <= 1'b0;
                                if (groups_left == 32'd1) begin
                                    state <= ST_REPORT_RESULT;
                                end else begin
                                    state <= ST_GROUP_NEXT;
                                end
                            end else begin
                                m_axi_bready <= 1'b0;
                                state        <= ST_WRITE_AW;
                            end
                        end
                    end
                end

                ST_GROUP_NEXT: begin
                    if (groups_left == 32'd1) begin
                        done      <= 1'b1;
                        busy      <= 1'b0;
                        state     <= ST_HALT;
                    end else begin
                        groups_left     <= groups_left - 32'd1;
                        active_src_base <= active_src_base + 32'd128;
                        active_dst_base <= active_dst_base + 32'd192;
                        compute_buf_sel  <= prefetch_buf_sel;
                        prefetch_buf_sel <= ~prefetch_buf_sel;
                        prefetch_valid   <= 1'b0;
                        compute_index    <= 5'd0;
                        state            <= ST_COMPUTE_PREP;
                    end
                end

                ST_REPORT_RESULT: begin
                    if (report_wait_count == 3'd0) begin
                        infer_result_data_reg[15:0]   <= final_crc32_reg[15:0];
                        infer_result_data_reg[31:16]  <= final_crc32_reg[31:16];
                        infer_result_data_reg[127:32] <= 96'd0;
                        infer_result_valid_reg        <= {{(SYSTOLIC_ARRAY_WIDTH-2){1'b0}}, 2'b11};
                        report_wait_count             <= 3'd1;
                    end else if (report_wait_count == 3'd5) begin
                        done              <= 1'b1;
                        busy              <= 1'b0;
                        report_wait_count <= 3'd0;
                        state             <= ST_HALT;
                    end else begin
                        report_wait_count <= report_wait_count + 3'd1;
                    end
                end

                ST_HALT: begin
                    busy         <= 1'b0;
                    m_axi_awvalid <= 1'b0;
                    m_axi_wvalid  <= 1'b0;
                    m_axi_bready  <= 1'b0;
                    m_axi_arvalid <= 1'b0;
                    m_axi_rready  <= 1'b0;
                    if (start) begin
                        busy       <= 1'b1;
                        done       <= 1'b0;
                        error      <= 1'b0;
                        pc_current <= start_pc;
                        state      <= ST_FETCH_AR;
                    end
                end

                default: begin
                    state <= ST_IDLE;
                end
            endcase
        end
    end

endmodule
