module tpu#(
    parameter SYSTOLIC_ARRAY_WIDTH = 8
)
(
    input  clk,
    input  rst_n,

    input wire [15:0] ub_wr_host_data_in_0,
    input wire [15:0] ub_wr_host_data_in_1,
    input wire [15:0] ub_wr_host_addr_in_0,
    input wire [15:0] ub_wr_host_addr_in_1,
    input wire ub_wr_host_valid_in_0,
    input wire ub_wr_host_valid_in_1,

    //数据操作信号
    input   ub_wr_addr_start_in,
    input   [15:0] ub_wr_addr_in,//VPU写回UB的起始地址
    input   ub_wr_accumulate_in,//VPU写回UB时是否累加
    input   ub_grad_addr_start_in,
    input   [15:0] ub_grad_addr_in,//gradient_descent读取gradient的起始地址
    input   ub_rd_start_in,
    input   ub_rd_transpose_in,
    input   [8:0] ub_ptr_select_in,//需要读取的数据类型
    input   [15:0] ub_rd_addr_in,//需要读取的数据地址
    input   [15:0] ub_rd_row_size_in,//数据矩阵的行数
    input   [15:0] ub_rd_col_size_in,//数据矩阵的烈数

    //学习率传入
    input   [15:0] learn_rate_in,

    //VPU
    input   [3:0] vpu_mode,//选择信号在VPU的数据通路
    input   switch_in,//双缓冲切换信号
    input   [15:0] vpu_factor_in,//VPU的计算因子
    input   [15:0] two_div_N_in,//   2/N

    // VPU 8-lane outputs
    output  [15:0] vpu_data_out_0,
    output  [15:0] vpu_data_out_1,
    output  [15:0] vpu_data_out_2,
    output  [15:0] vpu_data_out_3,
    output  [15:0] vpu_data_out_4,
    output  [15:0] vpu_data_out_5,
    output  [15:0] vpu_data_out_6,
    output  [15:0] vpu_data_out_7,
    output  vpu_data_valid_out_0,
    output  vpu_data_valid_out_1,
    output  vpu_data_valid_out_2,
    output  vpu_data_valid_out_3,
    output  vpu_data_valid_out_4,
    output  vpu_data_valid_out_5,
    output  vpu_data_valid_out_6,
    output  vpu_data_valid_out_7,

    // Systolic 8-lane outputs
    output wire [15:0] sys_data_out_0,
    output wire [15:0] sys_data_out_1,
    output wire [15:0] sys_data_out_2,
    output wire [15:0] sys_data_out_3,
    output wire [15:0] sys_data_out_4,
    output wire [15:0] sys_data_out_5,
    output wire [15:0] sys_data_out_6,
    output wire [15:0] sys_data_out_7,
    output wire sys_valid_out_0,
    output wire sys_valid_out_1,
    output wire sys_valid_out_2,
    output wire sys_valid_out_3,
    output wire sys_valid_out_4,
    output wire sys_valid_out_5,
    output wire sys_valid_out_6,
    output wire sys_valid_out_7,

    //其他数据输出，保留前两路作为外部观测/旧 testbench 兼容口
    output  [15:0] ub_rd_input_data_out_0,
    output  [15:0] ub_rd_input_data_out_1,
    output  ub_rd_input_valid_out_0,
    output  ub_rd_input_valid_out_1,

    output  [15:0] ub_rd_weight_data_out_0,
    output  [15:0] ub_rd_weight_data_out_1,
    output  ub_rd_weight_valid_out_0,
    output  ub_rd_weight_valid_out_1,

    output  [15:0] ub_rd_bias_data_out_0,
    output  [15:0] ub_rd_bias_data_out_1,
    output  [15:0] ub_rd_Y_data_out_0,
    output  [15:0] ub_rd_Y_data_out_1,
    output  [15:0] ub_rd_H_data_out_0,
    output  [15:0] ub_rd_H_data_out_1,

    output  [15:0] ub_rd_col_size_out,
    output  ub_rd_col_size_valid_out

);

    wire [SYSTOLIC_ARRAY_WIDTH*16-1:0] ub_wr_data_bus_in;
    wire [SYSTOLIC_ARRAY_WIDTH-1:0] ub_wr_valid_bus_in;
    wire [15:0] ub_wr_data_in [0:SYSTOLIC_ARRAY_WIDTH-1];
    wire ub_wr_valid_in [0:SYSTOLIC_ARRAY_WIDTH-1];
    wire [15:0] ub_wr_host_data_in [0:SYSTOLIC_ARRAY_WIDTH-1];
    wire [15:0] ub_wr_host_addr_in [0:SYSTOLIC_ARRAY_WIDTH-1];
    wire ub_wr_host_valid_in [0:SYSTOLIC_ARRAY_WIDTH-1];
    wire [SYSTOLIC_ARRAY_WIDTH*16-1:0] ub_wr_host_data_bus_in;
    wire [SYSTOLIC_ARRAY_WIDTH*16-1:0] ub_wr_host_addr_bus_in;
    wire [SYSTOLIC_ARRAY_WIDTH-1:0] ub_wr_host_valid_bus_in;

    wire [SYSTOLIC_ARRAY_WIDTH*16-1:0] ub_rd_input_data_bus_out;
    wire [SYSTOLIC_ARRAY_WIDTH-1:0] ub_rd_input_valid_bus_out;
    wire [15:0] ub_rd_input_col_size_out;
    wire ub_rd_input_col_size_valid_out;
    wire [SYSTOLIC_ARRAY_WIDTH*16-1:0] ub_rd_weight_data_bus_out;
    wire [SYSTOLIC_ARRAY_WIDTH-1:0] ub_rd_weight_valid_bus_out;

    wire [SYSTOLIC_ARRAY_WIDTH*16-1:0] ub_rd_bias_data_bus_in;
    wire [SYSTOLIC_ARRAY_WIDTH*16-1:0] ub_rd_Y_data_bus_in;
    wire [SYSTOLIC_ARRAY_WIDTH*16-1:0] ub_rd_H_data_bus_in;

    wire [SYSTOLIC_ARRAY_WIDTH*16-1:0] sys_data_bus_out;
    wire [SYSTOLIC_ARRAY_WIDTH-1:0] sys_valid_bus_out;

    wire [SYSTOLIC_ARRAY_WIDTH*16-1:0] vpu_data_bus_out;
    wire [SYSTOLIC_ARRAY_WIDTH-1:0] vpu_valid_bus_out;

    genvar lane;
    generate
        for (lane = 0; lane < SYSTOLIC_ARRAY_WIDTH; lane = lane + 1) begin : tpu_lane_assign
            assign ub_wr_data_bus_in[lane*16 +: 16] = vpu_data_bus_out[lane*16 +: 16];
            assign ub_wr_valid_bus_in[lane] = vpu_valid_bus_out[lane];
            assign ub_wr_data_in[lane] = ub_wr_data_bus_in[lane*16 +: 16];
            assign ub_wr_valid_in[lane] = ub_wr_valid_bus_in[lane];
            assign ub_wr_host_data_bus_in[lane*16 +: 16] = ub_wr_host_data_in[lane];
            assign ub_wr_host_addr_bus_in[lane*16 +: 16] = ub_wr_host_addr_in[lane];
            assign ub_wr_host_valid_bus_in[lane] = ub_wr_host_valid_in[lane];
        end
    endgenerate

    assign ub_wr_host_data_in[0] = ub_wr_host_data_in_0;
    assign ub_wr_host_data_in[1] = ub_wr_host_data_in_1;
    assign ub_wr_host_addr_in[0] = ub_wr_host_addr_in_0;
    assign ub_wr_host_addr_in[1] = ub_wr_host_addr_in_1;
    assign ub_wr_host_valid_in[0] = ub_wr_host_valid_in_0;
    assign ub_wr_host_valid_in[1] = ub_wr_host_valid_in_1;

    generate
        for (lane = 2; lane < SYSTOLIC_ARRAY_WIDTH; lane = lane + 1) begin : host_unused_assign
            assign ub_wr_host_data_in[lane] = 16'b0;
            assign ub_wr_host_addr_in[lane] = 16'b0;
            assign ub_wr_host_valid_in[lane] = 1'b0;
        end
    endgenerate

    assign vpu_data_out_0 = vpu_data_bus_out[0*16 +: 16];
    assign vpu_data_out_1 = vpu_data_bus_out[1*16 +: 16];
    assign vpu_data_out_2 = vpu_data_bus_out[2*16 +: 16];
    assign vpu_data_out_3 = vpu_data_bus_out[3*16 +: 16];
    assign vpu_data_out_4 = vpu_data_bus_out[4*16 +: 16];
    assign vpu_data_out_5 = vpu_data_bus_out[5*16 +: 16];
    assign vpu_data_out_6 = vpu_data_bus_out[6*16 +: 16];
    assign vpu_data_out_7 = vpu_data_bus_out[7*16 +: 16];
    assign vpu_data_valid_out_0 = vpu_valid_bus_out[0];
    assign vpu_data_valid_out_1 = vpu_valid_bus_out[1];
    assign vpu_data_valid_out_2 = vpu_valid_bus_out[2];
    assign vpu_data_valid_out_3 = vpu_valid_bus_out[3];
    assign vpu_data_valid_out_4 = vpu_valid_bus_out[4];
    assign vpu_data_valid_out_5 = vpu_valid_bus_out[5];
    assign vpu_data_valid_out_6 = vpu_valid_bus_out[6];
    assign vpu_data_valid_out_7 = vpu_valid_bus_out[7];

    assign sys_data_out_0 = sys_data_bus_out[0*16 +: 16];
    assign sys_data_out_1 = sys_data_bus_out[1*16 +: 16];
    assign sys_data_out_2 = sys_data_bus_out[2*16 +: 16];
    assign sys_data_out_3 = sys_data_bus_out[3*16 +: 16];
    assign sys_data_out_4 = sys_data_bus_out[4*16 +: 16];
    assign sys_data_out_5 = sys_data_bus_out[5*16 +: 16];
    assign sys_data_out_6 = sys_data_bus_out[6*16 +: 16];
    assign sys_data_out_7 = sys_data_bus_out[7*16 +: 16];
    assign sys_valid_out_0 = sys_valid_bus_out[0];
    assign sys_valid_out_1 = sys_valid_bus_out[1];
    assign sys_valid_out_2 = sys_valid_bus_out[2];
    assign sys_valid_out_3 = sys_valid_bus_out[3];
    assign sys_valid_out_4 = sys_valid_bus_out[4];
    assign sys_valid_out_5 = sys_valid_bus_out[5];
    assign sys_valid_out_6 = sys_valid_bus_out[6];
    assign sys_valid_out_7 = sys_valid_bus_out[7];

    unified_buffer #(
        .UNIFIED_BUFFER_WIDTH(1024),
        .SYSTOLIC_ARRAY_WIDTH(SYSTOLIC_ARRAY_WIDTH)
    ) ub_inst(
        .clk(clk),
        .rst(~rst_n),

        .ub_wr_data_in_bus(ub_wr_data_bus_in),
        .ub_wr_valid_in_bus(ub_wr_valid_bus_in),
        .ub_wr_addr_in(ub_wr_addr_in),
        .ub_wr_addr_start_in(ub_wr_addr_start_in),
        .ub_wr_accumulate_in(ub_wr_accumulate_in),
        .ub_grad_addr_in(ub_grad_addr_in),
        .ub_grad_addr_start_in(ub_grad_addr_start_in),

        // Write ports from host to UB (for loading in parameters)
        .ub_wr_host_data_in_bus(ub_wr_host_data_bus_in),
        .ub_wr_host_addr_in_bus(ub_wr_host_addr_bus_in),
        .ub_wr_host_valid_in_bus(ub_wr_host_valid_bus_in),

        // Read instruction input from instruction memory
        .ub_rd_start_in(ub_rd_start_in),
        .ub_rd_transpose(ub_rd_transpose_in),
        .ub_ptr_select(ub_ptr_select_in),
        .ub_rd_addr_in(ub_rd_addr_in),
        .ub_rd_row_size(ub_rd_row_size_in),
        .ub_rd_col_size(ub_rd_col_size_in),

        // Learning rate input
        .learning_rate_in(learn_rate_in),

        // Read ports from UB to left side of systolic array
        .ub_rd_input_data_out_0(ub_rd_input_data_out_0),
        .ub_rd_input_data_out_1(ub_rd_input_data_out_1),
        .ub_rd_input_valid_out_0(ub_rd_input_valid_out_0),
        .ub_rd_input_valid_out_1(ub_rd_input_valid_out_1),
        .ub_rd_input_data_bus_out(ub_rd_input_data_bus_out),
        .ub_rd_input_valid_bus_out(ub_rd_input_valid_bus_out),
        .ub_rd_input_col_size_out(ub_rd_input_col_size_out),
        .ub_rd_input_col_size_valid_out(ub_rd_input_col_size_valid_out),

        // Read ports from UB to top of systolic array
        .ub_rd_weight_data_out_0(ub_rd_weight_data_out_0),
        .ub_rd_weight_data_out_1(ub_rd_weight_data_out_1),
        .ub_rd_weight_valid_out_0(ub_rd_weight_valid_out_0),
        .ub_rd_weight_valid_out_1(ub_rd_weight_valid_out_1),
        .ub_rd_weight_data_bus_out(ub_rd_weight_data_bus_out),
        .ub_rd_weight_valid_bus_out(ub_rd_weight_valid_bus_out),

        // Read ports from UB to bias modules in VPU
        .ub_rd_bias_data_out_0(ub_rd_bias_data_out_0),
        .ub_rd_bias_data_out_1(ub_rd_bias_data_out_1),
        .ub_rd_bias_data_bus_out(ub_rd_bias_data_bus_in),

        // Read ports from UB to loss modules (Y matrices) in VPU
        .ub_rd_Y_data_out_0(ub_rd_Y_data_out_0),
        .ub_rd_Y_data_out_1(ub_rd_Y_data_out_1),
        .ub_rd_Y_data_bus_out(ub_rd_Y_data_bus_in),

        // Read ports from UB to activation derivative modules (H matrices) in VPU
        .ub_rd_H_data_out_0(ub_rd_H_data_out_0),
        .ub_rd_H_data_out_1(ub_rd_H_data_out_1),
        .ub_rd_H_data_bus_out(ub_rd_H_data_bus_in),

        //激活的列数
        .ub_rd_col_size_out(ub_rd_col_size_out),
        .ub_rd_col_size_valid_out(ub_rd_col_size_valid_out)
    );

    systolic #(
        .SYSTOLIC_ARRAY_WIDTH(SYSTOLIC_ARRAY_WIDTH)
    ) systolic_inst (
        .clk(clk),
        .rst_n(rst_n),

        .x_data_in(ub_rd_input_data_bus_out),
        .x_valid_in(ub_rd_input_valid_bus_out),

        .z_data_out(sys_data_bus_out),
        .z_valid_out(sys_valid_bus_out),

        .w_data_in(ub_rd_weight_data_bus_out),
        .weight_valid_col(ub_rd_weight_valid_bus_out),

        .switch_in(switch_in),

        .col_num(ub_rd_col_size_out),
        .col_num_valid(ub_rd_col_size_valid_out),
        .row_num(ub_rd_input_col_size_out),
        .row_num_valid(ub_rd_input_col_size_valid_out)
    );

    vpu #(
        .SYSTOLIC_ARRAY_WIDTH(SYSTOLIC_ARRAY_WIDTH)
    ) vpu_inst (
        .clk(clk),
        .rst_n(rst_n),

        .vpu_mode(vpu_mode),

        .systolic_data_in(sys_data_bus_out),
        .sysdata_valid_in(sys_valid_bus_out),

        .bias_scalar_in(ub_rd_bias_data_bus_in),
        .leak_factor_in(vpu_factor_in),
        .Y_in(ub_rd_Y_data_bus_in),
        .H_in(ub_rd_H_data_bus_in),
        .two_div_N_in(two_div_N_in),

        .vpu_out(vpu_data_bus_out),
        .vpu_valid_out(vpu_valid_bus_out)
    );
endmodule
