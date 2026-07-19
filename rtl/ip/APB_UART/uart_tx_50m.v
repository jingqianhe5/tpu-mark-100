module uart_tx_50m #(
    parameter integer CLKS_PER_BIT = 434
) (
    input        clk,
    input        rst_n,
    input        result_valid,
    input [31:0] result_crc32,
    input  [7:0] fifo_data,
    input        fifo_empty,
    output reg   fifo_rd_en,
    output reg   txd
);
    reg [15:0] baud_cnt;
    reg [3:0]  bit_idx;
    reg [9:0]  shift_reg;
    reg        busy;
    reg [4:0]  prefix_index;
    reg        prefix_done;
    (* ASYNC_REG = "TRUE" *) reg [1:0] result_valid_sync;
    reg [31:0] result_crc32_latched;
    reg [4:0]  suffix_index;
    reg        suffix_pending;
    reg        result_seen;
    localparam [15:0] BIT_TICKS = CLKS_PER_BIT[15:0] - 16'd1;

    function [7:0] prefix_byte;
        input [4:0] index;
        begin
            case (index)
                5'd0:  prefix_byte = "M";
                5'd1:  prefix_byte = "A";
                5'd2:  prefix_byte = "T";
                5'd3:  prefix_byte = "M";
                5'd4:  prefix_byte = "U";
                5'd5:  prefix_byte = "L";
                5'd6:  prefix_byte = "_";
                5'd7:  prefix_byte = "S";
                5'd8:  prefix_byte = "T";
                5'd9:  prefix_byte = "A";
                5'd10: prefix_byte = "R";
                5'd11: prefix_byte = "T";
                5'd12: prefix_byte = 8'h0a;
                5'd13: prefix_byte = "M";
                5'd14: prefix_byte = "A";
                5'd15: prefix_byte = "T";
                5'd16: prefix_byte = "M";
                5'd17: prefix_byte = "U";
                5'd18: prefix_byte = "L";
                5'd19: prefix_byte = "_";
                5'd20: prefix_byte = "C";
                5'd21: prefix_byte = "R";
                5'd22: prefix_byte = "C";
                5'd23: prefix_byte = "3";
                5'd24: prefix_byte = "2";
                default: prefix_byte = "=";
            endcase
        end
    endfunction

    function [7:0] hex_ascii;
        input [3:0] nibble;
        begin
            hex_ascii = (nibble < 4'd10) ? (8'h30 + nibble) : (8'h61 + nibble - 4'd10);
        end
    endfunction

    function [7:0] suffix_byte;
        input [4:0] index;
        input [31:0] crc;
        begin
            case (index)
                5'd0:  suffix_byte = hex_ascii(crc[31:28]);
                5'd1:  suffix_byte = hex_ascii(crc[27:24]);
                5'd2:  suffix_byte = hex_ascii(crc[23:20]);
                5'd3:  suffix_byte = hex_ascii(crc[19:16]);
                5'd4:  suffix_byte = hex_ascii(crc[15:12]);
                5'd5:  suffix_byte = hex_ascii(crc[11:8]);
                5'd6:  suffix_byte = hex_ascii(crc[7:4]);
                5'd7:  suffix_byte = hex_ascii(crc[3:0]);
                5'd8:  suffix_byte = 8'h0a;
                5'd9:  suffix_byte = "M";
                5'd10: suffix_byte = "A";
                5'd11: suffix_byte = "T";
                5'd12: suffix_byte = "M";
                5'd13: suffix_byte = "U";
                5'd14: suffix_byte = "L";
                5'd15: suffix_byte = "_";
                5'd16: suffix_byte = "D";
                5'd17: suffix_byte = "O";
                5'd18: suffix_byte = "N";
                5'd19: suffix_byte = "E";
                default: suffix_byte = 8'h0a;
            endcase
        end
    endfunction

    wire [7:0] prefix_data = prefix_byte(prefix_index);
    wire [7:0] suffix_data = suffix_byte(suffix_index, result_crc32_latched);

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            fifo_rd_en <= 1'b0;
            txd        <= 1'b1;
            baud_cnt   <= 16'd0;
            bit_idx    <= 4'd0;
            shift_reg  <= 10'h3ff;
            busy       <= 1'b0;
            prefix_index <= 5'd0;
            prefix_done  <= 1'b0;
            result_valid_sync <= 2'b00;
            result_crc32_latched <= 32'd0;
            suffix_index   <= 5'd0;
            suffix_pending <= 1'b0;
            result_seen    <= 1'b0;
        end else begin
            fifo_rd_en <= 1'b0;
            result_valid_sync <= {result_valid_sync[0], result_valid};

            // The TPU holds both done and CRC stable.  After synchronizing done,
            // latch the multi-bit CRC once and serialize the complete suffix here.
            if (!result_seen && result_valid_sync[1]) begin
                result_crc32_latched <= result_crc32;
                suffix_index   <= 5'd0;
                suffix_pending <= 1'b1;
                result_seen    <= 1'b1;
            end

            if (!busy) begin
                txd <= 1'b1;
                if (!prefix_done) begin
                    shift_reg  <= {1'b1, prefix_data, 1'b0};
                    baud_cnt   <= 16'd0;
                    bit_idx    <= 4'd0;
                    busy       <= 1'b1;
                    txd        <= 1'b0;
                    if (prefix_index == 5'd25) begin
                        prefix_done <= 1'b1;
                    end else begin
                        prefix_index <= prefix_index + 5'd1;
                    end
                end else if (suffix_pending) begin
                    shift_reg  <= {1'b1, suffix_data, 1'b0};
                    baud_cnt   <= 16'd0;
                    bit_idx    <= 4'd0;
                    busy       <= 1'b1;
                    txd        <= 1'b0;
                    if (suffix_index == 5'd20) begin
                        suffix_pending <= 1'b0;
                    end else begin
                        suffix_index <= suffix_index + 5'd1;
                    end
                end else if (!fifo_empty) begin
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
