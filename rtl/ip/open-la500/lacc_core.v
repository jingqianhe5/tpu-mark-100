`include "mycpu.h"

`ifdef HAS_LACC
module lacc_core(
    input                       clk,            // LACC 所在时钟域
    input                       reset,          // 复位，高有效

    input                       lacc_flush,     // 流水线冲刷，异常/跳转时清状态

    input                       lacc_req_valid, // EXE 级发来的 LACC 请求有效
    input [`LACC_OP_WIDTH-1: 0] lacc_req_command,// 自定义指令的 command 字段
    input [6: 0]                lacc_req_imm,   // 指令中的 imm 字段
    input [31: 0]               lacc_req_rj,    // rj 源操作数
    input [31: 0]               lacc_req_rk,    // rk 源操作数

    output                      lacc_rsp_valid, // 指令完成，允许继续流转
    output [31: 0]              lacc_rsp_rdat,   // 写回寄存器的数据

    output reg                  lacc_tpu_start,  // TPU_START 脉冲
    output reg [31:0]           lacc_tpu_start_pc,// TPU 起始 PC
    output                      lacc_tpu_cmd_valid,// 发往 TPU 时钟域的有序命令
    input                       lacc_tpu_cmd_ready,// TPU 命令 FIFO 可接收
    output [1:0]                lacc_tpu_cmd_op,   // 1=start, 2=UB write
    output [31:0]               lacc_tpu_cmd_payload,
    input                       tpu_busy,       // TPU 忙
    input                       tpu_done,       // TPU 完成
    input                       tpu_error,      // TPU 错误
    input [8*16-1:0]            tpu_result_data, // TPU 结果，8 路 16-bit
    input [7:0]                 tpu_result_valid,// TPU 结果有效标志

    // 这组访存端口先保留，当前四条指令不走 data bus。
    output                      lacc_data_valid, // 访存请求有效
    input                       lacc_data_ready, // data cache 是否接受请求
    output [31: 0]              lacc_data_addr,  // 访存地址
    output                      lacc_data_read,  // 1=读, 0=写
    output [31: 0]              lacc_data_wdata, // 写入数据
    output [1: 0]               lacc_data_size,  // 访存粒度：byte/half/word

    input                       lacc_drsp_valid, // data cache 返回有效
    input [31: 0]               lacc_drsp_rdata  // data cache 返回数据
);

    localparam [`LACC_OP_WIDTH-1:0] CMD_TPU_START  = 2'd0;
    localparam [`LACC_OP_WIDTH-1:0] CMD_TPU_STATUS = 2'd1;
    localparam [`LACC_OP_WIDTH-1:0] CMD_TPU_READ   = 2'd2;
    localparam [`LACC_OP_WIDTH-1:0] CMD_TPU_CLEAR  = 2'd3;

    localparam [1:0] TPU_CMD_START    = 2'd1;
    localparam [1:0] TPU_CMD_UB_WRITE = 2'd2;

    localparam [6:0] IMM_READ_RESULT = 7'd0;
    localparam [6:0] IMM_UB_WRITE    = 7'd1;
    localparam [6:0] IMM_SET_MODE    = 7'd2;

    localparam [7:0] ERR_NONE          = 8'd0;
    localparam [7:0] ERR_READ_INDEX    = 8'd1;
    localparam [7:0] ERR_READ_EMPTY    = 8'd2;
    localparam [7:0] ERR_TPU_HW        = 8'd3;
    localparam [7:0] ERR_BAD_CMD       = 8'd5;

    reg        busy_reg;           // TPU 是否忙
    reg        done_reg;           // TPU 是否已经结束
    reg        error_reg;          // 是否发生错误
    reg        result_full_reg;    // 结果缓冲区是否已满
    reg        result_overflow_reg;// 结果是否溢出
    reg [7:0]  result_count_reg;   // 已写入的 halfword 数
    reg [7:0]  error_code_reg;     // 最近一次错误码
    reg        result_raw_mode_reg; // raw 顺序写回

    // 128 个 16-bit 槽位，READ 指令一次读两个 halfword 组成一个 32-bit word。
    reg [15:0] result_buffer [0:127];
    reg [127:0] result_valid_bits;  // 每个 halfword 对应一个有效位

    reg [31:0] rsp_data_comb;      // 组合返回值

    // 四条自定义指令：
    // 0: TPU_START
    // 1: TPU_STATUS
    // 2: TPU_READ
    // 3: TPU_CLEAR
    wire start_cmd    = lacc_req_valid && (lacc_req_command == CMD_TPU_START);
    wire status_cmd   = lacc_req_valid && (lacc_req_command == CMD_TPU_STATUS);
    wire read_cmd     = lacc_req_valid &&
                        (lacc_req_command == CMD_TPU_READ) &&
                        (lacc_req_imm == IMM_READ_RESULT);
    wire ub_write_cmd = lacc_req_valid &&
                        (lacc_req_command == CMD_TPU_READ) &&
                        (lacc_req_imm == IMM_UB_WRITE);
    wire set_mode_cmd = lacc_req_valid &&
                        (lacc_req_command == CMD_TPU_READ) &&
                        (lacc_req_imm == IMM_SET_MODE);
    wire clear_cmd    = lacc_req_valid && (lacc_req_command == CMD_TPU_CLEAR);
    wire fifo_cmd     = start_cmd || ub_write_cmd;
    wire fifo_accept  = fifo_cmd && lacc_tpu_cmd_ready;
    wire fifo_stall   = fifo_cmd && !lacc_tpu_cmd_ready;

    wire [5:0] read_word_index = lacc_req_rj[5:0]; // 0~63，每个索引读两个 halfword
    wire       read_index_bad  = 1'b0;
    wire       read_pair_valid = !read_index_bad &&
                                 result_valid_bits[{read_word_index, 1'b0}] &&
                                 result_valid_bits[{read_word_index, 1'b1}];

    wire [31:0] status_word = {
        8'd0,
        error_code_reg,
        result_count_reg,
        2'd0,
        result_raw_mode_reg,
        result_overflow_reg,
        result_full_reg,
        (error_reg | tpu_error),
        (done_reg | tpu_done),
        (busy_reg | tpu_busy)
    };

    integer i; // 清空 result_buffer 用
    integer lane;
    reg [7:0] write_index;

    assign lacc_rsp_valid = lacc_req_valid && (!fifo_cmd || lacc_tpu_cmd_ready);
    assign lacc_rsp_rdat  = rsp_data_comb;

    assign lacc_tpu_cmd_valid = fifo_accept;
    assign lacc_tpu_cmd_op =
        start_cmd ? TPU_CMD_START :
                    TPU_CMD_UB_WRITE;
    assign lacc_tpu_cmd_payload =
        start_cmd ? lacc_req_rj :
                    {lacc_req_rj[15:0], lacc_req_rk[15:0]};

    assign lacc_data_valid = 1'b0;
    assign lacc_data_addr  = 32'd0;
    assign lacc_data_read  = 1'b1;
    assign lacc_data_wdata = 32'd0;
    assign lacc_data_size  = 2'b10;

    wire unused_keep = lacc_data_ready | lacc_drsp_valid | (^lacc_drsp_rdata) | (|lacc_req_rk[31:16]);

    always @(*) begin
        rsp_data_comb = 32'd0;
        if (unused_keep) begin
            rsp_data_comb = rsp_data_comb;
        end
        if (start_cmd || status_cmd || ub_write_cmd || set_mode_cmd) begin
            rsp_data_comb = status_word;
        end else if (read_cmd) begin
            if (!read_pair_valid) begin
                rsp_data_comb = 32'd0;
            end else begin
                rsp_data_comb = {
                    result_buffer[{read_word_index, 1'b1}],
                    result_buffer[{read_word_index, 1'b0}]
                };
            end
        end
    end

    always @(posedge clk) begin
        if (reset || lacc_flush) begin
            busy_reg            <= 1'b0;
            done_reg            <= 1'b0;
            error_reg           <= 1'b0;
            result_full_reg     <= 1'b0;
            result_overflow_reg <= 1'b0;
            result_count_reg    <= 8'd0;
            error_code_reg      <= ERR_NONE;
            result_raw_mode_reg  <= 1'b1;
            result_valid_bits   <= 128'd0;
            lacc_tpu_start      <= 1'b0;
            lacc_tpu_start_pc   <= 32'd0;
            /* verilator lint_off BLKSEQ */
            for (i = 0; i < 128; i = i + 1) begin
                result_buffer[i] = 16'd0;
            end
            /* verilator lint_on BLKSEQ */
        end else begin
            if (start_cmd && lacc_tpu_cmd_ready) begin
                // rj 就是 TPU 指令起始地址。
                lacc_tpu_start_pc   <= lacc_req_rj;
                lacc_tpu_start      <= 1'b1;
                busy_reg            <= 1'b1;
                done_reg            <= 1'b0;
                error_reg           <= 1'b0;
                result_full_reg     <= 1'b0;
                result_overflow_reg <= 1'b0;
                result_count_reg    <= 8'd0;
                error_code_reg      <= ERR_NONE;
                result_valid_bits   <= 128'd0;
                /* verilator lint_off BLKSEQ */
                for (i = 0; i < 128; i = i + 1) begin
                    result_buffer[i] = 16'd0;
                end
                /* verilator lint_on BLKSEQ */
            end else if (lacc_tpu_start && tpu_busy) begin
                lacc_tpu_start <= 1'b0;
            end else if (fifo_stall) begin
                // 等 TPU 命令 FIFO 腾出空间，流水线保持在当前 LACC 指令。
            end else if (ub_write_cmd) begin
                // UB 写命令已经进入跨时钟 FIFO，LACC 本地状态不用修改。
            end else if (set_mode_cmd) begin
                // 4x4 matmul 固定按 raw 32-bit word 顺序写回。
                result_raw_mode_reg <= 1'b1;
            end else if (read_cmd) begin
                if (read_index_bad) begin
                    error_reg      <= 1'b1;
                    error_code_reg <= ERR_READ_INDEX;
                end else if (!read_pair_valid) begin
                    error_reg      <= 1'b1;
                    error_code_reg <= ERR_READ_EMPTY;
                end
            end else if (status_cmd) begin
                // STATUS 只是读状态，不修改内部状态，也不应被判成坏命令。
            end else if (clear_cmd) begin
                busy_reg            <= 1'b0;
                done_reg            <= 1'b0;
                error_reg           <= 1'b0;
                result_full_reg     <= 1'b0;
                result_overflow_reg <= 1'b0;
                result_count_reg    <= 8'd0;
                error_code_reg      <= ERR_NONE;
                result_valid_bits   <= 128'd0;
                lacc_tpu_start      <= 1'b0;
                /* verilator lint_off BLKSEQ */
                for (i = 0; i < 128; i = i + 1) begin
                    result_buffer[i] = 16'd0;
                end
                /* verilator lint_on BLKSEQ */
            end else if (tpu_done) begin
                busy_reg <= 1'b0;
                done_reg <= 1'b1;
            end else if (tpu_error) begin
                busy_reg       <= 1'b0;
                error_reg      <= 1'b1;
                error_code_reg <= ERR_TPU_HW;
            end else if (lacc_req_valid) begin
                error_reg      <= 1'b1;
                error_code_reg <= ERR_BAD_CMD;
            end

            /* verilator lint_off BLKSEQ */
            if (tpu_result_valid != 8'd0) begin
                write_index = result_count_reg;
                for (lane = 0; lane < 8; lane = lane + 1) begin
                    if (tpu_result_valid[lane]) begin
                        if (write_index < 8'd128) begin
                            result_buffer[write_index[6:0]] <= tpu_result_data[16*lane +: 16];
                            result_valid_bits[write_index[6:0]] <= 1'b1;
                            write_index = write_index + 8'd1;
                        end else begin
                            result_overflow_reg <= 1'b1;
                            error_reg           <= 1'b1;
                            error_code_reg      <= ERR_TPU_HW;
                        end
                    end
                end
                result_count_reg <= write_index;
                result_full_reg  <= (write_index >= 8'd96);
            end
            /* verilator lint_on BLKSEQ */
        end
    end

endmodule
`endif
