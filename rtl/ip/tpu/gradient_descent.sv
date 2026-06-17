`timescale 1ns/1ps
//`default_nettype none

module gradient_descent (
    input logic clk,
    input logic rst,

    // learning rate
    input logic signed [15:0] lr_in,

    // old weight
    input logic signed [15:0] value_old_in,

    // gradient
    input logic signed [15:0] grad_in,

    // start signal
    input logic grad_descent_valid_in,

    // bias or weight
    input logic grad_bias_or_weight,

    // updated weight and done signal
    output logic signed [15:0] value_updated_out,
    output logic grad_descent_done_out,
    output logic grad_overflow_out
);

    logic signed [15:0] sub_value_out;
    logic signed [15:0] sub_in_a;
    logic signed [15:0] mul_out;
    logic mul_overflow, sub_overflow;
    logic signed [31:0] mul_full;
    logic signed [31:0] mul_shifted;
    logic signed [16:0] sub_full;

    // 直接做 Q8.8 定点乘减，综合器更容易把乘法放进 DSP。
    // 逻辑保持为：value = value_old - (grad * lr)。
    always_comb begin
        mul_full     = $signed(grad_in) * $signed(lr_in);
        mul_shifted  = mul_full >>> 8;
        if (mul_shifted > 32'sd32767) begin
            mul_out      = 16'sh7fff;
            mul_overflow = 1'b1;
        end else if (mul_shifted < -32'sd32768) begin
            mul_out      = 16'sh8000;
            mul_overflow = 1'b1;
        end else begin
            mul_out      = mul_shifted[15:0];
            mul_overflow = 1'b0;
        end
    end

    always_comb begin
        case(grad_bias_or_weight)
            1'b0: begin
                if(grad_descent_done_out) begin
                    sub_in_a = value_updated_out;
                end else begin
                    sub_in_a = value_old_in;
                end
            end

            1'b1: begin
                sub_in_a = value_old_in;
            end
        endcase

        sub_full = $signed(sub_in_a) - $signed(mul_out);
        if (sub_full > 17'sd32767) begin
            sub_value_out = 16'sh7fff;
            sub_overflow = 1'b1;
        end else if (sub_full < -17'sd32768) begin
            sub_value_out = 16'sh8000;
            sub_overflow = 1'b1;
        end else begin
            sub_value_out = sub_full[15:0];
            sub_overflow = 1'b0;
        end
    end

    always_ff @(posedge clk or posedge rst) begin
        if(rst) begin
            value_updated_out   <= '0;
            grad_descent_done_out <= '0;
            grad_overflow_out   <= '0;
        end else begin
            grad_descent_done_out <= grad_descent_valid_in;
            if(grad_descent_valid_in) begin
                value_updated_out <= sub_value_out;
                grad_overflow_out <= grad_overflow_out | mul_overflow | sub_overflow; // sticky
            end
            // BUG-GD-1 fix: hold value_updated_out when not updating so the
            // accumulated bias result is not lost before writeback completes
        end
    end


endmodule
