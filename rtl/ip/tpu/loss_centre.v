module loss_centre #(
    parameter WIDTH = 16,
    parameter F_BITS = 8
)
(
    input  clk,
    input  rst_n,
    //输入数据
    input  signed [WIDTH-1:0] H_in_1,
    input  signed [WIDTH-1:0] H_in_2,
    input  signed [WIDTH-1:0] Y_in_1,
    input  signed [WIDTH-1:0] Y_in_2,
    //有效信号输入
    input                     valid_in_1,
    input                     valid_in_2,
    input  signed [WIDTH-1:0] two_div_N_in,//缩放因子2/N
    //输出数据
    output signed [WIDTH-1:0] gradient_out_1,
    output signed [WIDTH-1:0] gradient_out_2,
    output                    valid_out_1,
    output                    valid_out_2,
    output                    loss_overflow_out_1,
    output                    loss_overflow_out_2
);
loss_unit #(
    .WIDTH(WIDTH),
    .F_BITS(F_BITS)
) loss_unit_1 (
    .clk(clk),
    .rst_n(rst_n),
    .H_in(H_in_1),
    .Y_in(Y_in_1),
    .valid_in(valid_in_1),
    .two_div_N_in(two_div_N_in),
    .gradient_out(gradient_out_1),
    .valid_out(valid_out_1),
    .loss_overflow_out(loss_overflow_out_1)
);

loss_unit #(
    .WIDTH(WIDTH),
    .F_BITS(F_BITS)
) loss_unit_2 (
    .clk(clk),
    .rst_n(rst_n),
    .H_in(H_in_2),
    .Y_in(Y_in_2),
    .valid_in(valid_in_2),
    .two_div_N_in(two_div_N_in),
    .gradient_out(gradient_out_2),
    .valid_out(valid_out_2),
    .loss_overflow_out(loss_overflow_out_2)
);
endmodule
