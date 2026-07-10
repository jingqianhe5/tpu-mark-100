module uart_tx_50m #(
    parameter integer CLKS_PER_BIT = 434
) (
    input        clk,
    input        rst_n,
    input  [7:0] fifo_data,
    input        fifo_empty,
    output reg   fifo_rd_en,
    output reg   txd
);
    reg [15:0] baud_cnt;
    reg [3:0]  bit_idx;
    reg [9:0]  shift_reg;
    reg        busy;
    localparam [15:0] BIT_TICKS = CLKS_PER_BIT[15:0] - 16'd1;

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            fifo_rd_en <= 1'b0;
            txd        <= 1'b1;
            baud_cnt   <= 16'd0;
            bit_idx    <= 4'd0;
            shift_reg  <= 10'h3ff;
            busy       <= 1'b0;
        end else begin
            fifo_rd_en <= 1'b0;

            if (!busy) begin
                txd <= 1'b1;
                if (!fifo_empty) begin
                    fifo_rd_en <= 1'b1;
                    shift_reg  <= {1'b1, fifo_data, 1'b0};
                    baud_cnt   <= 16'd0;
                    bit_idx    <= 4'd0;
                    busy       <= 1'b1;
                    txd        <= 1'b0;
                end
            end else if (baud_cnt == BIT_TICKS) begin
                baud_cnt  <= 16'd0;
                shift_reg <= {1'b1, shift_reg[9:1]};
                bit_idx   <= bit_idx + 4'd1;
                txd       <= shift_reg[1];
                if (bit_idx == 4'd9) begin
                    busy <= 1'b0;
                    txd  <= 1'b1;
                end
            end else begin
                baud_cnt <= baud_cnt + 16'd1;
            end
        end
    end
endmodule
