module leaky_relu_derivative_centre #(
    parameter WIDTH = 16,
    parameter F_BITS = 8
)
(
    input  clk,
    input  rst_n,

    input signed [WIDTH-1:0] leaky_factor_in,//输入激活值

    input signed [WIDTH-1:0] leaky_data_in_1,//输入历史数据
    input signed [WIDTH-1:0] leaky_data_in_2,

    input signed [WIDTH-1:0] gradient_in_1,//输入损失梯度
    input signed [WIDTH-1:0] gradient_in_2,

    input                     gradient_valid_in_1,//输入梯度有效信号
    input                     gradient_valid_in_2,

    output signed [WIDTH-1:0] gradient_out_1,//输出梯度
    output signed [WIDTH-1:0] gradient_out_2,

    output                    gradient_valid_out_1,//输出梯度有效信号
    output                    gradient_valid_out_2,
    output                    overflow_out_1,//溢出信号输出
    output                    overflow_out_2
);

    leaky_relu_derivative_unit #(
        .WIDTH(WIDTH),
        .F_BITS(F_BITS)
    ) derivative_unit_1 (
        .clk(clk),
        .rst_n(rst_n),
        .gradient_in(gradient_in_1),
        .gradient_valid_in(gradient_valid_in_1),
        .leaky_factor_in(leaky_factor_in),
        .leaky_data_in(leaky_data_in_1),
        .gradient_out(gradient_out_1),
        .gradient_valid_out(gradient_valid_out_1),
        .overflow_out(overflow_out_1)
    );

    leaky_relu_derivative_unit #(
        .WIDTH(WIDTH),
        .F_BITS(F_BITS)
    ) derivative_unit_2 (
        .clk(clk),
        .rst_n(rst_n),
        .gradient_in(gradient_in_2),
        .gradient_valid_in(gradient_valid_in_2),
        .leaky_factor_in(leaky_factor_in),
        .leaky_data_in(leaky_data_in_2),
        .gradient_out(gradient_out_2),
        .gradient_valid_out(gradient_valid_out_2),
        .overflow_out(overflow_out_2)
    );
endmodule
