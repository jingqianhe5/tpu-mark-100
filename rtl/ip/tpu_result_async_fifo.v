module tpu_result_async_fifo (
    input  wire        rst,
    input  wire        wr_clk,
    input  wire        rd_clk,
    input  wire [135:0] din,
    input  wire        wr_en,
    input  wire        rd_en,
    output reg  [135:0] dout,
    output wire        full,
    output wire        empty,
    output reg         valid,
    output wire        wr_rst_busy,
    output wire        rd_rst_busy
);

    localparam DEPTH = 8;
    localparam ADDR_W = 3;

    reg [135:0] mem [0:DEPTH-1];
    reg [ADDR_W-1:0] wr_ptr;
    reg [ADDR_W-1:0] rd_ptr;
    reg [ADDR_W:0] count;

    assign full = (count == DEPTH);
    assign empty = (count == 0);
    assign wr_rst_busy = rst;
    assign rd_rst_busy = rst;

    always @(posedge wr_clk or posedge rst) begin
        if (rst) begin
            wr_ptr <= {ADDR_W{1'b0}};
        end else if (wr_en && !full) begin
            mem[wr_ptr] <= din;
            wr_ptr <= wr_ptr + 1'b1;
        end
    end

    always @(posedge rd_clk or posedge rst) begin
        if (rst) begin
            rd_ptr <= {ADDR_W{1'b0}};
            dout   <= 136'd0;
            valid  <= 1'b0;
        end else if (rd_en && !empty) begin
            dout  <= mem[rd_ptr];
            rd_ptr <= rd_ptr + 1'b1;
            valid <= 1'b1;
        end else begin
            valid <= 1'b0;
        end
    end

    always @(posedge wr_clk or posedge rst) begin
        if (rst) begin
            count <= {ADDR_W+1{1'b0}};
        end else begin
            case ({wr_en && !full, rd_en && !empty})
                2'b10: count <= count + 1'b1;
                2'b01: count <= count - 1'b1;
                default: count <= count;
            endcase
        end
    end

endmodule
