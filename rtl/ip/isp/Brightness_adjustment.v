/**********************************************************************************
 * Copyright: (c) 2023
 * Author:    [Your Name/Team]
 * Created:   [Date]
 *
 * Module:    brightness_control
 * Function:  Adjusts brightness of a 24-bit RGB video stream based on a linear scale.
 *
 * Description:
 * This module adjusts the brightness based on an 8-bit control value 'key_cnt',
 * where 128 is the neutral/passthrough value.
 *
 * 'key_cnt' behavior:
 * - key_cnt = 128         -> Passthrough (no change).
 * - key_cnt > 128         -> Brighten. Amount = key_cnt - 128.
 * - key_cnt < 128         -> Dim. Amount = 128 - key_cnt.
 *
 **********************************************************************************/
module Brightness_adjustment (
    // ---- Port Declarations ----
    input                       pixelclk,
    input                       reset_n,
    input      [23:0]           din,       // 24-bit RGB Input (R[23:16], G[15:8], B[7:0])
    input                       i_hsync,   // Input Horizontal Sync
    input                       i_vsync,   // Input Vertical Sync
    input                       i_de,      // Input Data Enable
    input      [7:0]            key_cnt,   // Brightness control value (0-255, 128 is neutral)

    output     [23:0]           dout,      // 24-bit RGB Output
    output                      o_hsync,   // Output Horizontal Sync
    output                      o_vsync,   // Output Vertical Sync
    output                      o_de       // Output Data Enable
);

    // ---- Internal Signal Declarations ----

    // Input RGB channel separation
    wire [7:0] r_in, g_in, b_in;
    assign r_in = din[23:16];
    assign g_in = din[15:8];
    assign b_in = din[7:0];

    // Delay input pixel by one cycle to align with delayed sync/de signals
    reg [23:0] din_r;

    // Output RGB channel registers
    reg [7:0] r_out, g_out, b_out;
    
    // Sync signal registers for pipelining
    reg hsync_r, vsync_r, de_r;
    reg hsync_rr, vsync_rr, de_rr;
    
    // Combinational logic to decode the adjustment amount from key_cnt
    wire [7:0] adj_amount;
    wire       is_brightening;

    // Determine if we are brightening and calculate the adjustment magnitude
    assign is_brightening = (key_cnt > 128);
    assign adj_amount     = is_brightening ? (key_cnt - 128) : (128 - key_cnt);


    // ---- Assignments ----

    assign o_hsync = hsync_rr;
    assign o_vsync = vsync_rr;
    assign o_de    = de_rr;
    assign dout    = {r_out, g_out, b_out};


    // ---- Sequential Logic ----

    // 1. Pipeline register for sync signals
    always @(posedge pixelclk or negedge reset_n) begin
        if (!reset_n) begin
            hsync_r <= 1'b0;
            vsync_r <= 1'b0;
            de_r    <= 1'b0;
            hsync_rr <= 1'b0;
            vsync_rr <= 1'b0;
            de_rr    <= 1'b0;
            din_r   <= 24'd0;
        end else begin
            hsync_r <= i_hsync;
            vsync_r <= i_vsync;
            de_r    <= i_de;
            hsync_rr <= hsync_r;
            vsync_rr <= vsync_r;
            de_rr    <= de_r;
            din_r   <= din;
        end
    end

    // 2. Main brightness adjustment logic based on the new rule
    always @(posedge pixelclk or negedge reset_n) begin
        if (!reset_n) begin
            // Asynchronous active-low reset
            r_out <= 8'd0;
            g_out <= 8'd0;
            b_out <= 8'd0;
        end 
        else if (de_r) begin // Only process active pixels
            if (key_cnt == 128) begin
                // **Neutral Case: Passthrough Mode**
                r_out <= din_r[23:16];
                g_out <= din_r[15:8];
                b_out <= din_r[7:0];
            end
            else if (is_brightening) begin 
                // **Brighten Mode (key_cnt > 128)**
                // Add the adjustment amount, clamp to 255
                r_out <= (din_r[23:16] + adj_amount > 255) ? 8'd255 : din_r[23:16] + adj_amount;
                g_out <= (din_r[15:8]  + adj_amount > 255) ? 8'd255 : din_r[15:8]  + adj_amount;
                b_out <= (din_r[7:0]   + adj_amount > 255) ? 8'd255 : din_r[7:0]   + adj_amount;
            end 
            else begin 
                // **Dim Mode (key_cnt < 128)**
                // Subtract the adjustment amount, clamp to 0
                r_out <= (din_r[23:16] > adj_amount) ? (din_r[23:16] - adj_amount) : 8'd0;
                g_out <= (din_r[15:8]  > adj_amount) ? (din_r[15:8]  - adj_amount) : 8'd0;
                b_out <= (din_r[7:0]   > adj_amount) ? (din_r[7:0]   - adj_amount) : 8'd0;
            end
        end 
        else begin
            // Output black during blanking intervals
            r_out <= 8'd0;
            g_out <= 8'd0;
            b_out <= 8'd0;
        end
    end

endmodule
