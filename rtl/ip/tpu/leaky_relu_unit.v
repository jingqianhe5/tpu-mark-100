//Leaky ReLU激活函数
//x>0: f(x)=x
//x<=0: f(x)=alpha*x
module leaky_relu_unit #(
    parameter WIDTH = 16,
    parameter F_BITS = 8
)(
    input  clk,
    input  rst_n,
    input  signed [WIDTH-1:0] leaky_data_in,//输入数据
    input                     leaky_valid_in,//数据有效信号
    input  signed [WIDTH-1:0] leaky_factor_in,//乘法因子

    output reg signed [WIDTH-1:0] leaky_data_out,//输出数据
    output  reg                    leaky_valid_out,//有效信号输出
    output    reg                  leaky_overflow_out//溢出输出
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
        .ina(leaky_data_in),
        .inb(leaky_factor_in),
        .out(result),
        .overflow(mul_overflow)
    );

    always @(posedge clk or negedge rst_n)begin
        if(!rst_n)begin
            leaky_data_out <= 0;
            leaky_valid_out <= 0;
            leaky_overflow_out <= 0;
        end
        else begin
            if(leaky_valid_in)begin
                if(leaky_data_in>=0)begin
                    leaky_data_out <= leaky_data_in;
                end
                else begin
                    leaky_data_out <= result;
                end
                leaky_valid_out <= 1;
                leaky_overflow_out <= mul_overflow | leaky_overflow_out;
            end
            else begin
                leaky_valid_out <= 0;
                leaky_data_out <= 0;
            end
        end
    end
endmodule
