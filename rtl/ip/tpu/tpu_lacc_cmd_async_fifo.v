module tpu_lacc_cmd_async_fifo (
    input          rst,
    input          wr_clk,
    input          rd_clk,
    input  [135:0] din,
    input          wr_en,
    input          rd_en,
    output [135:0] dout,
    output         full,
    output         empty,
    output         valid,
    output         wr_rst_busy,
    output         rd_rst_busy
);
    reg [135:0] mem [0:3];
    reg [2:0] wr_bin;
    reg [2:0] rd_bin;
    reg [2:0] wr_gray;
    reg [2:0] rd_gray;
    reg [2:0] rd_gray_w1;
    reg [2:0] rd_gray_w2;
    reg [2:0] wr_gray_r1;
    reg [2:0] wr_gray_r2;

    wire [2:0] wr_bin_next = wr_bin + ((wr_en && !full) ? 3'd1 : 3'd0);
    wire [2:0] rd_bin_next = rd_bin + ((rd_en && !empty) ? 3'd1 : 3'd0);
    wire [2:0] wr_gray_next = (wr_bin_next >> 1) ^ wr_bin_next;
    wire [2:0] rd_gray_next = (rd_bin_next >> 1) ^ rd_bin_next;

    assign full = (wr_gray_next == {~rd_gray_w2[2:1], rd_gray_w2[0]});
    assign empty = (rd_gray == wr_gray_r2);
    assign valid = !empty;
    assign dout = mem[rd_bin[1:0]];
    assign wr_rst_busy = rst;
    assign rd_rst_busy = rst;

    always @(posedge wr_clk or posedge rst) begin
        if (rst) begin
            wr_bin <= 3'd0;
            wr_gray <= 3'd0;
            rd_gray_w1 <= 3'd0;
            rd_gray_w2 <= 3'd0;
        end else begin
            rd_gray_w1 <= rd_gray;
            rd_gray_w2 <= rd_gray_w1;
            if (wr_en && !full) begin
                mem[wr_bin[1:0]] <= din;
                wr_bin <= wr_bin_next;
                wr_gray <= wr_gray_next;
            end
        end
    end

    always @(posedge rd_clk or posedge rst) begin
        if (rst) begin
            rd_bin <= 3'd0;
            rd_gray <= 3'd0;
            wr_gray_r1 <= 3'd0;
            wr_gray_r2 <= 3'd0;
        end else begin
            wr_gray_r1 <= wr_gray;
            wr_gray_r2 <= wr_gray_r1;
            if (rd_en && !empty) begin
                rd_bin <= rd_bin_next;
                rd_gray <= rd_gray_next;
            end
        end
    end
endmodule
