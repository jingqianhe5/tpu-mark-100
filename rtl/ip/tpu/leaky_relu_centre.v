module leaky_relu_centre #(
    parameter WIDTH = 16,
    parameter F_BITS = 8
)
(
    input  clk,
    input  rst_n,
    //输入数据
    input  signed [WIDTH-1:0] leaky_data_in_1,
    input  signed [WIDTH-1:0] leaky_data_in_2,
    //有效信号输入
    input                     leaky_valid_in_1,
    input                     leaky_valid_in_2,
    //乘法因子输入
    input  signed [WIDTH-1:0] leaky_factor_in,
    //输出数据
    output signed [WIDTH-1:0] leaky_data_out_1,
    output signed [WIDTH-1:0] leaky_data_out_2,
    //有效信号输出
    output reg                    leaky_valid_out_1,
    output reg                    leaky_valid_out_2,
    //溢出输出
    output reg                    leaky_overflow_out_1,
    output reg                    leaky_overflow_out_2
);

    leaky_relu_unit #(
        .WIDTH(WIDTH),
        .F_BITS(F_BITS)
    ) leaky_relu_unit_1 (
        .clk(clk),
        .rst_n(rst_n),
        .leaky_data_in(leaky_data_in_1),
        .leaky_valid_in(leaky_valid_in_1),
        .leaky_factor_in(leaky_factor_in),
        .leaky_data_out(leaky_data_out_1),
        .leaky_valid_out(leaky_valid_out_1),
        .leaky_overflow_out(leaky_overflow_out_1)
    );

    leaky_relu_unit #(
        .WIDTH(WIDTH),
        .F_BITS(F_BITS)
    ) leaky_relu_unit_2 (
        .clk(clk),
        .rst_n(rst_n),
        .leaky_data_in(leaky_data_in_2),
        .leaky_valid_in(leaky_valid_in_2),
        .leaky_factor_in(leaky_factor_in),
        .leaky_data_out(leaky_data_out_2),
        .leaky_valid_out(leaky_valid_out_2),
        .leaky_overflow_out(leaky_overflow_out_2)
    );
endmodule
