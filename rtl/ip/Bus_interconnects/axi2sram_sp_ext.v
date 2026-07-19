// Copyright 2018 ETH Zurich and University of Bologna.
// Copyright and related rights are licensed under the Solderpad Hardware
// License, Version 0.51 (the "License"); you may not use this file except in
// compliance with the License.  You may obtain a copy of the License at
// http://solderpad.org/licenses/SHL-0.51. Unless required by applicable law
// or agreed to in writing, software, hardware and materials distributed under
// this License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR
// CONDITIONS OF ANY KIND, either express or implied. See the License for the
// specific language governing permissions and limitations under the License.
//
// ----------------------------
// AXI to SRAM Adapter
// ----------------------------
// Author: Florian Zaruba (zarubaf@iis.ee.ethz.ch)
//
// Description: Manages AXI transactions
//              Supports all burst accesses but only on aligned addresses and with full data width.
//              Assertions should guide you if there is something unsupported happening.
//
module axi2sram_sp_ext #(
    parameter AXI_ID_WIDTH      = 6,
    parameter AXI_ADDR_WIDTH    = 32,
    parameter AXI_DATA_WIDTH    = 32,
    parameter integer READ_WAIT_CYCLES = 0
)(
    input                         clk,
    input                         resetn,

    input     [AXI_ADDR_WIDTH-1:0] s_araddr ,
    input     [1               :0] s_arburst,
    input     [3               :0] s_arcache,
    input     [AXI_ID_WIDTH-1  :0] s_arid   ,
    input     [7               :0] s_arlen  ,
    input     [1               :0] s_arlock ,
    input     [2               :0] s_arprot ,
    output reg                        s_arready,
    input     [2               :0] s_arsize ,
    input                          s_arvalid,
    input     [AXI_ADDR_WIDTH-1:0] s_awaddr ,
    input     [1               :0] s_awburst,
    input     [3               :0] s_awcache,
    input     [AXI_ID_WIDTH-1  :0] s_awid   ,
    input     [7               :0] s_awlen  ,
    input     [1               :0] s_awlock ,
    input     [2               :0] s_awprot ,
    output reg                        s_awready,
    input     [2               :0] s_awsize ,
    input                          s_awvalid,
    output reg   [AXI_ID_WIDTH-1  :0] s_bid    ,
    input                          s_bready ,
    output reg   [1               :0] s_bresp  ,
    output reg                        s_bvalid ,
    output reg   [AXI_DATA_WIDTH-1:0] s_rdata  ,
    output reg   [AXI_ID_WIDTH-1  :0] s_rid    ,
    output reg                        s_rlast  ,
    input                          s_rready ,
    output reg   [1               :0] s_rresp  ,
    output reg                        s_rvalid ,
    input     [AXI_DATA_WIDTH-1:0] s_wdata  ,
    input                          s_wlast  ,
    output reg                        s_wready ,
    input     [AXI_DATA_WIDTH/8-1:0] s_wstrb  ,
    input                          s_wvalid ,

    output  reg                       req_o,
    output  reg                       we_o,
    output  reg [AXI_ADDR_WIDTH-1:0]   addr_o,
    output  reg [AXI_DATA_WIDTH/8-1:0] be_o,
    output  reg [AXI_DATA_WIDTH-1:0]   data_o,
    output  reg [AXI_ADDR_WIDTH-1:0]   read_addr_o,
    input   [AXI_DATA_WIDTH-1:0]   data_i
);
    // AXI has the following rules governing the use of bursts:
    // - for wrapping bursts, the burst length must be 2, 4, 8, or 16
    // - a burst must not cross a 4KB address boundary
    // - early termination of bursts is not supported.

    localparam LOG_NR_BYTES = $clog2(AXI_DATA_WIDTH/8);

    reg [AXI_ID_WIDTH-1:0]   ax_req_d_id;
    reg [AXI_ADDR_WIDTH-1:0] ax_req_d_addr;
    reg [7:0]                ax_req_d_len;
    reg [2:0]                ax_req_d_size;
    reg [1:0]                ax_req_d_burst;

    reg [AXI_ID_WIDTH-1:0]   ax_req_q_id;
    reg [AXI_ADDR_WIDTH-1:0] ax_req_q_addr;
    reg [7:0]                ax_req_q_len;
    reg [2:0]                ax_req_q_size;
    reg [1:0]                ax_req_q_burst;

    reg [2:0]                state_d;
    reg [2:0]                state_q;

    localparam              IDLE        = 3'h0;
    localparam              READ        = 3'h1;
    localparam              WRITE       = 3'h2;
    localparam              SEND_B      = 3'h3;
    localparam              WAIT_WVALID = 3'h4;
    localparam              WRITE_NOP   = 3'h5;
    localparam              READ_ADDR   = 3'h6;

    localparam              FIXED       = 2'b00;
    localparam              INCR        = 2'b01;
    localparam              WRAP        = 2'b10;
    localparam [AXI_ADDR_WIDTH-1:0] ADDR_STEP = {{(AXI_ADDR_WIDTH-LOG_NR_BYTES-1){1'b0}}, 1'b1, {LOG_NR_BYTES{1'b0}}};
    
    reg [AXI_ADDR_WIDTH-1:0] req_addr_d, req_addr_q;
    // AXI ARLEN/AWLEN encode beats - 1, so ARLEN=255 requires a counter that
    // can represent the terminal value 256.
    reg [8:0]                cnt_d, cnt_q;
    reg [1:0]                read_valid_pipe_q;
    reg [1:0]                read_last_pipe_q;
    reg [3:0]                read_wait_d, read_wait_q;
    reg [AXI_ADDR_WIDTH-1:0] read_addr_d;
    reg [AXI_DATA_WIDTH-1:0] read_fifo_data_q [0:3];
    reg                      read_fifo_last_q [0:3];
    reg [1:0]                read_fifo_wr_ptr_q;
    reg [1:0]                read_fifo_rd_ptr_q;
    reg [2:0]                read_fifo_count_q;
    reg                      read_issue;
    reg                      read_issue_last;

    wire read_pop =
        (state_q == READ) && (read_fifo_count_q != 3'd0) && s_rready;
    // Both SRAM banks return through a two-stage response pipeline.  ExtRAM
    // launches its address on a phase-shifted I/O edge and samples near the
    // centre of the data eye before this pipeline consumes the word.
    wire read_fast_bank = ax_req_q_addr[22];
    wire read_push = read_valid_pipe_q[1];
    wire read_push_last = read_last_pipe_q[1];
    wire [3:0] read_outstanding_after_pop =
        {1'b0, read_fifo_count_q} +
        {3'd0, read_valid_pipe_q[0]} +
        {3'd0, read_valid_pipe_q[1]} -
        {3'd0, read_pop};
    wire read_can_issue =
        (state_q == READ) && (cnt_q < {1'b0, ax_req_q_len} + 9'd1) &&
        (read_outstanding_after_pop < 4'd4) &&
        (read_fast_bank || (read_wait_q == 4'd0));

    function automatic [AXI_ADDR_WIDTH-1:0] get_next_addr;
        input [AXI_ADDR_WIDTH-1:0] addr;
        input [1:0] burst;
    begin
        if (burst == FIXED) begin
            get_next_addr = addr;
        end else begin
            // 本工程 SRAM 访问只使用递增 burst。预先保存下一拍地址，
            // 避免每拍在外部 SRAM 地址输出前走通用 WRAP 地址计算长链。
            get_next_addr = addr + ADDR_STEP;
        end
    end
    endfunction

    always @ (*) begin
        // Transaction attributes
        // default assignments
        state_d         = state_q;
        ax_req_d_id     = ax_req_q_id;
        ax_req_d_addr   = ax_req_q_addr;
        ax_req_d_len    = ax_req_q_len;
        ax_req_d_size   = ax_req_q_size;
        ax_req_d_burst  = ax_req_q_burst;
        req_addr_d      = req_addr_q;
        cnt_d           = cnt_q;
        read_wait_d      = (read_wait_q != 4'd0) ?
                           (read_wait_q - 4'd1) : 4'd0;
        read_addr_d         = read_addr_o;
        read_issue          = 1'b0;
        read_issue_last     = 1'b0;
        // Memory default assignments
        data_o = s_wdata;
        be_o   = {AXI_DATA_WIDTH/8{1'b1}};
        we_o   = 1'b0;
        req_o  = 1'b0;
        addr_o = req_addr_q;
        // AXI assignments
        // request
        s_awready = 1'b0;
        s_arready = 1'b0;
        // read response channel
        s_rvalid  = (state_q == READ) && (read_fifo_count_q != 3'd0);
        s_rresp   = 'h0;
        s_rlast   = read_fifo_last_q[read_fifo_rd_ptr_q];
        s_rid     = ax_req_q_id;
        s_rdata   = read_fifo_data_q[read_fifo_rd_ptr_q];
        // slave write data channel
        s_wready  = 1'b0;
        // write response channel
        s_bvalid  = 1'b0;
        s_bresp   = 1'b0;
        s_bid     = 1'b0;

        case (state_q)

            IDLE: begin
                // Wait for a read or write
                // ------------
                // Read
                // ------------
                if (s_arvalid) begin
                    s_arready = 1'b1;
                    // sample ax
                    ax_req_d_id     = s_arid;
                    ax_req_d_addr   = s_araddr;
                    ax_req_d_len    = s_arlen;
                    ax_req_d_size   = s_arsize;
                    ax_req_d_burst  = s_arburst;
                    state_d        = READ;
                    // Launch the first address in the same cycle as AR.
                    req_o          = 1'b1;
                    addr_o         = s_araddr;
                    read_addr_d    = s_araddr;
                    read_issue     = 1'b1;
                    read_issue_last = (s_arlen == 8'd0);
                    read_wait_d    = s_araddr[22] ? 4'd0 :
                                     READ_WAIT_CYCLES[3:0];
                    // save the address
                    req_addr_d     = get_next_addr(s_araddr, s_arburst);
                    // save the ar_len
                    cnt_d          = 9'd1;
                // ------------
                // Write
                // ------------
                end else if (s_awvalid) begin
                    s_awready = 1'b1;
                    s_wready  = 1'b0;
                    // sample ax
                    ax_req_d_id     = s_awid;
                    ax_req_d_addr   = s_awaddr;
                    ax_req_d_len    = s_awlen;
                    ax_req_d_size   = s_awsize;
                    ax_req_d_burst  = s_awburst;
                    // 地址先进入寄存状态，下一拍再接收 W 数据。这样外部 SRAM
                    // 地址选择不需要由组合的 WVALID/we_o 直接驱动。
                    state_d = WAIT_WVALID;
                end
            end

            // ~> we are still missing a w_valid
            WAIT_WVALID: begin
                addr_o = ax_req_q_addr;
                // Give asynchronous SRAM a complete cycle with OE deasserted
                // before the FPGA starts driving its bidirectional data bus.
                state_d = WRITE_NOP;
            end

            WRITE_NOP: begin
                s_wready = 1'b1;
                addr_o = ax_req_q_addr;
                if (s_wvalid) begin
                    req_o          = 1'b1;
                    we_o           = 1'b1;
                    be_o           = s_wstrb;
                    req_addr_d     = get_next_addr(ax_req_q_addr, ax_req_q_burst);
                    state_d        = (s_wlast) ? SEND_B : WRITE;
                    cnt_d          = 9'd1;
                end
            end

            READ: begin
                // 读地址和读数据各走一级流水。只要响应缓冲还有空间，
                // 下一拍地址就继续推出去；R 通道则从缓冲中按 AXI ready 消费。
                addr_o = req_addr_q; // 地址输出保持寄存值，不让 read_can_issue 进入 SRAM 地址路径
                if (read_can_issue) begin
                    req_o               = 1'b1;
                    read_addr_d         = req_addr_q;
                    read_issue          = 1'b1;
                    read_issue_last     = (cnt_q == {1'b0, ax_req_q_len});
                    read_wait_d         = read_fast_bank ? 4'd0 :
                                          READ_WAIT_CYCLES[3:0];
                    req_addr_d          = get_next_addr(req_addr_q, ax_req_q_burst);
                    cnt_d               = cnt_q + 9'd1;
                end
                if ((cnt_q == {1'b0, ax_req_q_len} + 9'd1) &&
                    (read_valid_pipe_q == 2'b00) &&
                    ((read_fifo_count_q == 3'd0) ||
                     ((read_fifo_count_q == 3'd1) && read_pop))) begin
                    state_d = IDLE;
                end
            end

            READ_ADDR: begin
                // keep request to memory high
                req_o  = 1'b1;
                // send the response
                s_rvalid = 1'b0;
                // ----------------------------
                // Next address generation
                // ----------------------------
                // handle the correct burst type
                addr_o = req_addr_q;
                // we need to change the address here for the upcoming request
                // we can decrease the counter as the master has consumed the read data
                cnt_d = cnt_q + 1;
                // save the request address for the next cycle
                req_addr_d = get_next_addr(req_addr_q, ax_req_q_burst);
                state_d = READ;
            end

            // ~> we already wrote the first word here
            WRITE: begin

                s_wready = 1'b1;
                state_d  = WRITE;

                // consume a word here
                if (s_wvalid) begin
                    req_o         = 1'b1;
                    we_o          = 1'b1;
                    be_o          = s_wstrb;
                    addr_o        = req_addr_q;
                    // save the request address for the next cycle
                    req_addr_d = get_next_addr(req_addr_q, ax_req_q_burst);
                    // we can decrease the counter as the master has consumed the read data
                    cnt_d = cnt_q + 1;

                    if (s_wlast)
                        state_d = SEND_B;
                end
            end
            // ~> send a write acknowledge back
            SEND_B: begin
                s_bvalid = 1'b1;
                s_bid    = ax_req_q_id;
                if (s_bready)
                    state_d = IDLE;
            end

        endcase
    end

    // --------------
    // Registers
    // --------------
    always @(posedge clk or negedge resetn) begin
        if (~resetn) begin
            state_q         <= IDLE;
            ax_req_q_addr   <= 32'h0;
            ax_req_q_burst  <= 2'h0;
            ax_req_q_id     <= 'h0;
            ax_req_q_len    <= 8'h0;
            ax_req_q_size   <= 3'h0;
            req_addr_q      <= 'h0;
            cnt_q           <= 9'd0;
            read_valid_pipe_q   <= 2'b00;
            read_last_pipe_q    <= 2'b00;
            read_wait_q         <= 4'd0;
            read_addr_o         <= 'h0;
            read_fifo_data_q[0] <= 'h0;
            read_fifo_data_q[1] <= 'h0;
            read_fifo_data_q[2] <= 'h0;
            read_fifo_data_q[3] <= 'h0;
            read_fifo_last_q[0] <= 1'b0;
            read_fifo_last_q[1] <= 1'b0;
            read_fifo_last_q[2] <= 1'b0;
            read_fifo_last_q[3] <= 1'b0;
            read_fifo_wr_ptr_q  <= 2'd0;
            read_fifo_rd_ptr_q  <= 2'd0;
            read_fifo_count_q   <= 3'd0;
        end else begin
            state_q         <= state_d;
            ax_req_q_addr   <= ax_req_d_addr;
            ax_req_q_burst  <= ax_req_d_burst;
            ax_req_q_id     <= ax_req_d_id;
            ax_req_q_len    <= ax_req_d_len;
            ax_req_q_size   <= ax_req_d_size;
            req_addr_q      <= req_addr_d;
            cnt_q           <= cnt_d;
            read_valid_pipe_q   <= {read_valid_pipe_q[0], read_issue};
            read_last_pipe_q    <= {read_last_pipe_q[0], read_issue_last};
            read_wait_q         <= read_wait_d;
            read_addr_o         <= read_addr_d;

            if (read_push) begin
                read_fifo_data_q[read_fifo_wr_ptr_q] <= data_i;
                read_fifo_last_q[read_fifo_wr_ptr_q] <= read_push_last;
                read_fifo_wr_ptr_q <= read_fifo_wr_ptr_q + 2'd1;
            end
            if (read_pop)
                read_fifo_rd_ptr_q <= read_fifo_rd_ptr_q + 2'd1;

            case ({read_push, read_pop})
                2'b10: read_fifo_count_q <= read_fifo_count_q + 3'd1;
                2'b01: read_fifo_count_q <= read_fifo_count_q - 3'd1;
                default: read_fifo_count_q <= read_fifo_count_q;
            endcase
        end
    end


    // always @(posedge clk or negedge resetn) begin
    //     if (~resetn) begin
    //         s_rdata         <= 'h0;     
    //     end else begin
    //         if(req_o == 1'b1 && we_o == 1'b0)
    //             s_rdata     <= data_i;
    //         else
    //             s_rdata     <= s_rdata;
    //     end
    // end

endmodule
