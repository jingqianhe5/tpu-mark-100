/* verilator lint_off UNUSEDPARAM */
module bias_unit#(
    parameter WIDTH = 16,
    parameter F_BITS = 8
)
(
    input   clk,
    input   rst_n,
    //输入
    input   signed [WIDTH-1:0] bias_data_in,//需要偏置的数据
    input               bias_valid_in,//数据有效
    input   signed [WIDTH-1:0] bias_scalar_in, //偏置的标量输入
    //输出
    output  reg signed [WIDTH-1:0] bias_data_out,//偏置后的数据输出
    output  reg             bias_valid_out,//数据有效输出
    output  reg             overflow_out//溢出输出
);
    reg signed [16:0] sum_full;
    reg signed [WIDTH-1:0] result;
    reg add_overflow;

    always @(*) begin
        sum_full = $signed(bias_data_in) + $signed(bias_scalar_in);
        if (sum_full > 17'sd32767) begin
            result = 16'sh7fff;
            add_overflow = 1'b1;
        end else if (sum_full < -17'sd32768) begin
            result = 16'sh8000;
            add_overflow = 1'b1;
        end else begin
            result = sum_full[15:0];
            add_overflow = 1'b0;
        end
    end

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            bias_data_out <= {WIDTH{1'b0}};
            bias_valid_out <= 1'b0;
            overflow_out <= 1'b0;
        end
        else begin
            if(bias_valid_in)begin
                bias_valid_out <= 1'b1;
                bias_data_out <= result;
                overflow_out <= add_overflow|overflow_out;
            end
            else begin
                bias_valid_out <= 1'b0;
                bias_data_out <= {WIDTH{1'b0}};
            end
        end
    end
endmodule
/* verilator lint_on UNUSEDPARAM */
