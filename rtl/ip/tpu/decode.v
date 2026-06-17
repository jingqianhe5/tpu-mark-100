module decode (
    input  wire        clk,
    input  wire        rst_n,

    input  wire        ins_valid,
    input  wire [31:0] ins,

    output reg  [15:0] ub_wr_host_data_in_0,
    output reg  [15:0] ub_wr_host_data_in_1,
    output reg  [15:0] ub_wr_host_addr_in_0,
    output reg  [15:0] ub_wr_host_addr_in_1,
    output reg         ub_wr_host_valid_in_0,
    output reg         ub_wr_host_valid_in_1,

    output reg         ub_wr_addr_start_in,
    output reg  [15:0] ub_wr_addr_in,
    output reg         ub_wr_accumulate_in,
    output reg         ub_grad_addr_start_in,
    output reg  [15:0] ub_grad_addr_in,

    output reg         ub_rd_start_in,
    output reg         ub_rd_transpose_in,
    output reg  [8:0]  ub_ptr_select_in,
    output reg  [15:0] ub_rd_addr_in,
    output reg  [15:0] ub_rd_row_size_in,
    output reg  [15:0] ub_rd_col_size_in,

  //  output reg  [15:0] learn_rate_in,//学习率 未使用
    output reg  [3:0]  vpu_mode,
    output reg         switch_in
 //   output reg  [15:0] vpu_factor_in,//计算因子 VPU的计算因子
 //   output reg  [15:0] two_div_N_in,//   2/N
);

    localparam [3:0] OP_NOP     = 4'b0000;
    localparam [3:0] OP_LOAD    = 4'b0001;
    localparam [3:0] OP_SET_WR  = 4'b0010;
    localparam [3:0] OP_UB_READ = 4'b0011;
    localparam [3:0] OP_SWITCH  = 4'b0100;
    localparam [3:0] OP_SET_GRAD_ADDR = 4'b0110;
    localparam [3:0] OP_END     = 4'b1111;

    wire [3:0] opcode = ins[31:28];

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            ub_wr_host_data_in_0  <= 16'b0;
            ub_wr_host_data_in_1  <= 16'b0;
            ub_wr_host_addr_in_0  <= 16'b0;
            ub_wr_host_addr_in_1  <= 16'b0;
            ub_wr_host_valid_in_0 <= 1'b0;
            ub_wr_host_valid_in_1 <= 1'b0;
            ub_wr_addr_start_in   <= 1'b0;
            ub_wr_addr_in         <= 16'b0;
            ub_wr_accumulate_in   <= 1'b0;
            ub_grad_addr_start_in <= 1'b0;
            ub_grad_addr_in       <= 16'b0;

            ub_rd_start_in        <= 1'b0;
            ub_rd_transpose_in    <= 1'b0;
            ub_ptr_select_in      <= 9'b0;
            ub_rd_addr_in         <= 16'b0;
            ub_rd_row_size_in     <= 16'b0;
            ub_rd_col_size_in     <= 16'b0;

            vpu_mode              <= 4'b0;
            switch_in             <= 1'b0;
        end else begin
            // 默认每拍清零 pulse / valid 信号
            ub_wr_host_valid_in_0 <= 1'b0;
            ub_wr_host_valid_in_1 <= 1'b0;
            ub_wr_addr_start_in   <= 1'b0;
            ub_grad_addr_start_in <= 1'b0;
            ub_rd_start_in        <= 1'b0;
            ub_rd_transpose_in    <= 1'b0;
            switch_in             <= 1'b0;

            if (ins_valid) begin
                case (opcode)
                    OP_NOP: begin
                        // 空操作
                    end

                    OP_LOAD: begin
                        // 单通道 host append write
                        ub_wr_host_data_in_0  <= ins[15:0];
                        ub_wr_host_addr_in_0  <= ins[27:16];
                        ub_wr_host_valid_in_0 <= 1'b1;

                        // channel 1 永远不用
                        ub_wr_host_data_in_1  <= 16'b0;
                        ub_wr_host_addr_in_1  <= 16'b0;
                        ub_wr_host_valid_in_1 <= 1'b0;
                    end

                    OP_SET_WR: begin
                        ub_wr_addr_in        <= {4'b0, ins[27:16]};
                        ub_wr_addr_start_in  <= 1'b1;
                        ub_wr_accumulate_in  <= ins[15];
                    end

                    OP_UB_READ: begin
                        ub_rd_start_in     <= 1'b1;
                        ub_rd_transpose_in <= ins[4];
                        ub_ptr_select_in   <= {6'b0, ins[27:25]};
                        ub_rd_addr_in      <= {4'b0, ins[24:13]};
                        ub_rd_row_size_in  <= {12'b0, ins[12:9]};
                        ub_rd_col_size_in  <= {12'b0, ins[8:5]};
                        vpu_mode           <= ins[3:0];
                    end

                    OP_SWITCH: begin
                        switch_in <= 1'b1;
                    end

                    OP_SET_GRAD_ADDR: begin
                        ub_grad_addr_in       <= {4'b0, ins[27:16]};
                        ub_grad_addr_start_in <= 1'b1;
                    end

                    OP_END: begin
                        // 外层 controller 处理 END
                    end

                    default: begin
                        // 未定义 opcode，当 NOP
                    end
                endcase
            end
        end
    end

endmodule
