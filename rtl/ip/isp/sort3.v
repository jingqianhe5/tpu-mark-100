module sort3(
    input clk,
    input rst_n,
    input [7:0] data1,
    input [7:0] data2,
    input [7:0] data3,
    output reg [7:0] max_data,
    output reg [7:0] mid_data,
    output reg [7:0] min_data
);
    wire [7:0] p = (data1 > data2) ? data1 : data2;
    wire [7:0] q = (data1 < data2) ? data1 : data2;
    wire [7:0] overall_max = (p > data3) ? p : data3;
    wire [7:0] overall_min = (q < data3) ? q : data3;
    wire [7:0] mid_val = (data3 > p) ? p : (data3 < q) ? q : data3;
    
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            max_data <= 8'd0;
            mid_data <= 8'd0;
            min_data <= 8'd0;
        end else begin
            max_data <= overall_max;
            min_data <= overall_min;
            mid_data <= mid_val;
        end
    end
endmodule