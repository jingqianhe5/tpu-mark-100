module leaky_relu_derivative_unit #(
    parameter WIDTH = 16,
    parameter F_BITS = 8
)
(
    input  clk,
    input  rst_n,
    
    input  signed [WIDTH-1:0] gradient_in,//输入损失梯度
    input  gradient_valid_in,//输入梯度有效信号
    input  signed [WIDTH-1:0] leaky_factor_in,//输入激活值
    input  signed [WIDTH-1:0] leaky_data_in,//输入历史的数据

    output reg signed [WIDTH-1:0] gradient_out,//输出梯度
    output reg gradient_valid_out,//输出梯度有效信号
    output reg overflow_out//溢出信号输出
);
    wire signed [WIDTH-1:0] result;
    wire mul_overflow;

    fxp_mul #(
        .WIIA   (WIDTH - F_BITS),
        .WIFA   (F_BITS),
        .WIIB   (WIDTH - F_BITS),
        .WIFB   (F_BITS),
        .WOI    (WIDTH - F_BITS),
        .WOF    (F_BITS)
    ) mult (
        .ina(gradient_in),
        .inb(leaky_factor_in),
        .out(result),
        .overflow(mul_overflow)
    );

    always@ (posedge clk or negedge rst_n)begin
        if(!rst_n)begin
            gradient_out <= 0;
            gradient_valid_out <= 0;
            overflow_out <= 0;
        end
        else begin
            gradient_valid_out <= gradient_valid_in;
            if(gradient_valid_in)begin
                if(leaky_data_in >= 0)begin
                    gradient_out <= gradient_in;
                end
                else begin
                    gradient_out <= result;
                end
                overflow_out <= mul_overflow | overflow_out;
            end
            else begin
                gradient_out <= 0;
            end
        end
    end

endmodule
