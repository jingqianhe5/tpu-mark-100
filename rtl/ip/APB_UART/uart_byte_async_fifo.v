module uart_byte_async_fifo (
    input        rst,
    input        wr_clk,
    input        rd_clk,
    input  [7:0] din,
    input        wr_en,
    input        rd_en,
    output [7:0] dout,
    output       full,
    output       empty
);
    localparam ADDR_W = 7;
    localparam PTR_W  = ADDR_W + 1;
    localparam DEPTH  = 1 << ADDR_W;

    (* ram_style = "distributed" *) reg [7:0] mem [0:DEPTH-1];
    reg [PTR_W-1:0] wr_bin;
    reg [PTR_W-1:0] rd_bin;
    reg [PTR_W-1:0] wr_gray;
    reg [PTR_W-1:0] rd_gray;
    (* ASYNC_REG = "TRUE" *)
    reg [PTR_W-1:0] rd_gray_w1;
    (* ASYNC_REG = "TRUE" *)
    reg [PTR_W-1:0] rd_gray_w2;
    (* ASYNC_REG = "TRUE" *)
    reg [PTR_W-1:0] wr_gray_r1;
    (* ASYNC_REG = "TRUE" *)
    reg [PTR_W-1:0] wr_gray_r2;

    wire full_int;
    wire empty_int;
    wire wr_fire = wr_en && !full_int;
    wire rd_fire = rd_en && !empty_int;
    wire [PTR_W-1:0] wr_bin_next = wr_bin + {{PTR_W-1{1'b0}}, wr_fire};
    wire [PTR_W-1:0] rd_bin_next = rd_bin + {{PTR_W-1{1'b0}}, rd_fire};
    wire [PTR_W-1:0] wr_gray_next = (wr_bin_next >> 1) ^ wr_bin_next;
    wire [PTR_W-1:0] rd_gray_next = (rd_bin_next >> 1) ^ rd_bin_next;

    assign full_int = (wr_gray == {~rd_gray_w2[PTR_W-1:PTR_W-2], rd_gray_w2[PTR_W-3:0]});
    assign empty_int = (rd_gray == wr_gray_r2);
    assign full = full_int;
    assign empty = empty_int;
    assign dout = mem[rd_bin[ADDR_W-1:0]];

    always @(posedge wr_clk or posedge rst) begin
        if (rst) begin
            wr_bin <= {PTR_W{1'b0}};
            wr_gray <= {PTR_W{1'b0}};
            rd_gray_w1 <= {PTR_W{1'b0}};
            rd_gray_w2 <= {PTR_W{1'b0}};
        end else begin
            rd_gray_w1 <= rd_gray;
            rd_gray_w2 <= rd_gray_w1;
            if (wr_fire) begin
                mem[wr_bin[ADDR_W-1:0]] <= din;
                wr_bin <= wr_bin_next;
                wr_gray <= wr_gray_next;
            end
        end
    end

    always @(posedge rd_clk or posedge rst) begin
        if (rst) begin
            rd_bin <= {PTR_W{1'b0}};
            rd_gray <= {PTR_W{1'b0}};
            wr_gray_r1 <= {PTR_W{1'b0}};
            wr_gray_r2 <= {PTR_W{1'b0}};
        end else begin
            wr_gray_r1 <= wr_gray;
            wr_gray_r2 <= wr_gray_r1;
            if (rd_fire) begin
                rd_bin <= rd_bin_next;
                rd_gray <= rd_gray_next;
            end
        end
    end
endmodule
