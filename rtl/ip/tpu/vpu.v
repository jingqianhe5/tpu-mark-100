`timescale 1ns/1ps

module vpu#(
    parameter WIDTH = 16,
    parameter F_BITS = 8,
    parameter SYSTOLIC_ARRAY_WIDTH = 8
)
(
    input  clk,
    input  rst_n,

    //选择模式
    input  [3:0] vpu_mode,

    //从矩阵运算单元输入数据
    input  signed [SYSTOLIC_ARRAY_WIDTH*WIDTH-1:0] systolic_data_in,
    input         [SYSTOLIC_ARRAY_WIDTH-1:0]       sysdata_valid_in,

    //从UB来的数据
    input  signed [SYSTOLIC_ARRAY_WIDTH*WIDTH-1:0] bias_scalar_in,
    input  signed [WIDTH-1:0]                      leak_factor_in,
    input  signed [SYSTOLIC_ARRAY_WIDTH*WIDTH-1:0] Y_in,
    input  signed [SYSTOLIC_ARRAY_WIDTH*WIDTH-1:0] H_in,

    input  signed [WIDTH-1:0] two_div_N_in,//缩放因子2/N

    //输出到UB的数据
    output reg signed [SYSTOLIC_ARRAY_WIDTH*WIDTH-1:0] vpu_out,
    output reg        [SYSTOLIC_ARRAY_WIDTH-1:0]       vpu_valid_out
);
    reg signed [WIDTH-1:0] bias_data_in [0:SYSTOLIC_ARRAY_WIDTH-1];
    reg bias_valid_in [0:SYSTOLIC_ARRAY_WIDTH-1];
    wire signed [WIDTH-1:0] bias_data_out [0:SYSTOLIC_ARRAY_WIDTH-1];
    wire bias_valid_out [0:SYSTOLIC_ARRAY_WIDTH-1];
    reg signed [WIDTH-1:0] b2lr_data_in [0:SYSTOLIC_ARRAY_WIDTH-1];
    reg b2lr_valid_in [0:SYSTOLIC_ARRAY_WIDTH-1];
    reg signed [WIDTH-1:0] lr_data_in [0:SYSTOLIC_ARRAY_WIDTH-1];
    reg lr_valid_in [0:SYSTOLIC_ARRAY_WIDTH-1];
    wire signed [WIDTH-1:0] lr_data_out [0:SYSTOLIC_ARRAY_WIDTH-1];
    wire lr_valid_out [0:SYSTOLIC_ARRAY_WIDTH-1];
    reg signed [WIDTH-1:0] vpu_data_mux [0:SYSTOLIC_ARRAY_WIDTH-1];
    reg vpu_valid_mux [0:SYSTOLIC_ARRAY_WIDTH-1];

    genvar lane;
    generate
        for (lane = 0; lane < SYSTOLIC_ARRAY_WIDTH; lane = lane + 1) begin : vpu_lane
            bias_unit #(
                .WIDTH(WIDTH),
                .F_BITS(F_BITS)
            ) bias_unit_inst (
                .clk(clk),
                .rst_n(rst_n),
                .bias_data_in(bias_data_in[lane]),
                .bias_valid_in(bias_valid_in[lane]),
                .bias_scalar_in(bias_scalar_in[lane*WIDTH +: WIDTH]),
                .bias_data_out(bias_data_out[lane]),
                .bias_valid_out(bias_valid_out[lane]),
                .overflow_out()
            );

            leaky_relu_unit #(
                .WIDTH(WIDTH),
                .F_BITS(F_BITS)
            ) leaky_relu_unit_inst (
                .clk(clk),
                .rst_n(rst_n),
                .leaky_data_in(lr_data_in[lane]),
                .leaky_valid_in(lr_valid_in[lane]),
                .leaky_factor_in(leak_factor_in),
                .leaky_data_out(lr_data_out[lane]),
                .leaky_valid_out(lr_valid_out[lane]),
                .leaky_overflow_out()
            );

            // 下面两条路径在当前 digit / external-grad 流程里不参与综合，
            // 先按注释保留，后面如果你要恢复 RTL loss/derivative，再打开即可。
            // loss_unit #(
            //     .WIDTH(WIDTH),
            //     .F_BITS(F_BITS)
            // ) loss_unit_inst (
            //     .clk(clk),
            //     .rst_n(rst_n),
            //     .H_in(loss_data_in[lane]),
            //     .Y_in(Y_in[lane*WIDTH +: WIDTH]),
            //     .valid_in(loss_valid_in[lane]),
            //     .two_div_N_in(two_div_N_in),
            //     .gradient_out(loss_data_out[lane]),
            //     .valid_out(loss_valid_out[lane]),
            //     .loss_overflow_out()
            // );
            // leaky_relu_derivative_unit #(
            //     .WIDTH(WIDTH),
            //     .F_BITS(F_BITS)
            // ) derivative_unit_inst (
            //     .clk(clk),
            //     .rst_n(rst_n),
            //     .gradient_in(lrd_data_in[lane]),
            //     .gradient_valid_in(lrd_valid_in[lane]),
            //     .leaky_factor_in(leak_factor_in),
            //     .leaky_data_in(leaky_data_in[lane]),
            //     .gradient_out(lrd_data_out[lane]),
            //     .gradient_valid_out(lrd_valid_out[lane]),
            //     .overflow_out()
            // );
        end
    endgenerate

    integer lane_i;

    always@ (*)begin
        for (lane_i = 0; lane_i < SYSTOLIC_ARRAY_WIDTH; lane_i = lane_i + 1) begin
            b2lr_data_in[lane_i] = 0;
            b2lr_valid_in[lane_i] = 0;
            lr_data_in[lane_i] = 0;
            lr_valid_in[lane_i] = 0;
            if(!rst_n)begin
                vpu_data_mux[lane_i] = 0;
                vpu_valid_mux[lane_i] = 0;

                bias_data_in[lane_i] = 0;
                bias_valid_in[lane_i] = 0;
            end
            else begin
                if(vpu_mode[3])begin
                    bias_data_in[lane_i] = systolic_data_in[lane_i*WIDTH +: WIDTH];
                    bias_valid_in[lane_i] = sysdata_valid_in[lane_i];

                    b2lr_data_in[lane_i] = bias_data_out[lane_i];
                    b2lr_valid_in[lane_i] = bias_valid_out[lane_i];
                end
                else begin
                    bias_data_in[lane_i] = 0;
                    bias_valid_in[lane_i] = 0;

                    b2lr_data_in[lane_i] = systolic_data_in[lane_i*WIDTH +: WIDTH];
                    b2lr_valid_in[lane_i] = sysdata_valid_in[lane_i];
                end

                if(vpu_mode[2])begin
                    lr_data_in[lane_i] = b2lr_data_in[lane_i];
                    lr_valid_in[lane_i] = b2lr_valid_in[lane_i];

                    vpu_data_mux[lane_i] = lr_data_out[lane_i];
                    vpu_valid_mux[lane_i] = lr_valid_out[lane_i];
                end
                else begin
                    lr_data_in[lane_i] = 0;
                    lr_valid_in[lane_i] = 0;

                    vpu_data_mux[lane_i] = b2lr_data_in[lane_i];
                    vpu_valid_mux[lane_i] = b2lr_valid_in[lane_i];
                end
            end
        end
    end

//输出信号逻辑
    always @(posedge clk or negedge rst_n)begin
        if(!rst_n)begin
            for (lane_i = 0; lane_i < SYSTOLIC_ARRAY_WIDTH; lane_i = lane_i + 1) begin
                vpu_out[lane_i*WIDTH +: WIDTH] <= 0;
                vpu_valid_out[lane_i] <= 0;
            end
        end
        else begin
            for (lane_i = 0; lane_i < SYSTOLIC_ARRAY_WIDTH; lane_i = lane_i + 1) begin
                vpu_out[lane_i*WIDTH +: WIDTH] <= vpu_data_mux[lane_i];
                vpu_valid_out[lane_i] <= vpu_valid_mux[lane_i];
            end
        end
    end
endmodule
