`timescale 1ns/1ps
//`default_nettype none

module unified_buffer #(
    parameter int UNIFIED_BUFFER_WIDTH = 1024,
    parameter int SYSTOLIC_ARRAY_WIDTH = 8,
    // 置 0 时使用纯 BRAM 友好写法；置 1 时保留旧的同拍累加语义，
    // 但会额外综合一份 shadow memory，资源会明显变大。
    parameter bit SUPPORT_UB_ACCUMULATE = 1'b0
)(
    input logic clk,
    input logic rst,

    // VPU 写回 UB 的 8 路 16-bit 数据，总线切片方式为 lane*16 +: 16。
    input logic [SYSTOLIC_ARRAY_WIDTH*16-1:0] ub_wr_data_in_bus,
    // VPU 写回 UB 的 8 路有效信号，每一位对应一个 lane。
    input logic [SYSTOLIC_ARRAY_WIDTH-1:0] ub_wr_valid_in_bus,
    // VPU 写回 UB 的起始地址，配合 ub_wr_addr_start_in 装入内部写指针。
    input logic [15:0] ub_wr_addr_in,
    // VPU 写回起始地址装载脉冲，高电平 1 拍有效。
    input logic ub_wr_addr_start_in,
    // VPU 写回时是否做累加。注意：同拍读改写不是 BRAM 友好路径。
    input logic ub_wr_accumulate_in,
    // 梯度数据在 UB 中的起始地址，给 gradient_descent 读取 grad 使用。
    input logic [15:0] ub_grad_addr_in,
    // 梯度起始地址装载脉冲，高电平 1 拍有效。
    input logic ub_grad_addr_start_in,

    // host/CPU 向 UB 装载参数的数据总线，总线切片方式为 lane*16 +: 16。
    input logic [SYSTOLIC_ARRAY_WIDTH*16-1:0] ub_wr_host_data_in_bus,
    // host/CPU 向 UB 装载参数的地址总线，总线切片方式为 lane*16 +: 16。
    input logic [SYSTOLIC_ARRAY_WIDTH*16-1:0] ub_wr_host_addr_in_bus,
    // host/CPU 向 UB 装载参数的有效信号，每一位对应一个 lane。
    input logic [SYSTOLIC_ARRAY_WIDTH-1:0] ub_wr_host_valid_in_bus,

    // UB 读启动脉冲，高电平 1 拍有效。
    input logic ub_rd_start_in,
    // UB 读矩阵时是否按转置方式送出。
    input logic ub_rd_transpose,
    // UB 读端口选择：0 input，1 weight，2 bias，3 Y，4 H，5 bias grad，6 weight grad。
    input logic [8:0] ub_ptr_select,
    // UB 读起始地址。
    input logic [15:0] ub_rd_addr_in,
    // UB 读矩阵行数。
    input logic [15:0] ub_rd_row_size,
    // UB 读矩阵列数。
    input logic [15:0] ub_rd_col_size,

    // Q8.8 学习率，gradient_descent 更新参数时使用。
    input logic [15:0] learning_rate_in,

    // 送到 systolic array 左侧的 input 数据，保留前两路独立端口兼容旧 testbench。
    output logic [15:0] ub_rd_input_data_out_0,
    output logic [15:0] ub_rd_input_data_out_1,
    output logic ub_rd_input_valid_out_0,
    output logic ub_rd_input_valid_out_1,
    // 送到 systolic array 左侧的 input 数据总线。
    output logic [SYSTOLIC_ARRAY_WIDTH*16-1:0] ub_rd_input_data_bus_out,
    // 送到 systolic array 左侧的 input valid 总线。
    output logic [SYSTOLIC_ARRAY_WIDTH-1:0] ub_rd_input_valid_bus_out,
    // input 矩阵列数，给 systolic array 作为 row_num 使用。
    output logic [15:0] ub_rd_input_col_size_out,
    // input 矩阵列数有效脉冲。
    output logic ub_rd_input_col_size_valid_out,

    // 送到 systolic array 顶部的 weight 数据，保留前两路独立端口兼容旧 testbench。
    output logic [15:0] ub_rd_weight_data_out_0,
    output logic [15:0] ub_rd_weight_data_out_1,
    output logic ub_rd_weight_valid_out_0,
    output logic ub_rd_weight_valid_out_1,
    // 送到 systolic array 顶部的 weight 数据总线。
    output logic [SYSTOLIC_ARRAY_WIDTH*16-1:0] ub_rd_weight_data_bus_out,
    // 送到 systolic array 顶部的 weight valid 总线。
    output logic [SYSTOLIC_ARRAY_WIDTH-1:0] ub_rd_weight_valid_bus_out,

    // 送到 VPU bias 模块的 bias 数据，保留前两路独立端口兼容旧 testbench。
    output logic [15:0] ub_rd_bias_data_out_0,
    output logic [15:0] ub_rd_bias_data_out_1,
    // 送到 VPU bias 模块的 bias 数据总线。
    output logic [SYSTOLIC_ARRAY_WIDTH*16-1:0] ub_rd_bias_data_bus_out,

    // 送到 VPU loss 模块的 Y/label 数据，保留前两路独立端口兼容旧 testbench。
    output logic [15:0] ub_rd_Y_data_out_0,
    output logic [15:0] ub_rd_Y_data_out_1,
    // 送到 VPU loss 模块的 Y/label 数据总线。
    output logic [SYSTOLIC_ARRAY_WIDTH*16-1:0] ub_rd_Y_data_bus_out,

    // 送到 VPU activation derivative 模块的 H/activation 数据，保留前两路独立端口兼容旧 testbench。
    output logic [15:0] ub_rd_H_data_out_0,
    output logic [15:0] ub_rd_H_data_out_1,
    // 送到 VPU activation derivative 模块的 H/activation 数据总线。
    output logic [SYSTOLIC_ARRAY_WIDTH*16-1:0] ub_rd_H_data_bus_out,

    // weight 矩阵列数，给 systolic array 作为 col_num 使用。
    output logic [15:0] ub_rd_col_size_out,
    // weight 矩阵列数有效脉冲。
    output logic ub_rd_col_size_valid_out
);

    localparam int UB_BANKS      = SYSTOLIC_ARRAY_WIDTH;
    localparam int UB_BANK_W     = (UB_BANKS <= 1) ? 1 : $clog2(UB_BANKS);
    localparam int UB_BANK_DEPTH = (UNIFIED_BUFFER_WIDTH + UB_BANKS - 1) / UB_BANKS;
    localparam int UB_ROW_W      = (UB_BANK_DEPTH <= 1) ? 1 : $clog2(UB_BANK_DEPTH);

    localparam int RD_INPUT    = 0;
    localparam int RD_WEIGHT   = 1;
    localparam int RD_BIAS     = 2;
    localparam int RD_Y        = 3;
    localparam int RD_H        = 4;
    localparam int RD_GRAD_OLD = 5;
    localparam int RD_GRAD_VAL = 6;
    localparam int RD_GROUPS   = 7;

    function automatic logic [UB_BANK_W-1:0] ub_bank(input logic [31:0] addr);
        ub_bank = addr[UB_BANK_W-1:0];
    endfunction

    function automatic logic [UB_ROW_W-1:0] ub_row(input logic [31:0] addr);
        ub_row = addr[UB_BANK_W +: UB_ROW_W];
    endfunction

`ifndef SYNTHESIS
    // 只给 Verilator/C++ testbench 层次化观察使用，综合时不保留这个寄存器数组。
    logic [15:0] ub_memory [0:UNIFIED_BUFFER_WIDTH-1];
`endif
    // 旧反传流程的 ub_wr_accumulate_in 需要同拍读旧值再写回。
    // 标准 BRAM 不能零延迟完成这个动作；只有打开 SUPPORT_UB_ACCUMULATE
    // 时才保留这份 shadow memory，当前 digit/外部梯度流程不需要它。
    logic [15:0] ub_accum_memory [0:UNIFIED_BUFFER_WIDTH-1];

    logic [15:0] ub_rd_input_data_out [SYSTOLIC_ARRAY_WIDTH];
    logic ub_rd_input_valid_out [SYSTOLIC_ARRAY_WIDTH];
    logic [15:0] ub_rd_weight_data_out [SYSTOLIC_ARRAY_WIDTH];
    logic ub_rd_weight_valid_out [SYSTOLIC_ARRAY_WIDTH];
    logic [15:0] ub_rd_bias_data_out [SYSTOLIC_ARRAY_WIDTH];
    logic [15:0] ub_rd_Y_data_out [SYSTOLIC_ARRAY_WIDTH];
    logic [15:0] ub_rd_H_data_out [SYSTOLIC_ARRAY_WIDTH];

    logic [15:0] ub_wr_data_in [SYSTOLIC_ARRAY_WIDTH];
    logic ub_wr_valid_in [SYSTOLIC_ARRAY_WIDTH];
    logic [15:0] ub_wr_host_data_in [SYSTOLIC_ARRAY_WIDTH];
    logic [15:0] ub_wr_host_addr_in [SYSTOLIC_ARRAY_WIDTH];
    logic ub_wr_host_valid_in [SYSTOLIC_ARRAY_WIDTH];

    logic [15:0] wr_ptr;

    logic [15:0] rd_input_ptr;
    logic [15:0] rd_input_row_size;
    logic [15:0] rd_input_col_size;
    logic [15:0] rd_input_time_counter;
    logic rd_input_transpose;

    logic signed [15:0] rd_weight_ptr;
    logic [15:0] rd_weight_row_size;
    logic [15:0] rd_weight_col_size;
    logic [15:0] rd_weight_time_counter;
    logic rd_weight_transpose;
    logic [15:0] rd_weight_skip_size;

    logic [15:0] rd_bias_ptr;
    logic [15:0] rd_bias_row_size;
    logic [15:0] rd_bias_col_size;
    logic [15:0] rd_bias_time_counter;

    logic [15:0] rd_Y_ptr;
    logic [15:0] rd_Y_row_size;
    logic [15:0] rd_Y_col_size;
    logic [15:0] rd_Y_time_counter;

    logic [15:0] rd_H_ptr;
    logic [15:0] rd_H_row_size;
    logic [15:0] rd_H_col_size;
    logic [15:0] rd_H_time_counter;

    logic [15:0] rd_grad_bias_ptr;
    logic [15:0] rd_grad_bias_row_size;
    logic [15:0] rd_grad_bias_col_size;
    logic [15:0] rd_grad_bias_time_counter;

    logic [15:0] rd_grad_weight_ptr;
    logic [15:0] rd_grad_weight_row_size;
    logic [15:0] rd_grad_weight_col_size;
    logic [15:0] rd_grad_weight_time_counter;

    logic [15:0] value_old_in [SYSTOLIC_ARRAY_WIDTH];
    logic [15:0] grad_value_in [SYSTOLIC_ARRAY_WIDTH];
    logic grad_value_valid_in [SYSTOLIC_ARRAY_WIDTH];
    logic [15:0] value_updated_out [SYSTOLIC_ARRAY_WIDTH];
    logic grad_descent_done_out [SYSTOLIC_ARRAY_WIDTH];

    logic [15:0] grad_addr_base;
    logic [15:0] rd_update_grad_ptr;
    logic [15:0] grad_descent_ptr;
    logic grad_bias_or_weight;

    logic [15:0]        wr_ptr_next;
    logic [15:0]        rd_input_ptr_next;
    logic [15:0]        rd_Y_ptr_next;
    logic [15:0]        rd_H_ptr_next;
    logic [15:0]        rd_grad_weight_ptr_next;
    logic [15:0]        rd_update_grad_ptr_next;
    logic [15:0]        grad_descent_ptr_next;
    logic [15:0]        wr_addr_tmp;
    logic [15:0]        wr_data_tmp;
    logic [15:0]        ptr_tmp;
    logic [15:0]        value_ptr_tmp;
    logic [15:0]        grad_ptr_tmp;

    logic [UB_BANKS-1:0] mem_we;
    logic [UB_ROW_W-1:0] mem_waddr [UB_BANKS];
    logic [15:0] mem_wdata [UB_BANKS];

    logic [UB_ROW_W-1:0] rd_row_req [RD_GROUPS][UB_BANKS];
    logic [UB_ROW_W-1:0] rd_row_hold [RD_GROUPS][UB_BANKS];
    logic [15:0] rd_data [RD_GROUPS][UB_BANKS];

    logic rd_valid_req [RD_GROUPS][SYSTOLIC_ARRAY_WIDTH];
    logic [15:0] rd_addr_req [RD_GROUPS][SYSTOLIC_ARRAY_WIDTH];
    logic [UB_BANK_W-1:0] rd_lane_bank_q [RD_GROUPS][SYSTOLIC_ARRAY_WIDTH];

    logic rd_Y_valid_q [SYSTOLIC_ARRAY_WIDTH];
    logic rd_H_valid_q [SYSTOLIC_ARRAY_WIDTH];

    genvar i;
    genvar bank;
    genvar group;

    generate
        for (i = 0; i < SYSTOLIC_ARRAY_WIDTH; i = i + 1) begin : ub_port_unpack
            assign ub_wr_data_in[i] = ub_wr_data_in_bus[i*16 +: 16];
            assign ub_wr_valid_in[i] = ub_wr_valid_in_bus[i];
            assign ub_wr_host_data_in[i] = ub_wr_host_data_in_bus[i*16 +: 16];
            assign ub_wr_host_addr_in[i] = ub_wr_host_addr_in_bus[i*16 +: 16];
            assign ub_wr_host_valid_in[i] = ub_wr_host_valid_in_bus[i];
        end
    endgenerate

    generate
        for (i = 0; i < SYSTOLIC_ARRAY_WIDTH; i = i + 1) begin : gradient_descent_gen
            gradient_descent gradient_descent_inst (
                .clk(clk),
                .rst(rst),
                .lr_in(learning_rate_in),
                .grad_in(grad_value_in[i]),
                .value_old_in(value_old_in[i]),
                .grad_descent_valid_in(grad_value_valid_in[i]),
                .grad_bias_or_weight(grad_bias_or_weight),
                .value_updated_out(value_updated_out[i]),
                .grad_descent_done_out(grad_descent_done_out[i]),
                .grad_overflow_out()
            );
        end
    endgenerate

    // 每个读用途复制一份 banked BRAM；所有副本接收同一组写入。
    // 这样 input/weight/bias/Y/H/grad 可以保持并行读，同时把大 mux 从 LUT 挪到 BRAM。
    generate
        for (group = 0; group < RD_GROUPS; group = group + 1) begin : ub_read_group_gen
            for (bank = 0; bank < UB_BANKS; bank = bank + 1) begin : ub_bank_gen
                ub_bram_1w1r #(
                    .DEPTH(UB_BANK_DEPTH),
                    .ADDR_W(UB_ROW_W)
                ) bram_inst (
                    .clk(clk),
                    .we(mem_we[bank]),
                    .waddr(mem_waddr[bank]),
                    .wdata(mem_wdata[bank]),
                    .raddr(rd_row_req[group][bank]),
                    .rdata(rd_data[group][bank])
                );
            end
        end
    endgenerate

`ifndef SYNTHESIS
    initial begin
        for (int addr = 0; addr < UNIFIED_BUFFER_WIDTH; addr++) begin
            ub_memory[addr] = '0;
        end
    end
`endif
    initial begin
        for (int addr = 0; addr < UNIFIED_BUFFER_WIDTH; addr++) begin
            ub_accum_memory[addr] = '0;
        end
    end

    assign ub_rd_input_data_out_0 = ub_rd_input_data_out[0];
    assign ub_rd_input_data_out_1 = ub_rd_input_data_out[1];
    assign ub_rd_input_valid_out_0 = ub_rd_input_valid_out[0];
    assign ub_rd_input_valid_out_1 = ub_rd_input_valid_out[1];

    assign ub_rd_weight_data_out_0 = ub_rd_weight_data_out[0];
    assign ub_rd_weight_data_out_1 = ub_rd_weight_data_out[1];
    assign ub_rd_weight_valid_out_0 = ub_rd_weight_valid_out[0];
    assign ub_rd_weight_valid_out_1 = ub_rd_weight_valid_out[1];

    assign ub_rd_bias_data_out_0 = ub_rd_bias_data_out[0];
    assign ub_rd_bias_data_out_1 = ub_rd_bias_data_out[1];

    assign ub_rd_Y_data_out_0 = ub_rd_Y_data_out[0];
    assign ub_rd_Y_data_out_1 = ub_rd_Y_data_out[1];

    assign ub_rd_H_data_out_0 = ub_rd_H_data_out[0];
    assign ub_rd_H_data_out_1 = ub_rd_H_data_out[1];

    generate
        for (i = 0; i < SYSTOLIC_ARRAY_WIDTH; i = i + 1) begin : ub_lane_bus_assign
            assign ub_rd_input_data_out[i] =
                ub_rd_input_valid_out[i] ? rd_data[RD_INPUT][rd_lane_bank_q[RD_INPUT][i]] : 16'b0;
            assign ub_rd_weight_data_out[i] =
                ub_rd_weight_valid_out[i] ? rd_data[RD_WEIGHT][rd_lane_bank_q[RD_WEIGHT][i]] : 16'b0;
            assign ub_rd_bias_data_out[i] =
                rd_data[RD_BIAS][rd_lane_bank_q[RD_BIAS][i]];
            assign ub_rd_Y_data_out[i] =
                rd_Y_valid_q[i] ? rd_data[RD_Y][rd_lane_bank_q[RD_Y][i]] : 16'b0;
            assign ub_rd_H_data_out[i] =
                rd_H_valid_q[i] ? rd_data[RD_H][rd_lane_bank_q[RD_H][i]] : 16'b0;
            assign value_old_in[i] =
                grad_value_valid_in[i] ? rd_data[RD_GRAD_OLD][rd_lane_bank_q[RD_GRAD_OLD][i]] : 16'b0;
            assign grad_value_in[i] =
                grad_value_valid_in[i] ? rd_data[RD_GRAD_VAL][rd_lane_bank_q[RD_GRAD_VAL][i]] : 16'b0;

            assign ub_rd_input_data_bus_out[i*16 +: 16] = ub_rd_input_data_out[i];
            assign ub_rd_input_valid_bus_out[i] = ub_rd_input_valid_out[i];
            assign ub_rd_weight_data_bus_out[i*16 +: 16] = ub_rd_weight_data_out[i];
            assign ub_rd_weight_valid_bus_out[i] = ub_rd_weight_valid_out[i];
            assign ub_rd_bias_data_bus_out[i*16 +: 16] = ub_rd_bias_data_out[i];
            assign ub_rd_Y_data_bus_out[i*16 +: 16] = ub_rd_Y_data_out[i];
            assign ub_rd_H_data_bus_out[i*16 +: 16] = ub_rd_H_data_out[i];
        end
    endgenerate

    always_ff @(posedge clk or posedge rst) begin
        if (rst) begin
            ub_rd_col_size_valid_out <= 1'b0;
            ub_rd_col_size_out <= '0;
            ub_rd_input_col_size_valid_out <= 1'b0;
            ub_rd_input_col_size_out <= '0;
        end else begin
            ub_rd_col_size_valid_out <= (ub_rd_start_in && (ub_ptr_select == 9'd1));
            ub_rd_col_size_out <= (ub_rd_start_in && (ub_ptr_select == 9'd1)) ?
                                  (ub_rd_transpose ? ub_rd_row_size : ub_rd_col_size) : 16'b0;
            ub_rd_input_col_size_valid_out <= (ub_rd_start_in && (ub_ptr_select == 9'd0));
            ub_rd_input_col_size_out <= (ub_rd_start_in && (ub_ptr_select == 9'd0)) ?
                                        (ub_rd_transpose ? ub_rd_row_size : ub_rd_col_size) : 16'b0;
        end
    end

    always_comb begin
        wr_addr_tmp = 16'b0;
        wr_data_tmp = 16'b0;
        ptr_tmp = 16'b0;
        value_ptr_tmp = 16'b0;
        grad_ptr_tmp = 16'b0;

        for (int b = 0; b < UB_BANKS; b++) begin
            mem_we[b] = 1'b0;
            mem_waddr[b] = '0;
            mem_wdata[b] = '0;
        end

        for (int g = 0; g < RD_GROUPS; g++) begin
            for (int b = 0; b < UB_BANKS; b++) begin
                rd_row_req[g][b] = rd_row_hold[g][b];
            end
            for (int lane = 0; lane < SYSTOLIC_ARRAY_WIDTH; lane++) begin
                rd_valid_req[g][lane] = 1'b0;
                rd_addr_req[g][lane] = 16'b0;
            end
        end

        wr_ptr_next = ub_wr_addr_start_in ? ub_wr_addr_in : wr_ptr;
        for (int lane = SYSTOLIC_ARRAY_WIDTH-1; lane >= 0; lane--) begin
            if (ub_wr_valid_in[lane]) begin
                wr_addr_tmp = wr_ptr_next;
                wr_data_tmp = (SUPPORT_UB_ACCUMULATE && ub_wr_accumulate_in) ?
                              ($signed(ub_accum_memory[wr_addr_tmp]) + $signed(ub_wr_data_in[lane])) :
                              ub_wr_data_in[lane];
                mem_we[ub_bank(wr_addr_tmp)] = 1'b1;
                mem_waddr[ub_bank(wr_addr_tmp)] = ub_row(wr_addr_tmp);
                mem_wdata[ub_bank(wr_addr_tmp)] = wr_data_tmp;
                wr_ptr_next = wr_ptr_next + 16'd1;
            end else if (ub_wr_host_valid_in[lane]) begin
                mem_we[ub_bank(ub_wr_host_addr_in[lane])] = 1'b1;
                mem_waddr[ub_bank(ub_wr_host_addr_in[lane])] = ub_row(ub_wr_host_addr_in[lane]);
                mem_wdata[ub_bank(ub_wr_host_addr_in[lane])] = ub_wr_host_data_in[lane];
                if (ub_wr_host_addr_in[lane] >= wr_ptr_next) begin
                    wr_ptr_next = ub_wr_host_addr_in[lane] + 16'd1;
                end
            end
        end

        grad_descent_ptr_next = grad_descent_ptr;
        if (grad_bias_or_weight) begin
            for (int lane = SYSTOLIC_ARRAY_WIDTH-1; lane >= 0; lane--) begin
                if (grad_descent_done_out[lane]) begin
                    mem_we[ub_bank(grad_descent_ptr_next)] = 1'b1;
                    mem_waddr[ub_bank(grad_descent_ptr_next)] = ub_row(grad_descent_ptr_next);
                    mem_wdata[ub_bank(grad_descent_ptr_next)] = value_updated_out[lane];
                    grad_descent_ptr_next = grad_descent_ptr_next + 16'd1;
                end
            end
        end else begin
            for (int lane = SYSTOLIC_ARRAY_WIDTH-1; lane >= 0; lane--) begin
                if (grad_descent_done_out[lane]) begin
                    wr_addr_tmp = grad_descent_ptr + lane[15:0];
                    mem_we[ub_bank(wr_addr_tmp)] = 1'b1;
                    mem_waddr[ub_bank(wr_addr_tmp)] = ub_row(wr_addr_tmp);
                    mem_wdata[ub_bank(wr_addr_tmp)] = value_updated_out[lane];
                end
            end
        end

        rd_input_ptr_next = rd_input_ptr;
        if (rd_input_time_counter + 16'd1 < rd_input_row_size + rd_input_col_size) begin
            ptr_tmp = rd_input_ptr;
            if (rd_input_transpose) begin
                for (int lane = 0; lane < SYSTOLIC_ARRAY_WIDTH; lane++) begin
                    if (rd_input_time_counter >= lane[15:0] &&
                        rd_input_time_counter < rd_input_row_size + lane[15:0] &&
                        lane[15:0] < rd_input_col_size) begin
                        rd_valid_req[RD_INPUT][lane] = 1'b1;
                        rd_addr_req[RD_INPUT][lane] = ptr_tmp;
                        ptr_tmp = ptr_tmp + 16'd1;
                    end
                end
            end else begin
                for (int lane = SYSTOLIC_ARRAY_WIDTH-1; lane >= 0; lane--) begin
                    if (rd_input_time_counter >= lane[15:0] &&
                        rd_input_time_counter < rd_input_row_size + lane[15:0] &&
                        lane[15:0] < rd_input_col_size) begin
                        rd_valid_req[RD_INPUT][lane] = 1'b1;
                        rd_addr_req[RD_INPUT][lane] = ptr_tmp;
                        ptr_tmp = ptr_tmp + 16'd1;
                    end
                end
            end
            rd_input_ptr_next = ptr_tmp;
        end

        if (rd_weight_time_counter + 16'd1 < rd_weight_row_size + rd_weight_col_size) begin
            for (int lane = 0; lane < SYSTOLIC_ARRAY_WIDTH; lane++) begin
                if (rd_weight_time_counter >= lane[15:0] &&
                    rd_weight_time_counter < rd_weight_row_size + lane[15:0] &&
                    lane[15:0] < rd_weight_col_size) begin
                    rd_valid_req[RD_WEIGHT][lane] = 1'b1;
                    if (rd_weight_transpose) begin
                        rd_addr_req[RD_WEIGHT][lane] =
                            rd_weight_ptr +
                            (rd_weight_row_size - 16'd1 - (rd_weight_time_counter - lane[15:0])) *
                            rd_weight_skip_size + lane[15:0];
                    end else begin
                        rd_addr_req[RD_WEIGHT][lane] =
                            rd_weight_ptr +
                            (rd_weight_time_counter - lane[15:0]) * rd_weight_skip_size +
                            lane[15:0];
                    end
                end
            end
        end

        if (rd_bias_time_counter + 16'd1 < rd_bias_row_size + rd_bias_col_size) begin
            for (int lane = 0; lane < SYSTOLIC_ARRAY_WIDTH; lane++) begin
                if (rd_bias_time_counter >= lane[15:0] &&
                    rd_bias_time_counter < rd_bias_row_size + lane[15:0] &&
                    lane[15:0] < rd_bias_col_size) begin
                    rd_valid_req[RD_BIAS][lane] = 1'b1;
                    rd_addr_req[RD_BIAS][lane] = rd_bias_ptr + lane[15:0];
                end
            end
        end

        rd_Y_ptr_next = rd_Y_ptr;
        if (rd_Y_time_counter + 16'd1 < rd_Y_row_size + rd_Y_col_size) begin
            ptr_tmp = rd_Y_ptr;
            for (int lane = SYSTOLIC_ARRAY_WIDTH-1; lane >= 0; lane--) begin
                if (rd_Y_time_counter >= lane[15:0] &&
                    rd_Y_time_counter < rd_Y_row_size + lane[15:0] &&
                    lane[15:0] < rd_Y_col_size) begin
                    rd_valid_req[RD_Y][lane] = 1'b1;
                    rd_addr_req[RD_Y][lane] = ptr_tmp;
                    ptr_tmp = ptr_tmp + 16'd1;
                end
            end
            rd_Y_ptr_next = ptr_tmp;
        end

        rd_H_ptr_next = rd_H_ptr;
        if (rd_H_time_counter + 16'd1 < rd_H_row_size + rd_H_col_size) begin
            ptr_tmp = rd_H_ptr;
            for (int lane = SYSTOLIC_ARRAY_WIDTH-1; lane >= 0; lane--) begin
                if (rd_H_time_counter >= lane[15:0] &&
                    rd_H_time_counter < rd_H_row_size + lane[15:0] &&
                    lane[15:0] < rd_H_col_size) begin
                    rd_valid_req[RD_H][lane] = 1'b1;
                    rd_addr_req[RD_H][lane] = ptr_tmp;
                    ptr_tmp = ptr_tmp + 16'd1;
                end
            end
            rd_H_ptr_next = ptr_tmp;
        end

        rd_grad_weight_ptr_next = rd_grad_weight_ptr;
        rd_update_grad_ptr_next = rd_update_grad_ptr;
        if (rd_grad_bias_time_counter + 16'd1 < rd_grad_bias_row_size + rd_grad_bias_col_size) begin
            for (int lane = 0; lane < SYSTOLIC_ARRAY_WIDTH; lane++) begin
                if (rd_grad_bias_time_counter >= lane[15:0] &&
                    rd_grad_bias_time_counter < rd_grad_bias_row_size + lane[15:0] &&
                    lane[15:0] < rd_grad_bias_col_size) begin
                    rd_valid_req[RD_GRAD_OLD][lane] = 1'b1;
                    rd_valid_req[RD_GRAD_VAL][lane] = 1'b1;
                    rd_addr_req[RD_GRAD_OLD][lane] = rd_grad_bias_ptr + lane[15:0];
                    rd_addr_req[RD_GRAD_VAL][lane] = rd_update_grad_ptr + lane[15:0];
                end
            end
        end else if (rd_grad_weight_time_counter + 16'd1 < rd_grad_weight_row_size + rd_grad_weight_col_size) begin
            value_ptr_tmp = rd_grad_weight_ptr;
            grad_ptr_tmp = rd_update_grad_ptr;
            for (int lane = SYSTOLIC_ARRAY_WIDTH-1; lane >= 0; lane--) begin
                if (rd_grad_weight_time_counter >= lane[15:0] &&
                    rd_grad_weight_time_counter < rd_grad_weight_row_size + lane[15:0] &&
                    lane[15:0] < rd_grad_weight_col_size) begin
                    rd_valid_req[RD_GRAD_OLD][lane] = 1'b1;
                    rd_valid_req[RD_GRAD_VAL][lane] = 1'b1;
                    rd_addr_req[RD_GRAD_OLD][lane] = value_ptr_tmp;
                    rd_addr_req[RD_GRAD_VAL][lane] = grad_ptr_tmp;
                    value_ptr_tmp = value_ptr_tmp + 16'd1;
                    grad_ptr_tmp = grad_ptr_tmp + 16'd1;
                end
            end
            rd_grad_weight_ptr_next = value_ptr_tmp;
            rd_update_grad_ptr_next = grad_ptr_tmp;
        end

        for (int g = 0; g < RD_GROUPS; g++) begin
            for (int lane = 0; lane < SYSTOLIC_ARRAY_WIDTH; lane++) begin
                if (rd_valid_req[g][lane]) begin
                    rd_row_req[g][ub_bank(rd_addr_req[g][lane])] = ub_row(rd_addr_req[g][lane]);
                end
            end
        end
    end

    always_ff @(posedge clk or posedge rst) begin
        if (rst) begin
            wr_ptr <= '0;
            grad_addr_base <= '0;

            rd_input_ptr <= '0;
            rd_input_row_size <= '0;
            rd_input_col_size <= '0;
            rd_input_time_counter <= '0;
            rd_input_transpose <= 1'b0;

            rd_weight_ptr <= '0;
            rd_weight_row_size <= '0;
            rd_weight_col_size <= '0;
            rd_weight_time_counter <= '0;
            rd_weight_transpose <= 1'b0;
            rd_weight_skip_size <= '0;

            rd_bias_ptr <= '0;
            rd_bias_row_size <= '0;
            rd_bias_col_size <= '0;
            rd_bias_time_counter <= '0;

            rd_Y_ptr <= '0;
            rd_Y_row_size <= '0;
            rd_Y_col_size <= '0;
            rd_Y_time_counter <= '0;

            rd_H_ptr <= '0;
            rd_H_row_size <= '0;
            rd_H_col_size <= '0;
            rd_H_time_counter <= '0;

            rd_grad_bias_ptr <= '0;
            rd_grad_bias_row_size <= '0;
            rd_grad_bias_col_size <= '0;
            rd_grad_bias_time_counter <= '0;

            rd_grad_weight_ptr <= '0;
            rd_grad_weight_row_size <= '0;
            rd_grad_weight_col_size <= '0;
            rd_grad_weight_time_counter <= '0;
            rd_update_grad_ptr <= '0;
            grad_bias_or_weight <= 1'b0;
            grad_descent_ptr <= '0;

            for (int g = 0; g < RD_GROUPS; g++) begin
                for (int b = 0; b < UB_BANKS; b++) begin
                    rd_row_hold[g][b] <= '0;
                end
                for (int lane = 0; lane < SYSTOLIC_ARRAY_WIDTH; lane++) begin
                    rd_lane_bank_q[g][lane] <= '0;
                end
            end

            for (int lane = 0; lane < SYSTOLIC_ARRAY_WIDTH; lane++) begin
                ub_rd_input_valid_out[lane] <= 1'b0;
                ub_rd_weight_valid_out[lane] <= 1'b0;
                rd_Y_valid_q[lane] <= 1'b0;
                rd_H_valid_q[lane] <= 1'b0;
                grad_value_valid_in[lane] <= 1'b0;
            end
        end else begin
            if (ub_grad_addr_start_in) begin
                grad_addr_base <= ub_grad_addr_in;
            end

            wr_ptr <= wr_ptr_next;
            grad_descent_ptr <= grad_descent_ptr_next;

            for (int g = 0; g < RD_GROUPS; g++) begin
                for (int b = 0; b < UB_BANKS; b++) begin
                    rd_row_hold[g][b] <= rd_row_req[g][b];
                end
                for (int lane = 0; lane < SYSTOLIC_ARRAY_WIDTH; lane++) begin
                    if (rd_valid_req[g][lane]) begin
                        rd_lane_bank_q[g][lane] <= ub_bank(rd_addr_req[g][lane]);
                    end
                end
            end

            for (int lane = 0; lane < SYSTOLIC_ARRAY_WIDTH; lane++) begin
                ub_rd_input_valid_out[lane] <= rd_valid_req[RD_INPUT][lane];
                ub_rd_weight_valid_out[lane] <= rd_valid_req[RD_WEIGHT][lane];
                rd_Y_valid_q[lane] <= rd_valid_req[RD_Y][lane];
                rd_H_valid_q[lane] <= rd_valid_req[RD_H][lane];
                grad_value_valid_in[lane] <= rd_valid_req[RD_GRAD_OLD][lane] & rd_valid_req[RD_GRAD_VAL][lane];
            end

            if (rd_input_time_counter + 16'd1 < rd_input_row_size + rd_input_col_size) begin
                rd_input_time_counter <= rd_input_time_counter + 16'd1;
                rd_input_ptr <= rd_input_ptr_next;
            end else begin
                rd_input_ptr <= 16'b0;
                rd_input_row_size <= 16'b0;
                rd_input_col_size <= 16'b0;
                rd_input_time_counter <= 16'b0;
            end

            if (rd_weight_time_counter + 16'd1 < rd_weight_row_size + rd_weight_col_size) begin
                rd_weight_time_counter <= rd_weight_time_counter + 16'd1;
            end else begin
                rd_weight_ptr <= 16'b0;
                rd_weight_row_size <= 16'b0;
                rd_weight_col_size <= 16'b0;
                rd_weight_time_counter <= 16'b0;
            end

            if (rd_bias_time_counter + 16'd1 < rd_bias_row_size + rd_bias_col_size) begin
                rd_bias_time_counter <= rd_bias_time_counter + 16'd1;
            end else begin
                rd_bias_ptr <= 16'b0;
                rd_bias_row_size <= 16'b0;
                rd_bias_col_size <= 16'b0;
                rd_bias_time_counter <= 16'b0;
            end

            if (rd_Y_time_counter + 16'd1 < rd_Y_row_size + rd_Y_col_size) begin
                rd_Y_time_counter <= rd_Y_time_counter + 16'd1;
                rd_Y_ptr <= rd_Y_ptr_next;
            end else begin
                rd_Y_ptr <= 16'b0;
                rd_Y_row_size <= 16'b0;
                rd_Y_col_size <= 16'b0;
                rd_Y_time_counter <= 16'b0;
            end

            if (rd_H_time_counter + 16'd1 < rd_H_row_size + rd_H_col_size) begin
                rd_H_time_counter <= rd_H_time_counter + 16'd1;
                rd_H_ptr <= rd_H_ptr_next;
            end else begin
                rd_H_ptr <= 16'b0;
                rd_H_row_size <= 16'b0;
                rd_H_col_size <= 16'b0;
                rd_H_time_counter <= 16'b0;
            end

            if (rd_grad_bias_time_counter + 16'd1 < rd_grad_bias_row_size + rd_grad_bias_col_size) begin
                rd_grad_bias_time_counter <= rd_grad_bias_time_counter + 16'd1;
            end else if (rd_grad_weight_time_counter + 16'd1 < rd_grad_weight_row_size + rd_grad_weight_col_size) begin
                rd_grad_weight_time_counter <= rd_grad_weight_time_counter + 16'd1;
                rd_grad_weight_ptr <= rd_grad_weight_ptr_next;
                rd_update_grad_ptr <= rd_update_grad_ptr_next;
            end else begin
                rd_grad_bias_ptr <= 16'b0;
                rd_grad_bias_row_size <= 16'b0;
                rd_grad_bias_col_size <= 16'b0;
                rd_grad_bias_time_counter <= 16'b0;
                rd_grad_weight_ptr <= 16'b0;
                rd_grad_weight_row_size <= 16'b0;
                rd_grad_weight_col_size <= 16'b0;
                rd_grad_weight_time_counter <= 16'b0;
                rd_update_grad_ptr <= 16'b0;
            end

            if (ub_rd_start_in) begin
                case (ub_ptr_select)
                    9'd0: begin
                        rd_input_transpose <= ub_rd_transpose;
                        rd_input_ptr <= ub_rd_addr_in;
                        if (ub_rd_transpose) begin
                            rd_input_row_size <= ub_rd_col_size;
                            rd_input_col_size <= ub_rd_row_size;
                        end else begin
                            rd_input_row_size <= ub_rd_row_size;
                            rd_input_col_size <= ub_rd_col_size;
                        end
                        rd_input_time_counter <= 16'b0;
                    end
                    9'd1: begin
                        rd_weight_transpose <= ub_rd_transpose;
                        if (ub_rd_transpose) begin
                            rd_weight_row_size <= ub_rd_col_size;
                            rd_weight_col_size <= ub_rd_row_size;
                            rd_weight_ptr <= ub_rd_addr_in;
                            rd_weight_skip_size <= ub_rd_row_size;
                        end else begin
                            rd_weight_row_size <= ub_rd_row_size;
                            rd_weight_col_size <= ub_rd_col_size;
                            rd_weight_ptr <= ub_rd_addr_in;
                            rd_weight_skip_size <= ub_rd_col_size;
                        end
                        rd_weight_time_counter <= 16'b0;
                    end
                    9'd2: begin
                        rd_bias_ptr <= ub_rd_addr_in;
                        rd_bias_row_size <= ub_rd_row_size;
                        rd_bias_col_size <= ub_rd_col_size;
                        rd_bias_time_counter <= 16'b0;
                    end
                    9'd3: begin
                        rd_Y_ptr <= ub_rd_addr_in;
                        rd_Y_row_size <= ub_rd_row_size;
                        rd_Y_col_size <= ub_rd_col_size;
                        rd_Y_time_counter <= 16'b0;
                    end
                    9'd4: begin
                        rd_H_ptr <= ub_rd_addr_in;
                        rd_H_row_size <= ub_rd_row_size;
                        rd_H_col_size <= ub_rd_col_size;
                        rd_H_time_counter <= 16'b0;
                    end
                    9'd5: begin
                        rd_grad_bias_ptr <= ub_rd_addr_in;
                        rd_grad_bias_row_size <= ub_rd_row_size;
                        rd_grad_bias_col_size <= ub_rd_col_size;
                        rd_grad_bias_time_counter <= 16'b0;
                        rd_update_grad_ptr <= grad_addr_base;
                        grad_bias_or_weight <= 1'b0;
                        grad_descent_ptr <= ub_rd_addr_in;
                    end
                    9'd6: begin
                        rd_grad_weight_ptr <= ub_rd_addr_in;
                        rd_grad_weight_row_size <= ub_rd_row_size;
                        rd_grad_weight_col_size <= ub_rd_col_size;
                        rd_grad_weight_time_counter <= 16'b0;
                        rd_update_grad_ptr <= grad_addr_base;
                        grad_bias_or_weight <= 1'b1;
                        grad_descent_ptr <= ub_rd_addr_in;
                    end
                    default: begin
                    end
                endcase
            end

`ifndef SYNTHESIS
            for (int b = 0; b < UB_BANKS; b++) begin
                if (mem_we[b]) begin
                    int flat_addr;
                    flat_addr = mem_waddr[b] * UB_BANKS + b;
                    if (flat_addr < UNIFIED_BUFFER_WIDTH) begin
                        ub_memory[flat_addr] <= mem_wdata[b];
                    end
                end
            end
`endif
            if (SUPPORT_UB_ACCUMULATE) begin
                for (int b = 0; b < UB_BANKS; b++) begin
                    if (mem_we[b]) begin
                        int flat_addr;
                        flat_addr = mem_waddr[b] * UB_BANKS + b;
                        if (flat_addr < UNIFIED_BUFFER_WIDTH) begin
                            ub_accum_memory[flat_addr] <= mem_wdata[b];
                        end
                    end
                end
            end
        end
    end
endmodule

/* verilator lint_off DECLFILENAME */
module ub_bram_1w1r #(
    parameter int DEPTH = 128,
    parameter int ADDR_W = 7
)(
    input logic clk,
    input logic we,
    input logic [ADDR_W-1:0] waddr,
    input logic [15:0] wdata,
    input logic [ADDR_W-1:0] raddr,
    output logic [15:0] rdata
);
    (* ram_style = "block" *) logic [15:0] mem [0:DEPTH-1];

    initial begin
        for (int i = 0; i < DEPTH; i++) begin
            mem[i] = 16'b0;
        end
    end

    always_ff @(posedge clk) begin
        if (we) begin
            mem[waddr] <= wdata;
        end
        rdata <= mem[raddr];
    end
endmodule
/* verilator lint_on DECLFILENAME */
