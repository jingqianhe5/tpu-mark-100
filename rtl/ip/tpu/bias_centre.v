module bias_centre #(
    parameter WIDTH = 16,
    parameter F_BITS = 8
)
(
    input   clk,
    input   rst_n,
    //偏置标量输入
    input  signed [WIDTH-1:0] bias_scalar_in_1,
    input  signed [WIDTH-1:0] bias_scalar_in_2,
    //有效信号输出
    output   bias_valid_out_1,
    output   bias_valid_out_2,
    //输入需要偏置的数据
    input  signed [WIDTH-1:0] bias_data_in_1,
    input  signed [WIDTH-1:0] bias_data_in_2,
    //有效信号输入
    input    bias_valid_in_1,
    input    bias_valid_in_2,
    //结果输出
    output signed [WIDTH-1:0] bias_data_out_1,
    output signed [WIDTH-1:0] bias_data_out_2,
    //溢出输出
    output overflow_out_1,
    output overflow_out_2
);
bias_unit #(
    .WIDTH(WIDTH),
    .F_BITS(F_BITS)
) bias_unit_1 (
    .clk(clk),
    .rst_n(rst_n),
    .bias_data_in(bias_data_in_1),
    .bias_valid_in(bias_valid_in_1),
    .bias_scalar_in(bias_scalar_in_1),
    .bias_data_out(bias_data_out_1),
    .bias_valid_out(bias_valid_out_1),
    .overflow_out(overflow_out_1)
);

bias_unit #(
    .WIDTH(WIDTH),
    .F_BITS(F_BITS)
) bias_unit_2 (
    .clk(clk),
    .rst_n(rst_n),
    .bias_data_in(bias_data_in_2),
    .bias_valid_in(bias_valid_in_2),
    .bias_scalar_in(bias_scalar_in_2),
    .bias_data_out(bias_data_out_2),
    .bias_valid_out(bias_valid_out_2),
    .overflow_out(overflow_out_2)
);
endmodule
