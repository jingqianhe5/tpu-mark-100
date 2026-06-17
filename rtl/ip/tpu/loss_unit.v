module loss_unit #(
    parameter WIDTH = 16,
    parameter F_BITS = 8
)
(
    input  clk,
    input  rst_n,
    //输入数据
    input  signed [WIDTH-1:0] H_in,
    input  signed [WIDTH-1:0] Y_in,
    //有效信号输入
    input                     valid_in,
    input  signed [WIDTH-1:0] two_div_N_in,//缩放因子2/N
    //输出数据
    output reg signed [WIDTH-1:0] gradient_out,
    output reg                    valid_out,
    output reg                    loss_overflow_out
);
    wire signed  [WIDTH-1:0] diff;
    wire signed [WIDTH-1:0] result;
    wire sub_overflow , mul_overflow;

    fxp_addsub #(
        .WIIA   (WIDTH - F_BITS),
        .WIFA   (F_BITS),
        .WIIB   (WIDTH - F_BITS),
        .WIFB   (F_BITS),
        .WOI    (WIDTH - F_BITS),
        .WOF    (F_BITS)
    ) loss_sub (
        .ina(H_in),
        .inb(Y_in),
        .sub(1'b1),
        .out(diff),
        .overflow(sub_overflow)
    );

    fxp_mul #(
        .WIIA   (WIDTH - F_BITS),
        .WIFA   (F_BITS),
        .WIIB   (WIDTH - F_BITS),
        .WIFB   (F_BITS),
        .WOI    (WIDTH - F_BITS),
        .WOF    (F_BITS)
    ) loss_mul (
        .ina(diff),
        .inb(two_div_N_in),
        .out(result),
        .overflow(mul_overflow)
    );

    always@(posedge clk or negedge rst_n) begin
        if (!rst_n)begin
            gradient_out <= 0;
            valid_out <= 0;
            loss_overflow_out <= 0;
        end
        else begin
            valid_out <= valid_in;
            if(valid_in)begin
                gradient_out <= result;
                loss_overflow_out <= loss_overflow_out | sub_overflow | mul_overflow;
            end
            else begin
                gradient_out <= 0;
            end
        end
    end
endmodule
