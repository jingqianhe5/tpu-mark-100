/*******************************************************************************
 * Module: contrast_adj
 * Description: Applies contrast adjustment to a single 24-bit RGB pixel stream.
 * Author: Your Name
 * Version: 2.0 (Modified for single-pixel processing)
 *******************************************************************************/
module contrast_adj 
(
    input              I_clk,
    input              I_rst_n,

    // AXI-Stream Slave Interface
    input              I_tlast,
    input              I_tuser,
    input      [23:0]  I_tdata,    // MODIFIED: Input is now a single 24-bit pixel
    input              I_tvalid,

    // Control
    input      [7:0]   contrast_level,
 
    // AXI-Stream Master Interface
    output             O_tlast,
    output             O_tuser,
    output     [23:0]  O_tdata,    // MODIFIED: Output is now a single 24-bit pixel
    output             O_tvalid 
);

//==============================================================================
// 1. Control Signal Synchronization (3-stage pipeline to match data path latency)
//==============================================================================
reg [2:0]  I_tlast_r;
reg [2:0]  I_tuser_r;
reg [2:0]  I_tvalid_r;

always @(posedge I_clk or negedge I_rst_n) begin
    if(!I_rst_n) begin
        {I_tlast_r, I_tuser_r, I_tvalid_r} <= 0;
    end
    else begin
        // Shift register for control signals
        I_tlast_r  <= {I_tlast_r[1:0],  I_tlast};
        I_tuser_r  <= {I_tuser_r[1:0],  I_tuser};
        I_tvalid_r <= {I_tvalid_r[1:0], I_tvalid};
    end
end

assign O_tlast  = I_tlast_r[2];
assign O_tuser  = I_tuser_r[2];
assign O_tvalid = I_tvalid_r[2];

//==============================================================================
// 2. Data Path Definition (Single Pixel)
//==============================================================================

// --- Input pixel unpacking ---
wire [7:0] rgb888_r;
wire [7:0] rgb888_g;
wire [7:0] rgb888_b;

assign rgb888_r = I_tdata[23:16];
assign rgb888_g = I_tdata[15:8];
assign rgb888_b = I_tdata[7:0];

// --- Pipeline Registers ---
// Using 'signed' for clarity as we are performing subtraction and multiplication
// Stage 1 registers
reg signed [15:0] pixel_shifted_R;
reg signed [15:0] pixel_shifted_G;
reg signed [15:0] pixel_shifted_B;

// Stage 2 registers
reg signed [15:0] temp_value_R;
reg signed [15:0] temp_value_G;
reg signed [15:0] temp_value_B;

// Stage 3 registers
reg [9:0] R_d;
reg [9:0] G_d;
reg [9:0] B_d;

// --- Final Output Wires ---
wire [7:0] R;
wire [7:0] G;
wire [7:0] B;


//==============================================================================
// 3. Contrast Calculation Pipeline (3 stages)
//==============================================================================

// --- Pipeline Stage 1: Center pixel values around zero ---
// (Pixel value range from [0, 255] to [-128, 127])
always @(posedge I_clk or negedge I_rst_n) begin
    if(!I_rst_n) begin
        pixel_shifted_R <= 0;
        pixel_shifted_G <= 0;
        pixel_shifted_B <= 0;
    end
    else if(I_tvalid) begin // Use raw I_tvalid for the first stage
        pixel_shifted_R <= {8'd0, rgb888_r} - 16'd128;
        pixel_shifted_G <= {8'd0, rgb888_g} - 16'd128;
        pixel_shifted_B <= {8'd0, rgb888_b} - 16'd128;
    end
end

// --- Pipeline Stage 2: Apply contrast factor ---
// contrast_level is a fixed-point number (e.g., Q1.7, where 128 means a gain of 1.0)
always @(posedge I_clk or negedge I_rst_n) begin
    if(!I_rst_n) begin
        temp_value_R <= 0;
        temp_value_G <= 0;
        temp_value_B <= 0;
    end
    else if(I_tvalid_r[0]) begin // Use 1-cycle delayed tvalid
// Use $signed() to ensure the multiplication is performed on two signed numbers
temp_value_R <= (pixel_shifted_R * $signed(contrast_level)) >>> 7;
temp_value_G <= (pixel_shifted_G * $signed(contrast_level)) >>> 7;
temp_value_B <= (pixel_shifted_B * $signed(contrast_level)) >>> 7;

    end
end

// --- Pipeline Stage 3: Shift pixel values back and prepare for clipping ---
// (Shift range from [-128*gain, 127*gain] back to be centered around 128)
always @(posedge I_clk or negedge I_rst_n) begin
    if(!I_rst_n) begin
        R_d <= 0;
        G_d <= 0;
        B_d <= 0;
    end
    else if(I_tvalid_r[1]) begin // Use 2-cycle delayed tvalid
// Use a signed literal (16'sd128) for the addition to keep it signed
R_d <= temp_value_R + 16'sd128;
G_d <= temp_value_G + 16'sd128;
B_d <= temp_value_B + 16'sd128;

    end
end

// --- Combinational Logic: Clipping/Saturation ---
// Clip the final values to the valid [0, 255] range.
// R_d[9] is the sign bit after adding 128. If it's 1, the value is negative -> clip to 0.
// R_d[8] indicates overflow beyond 255. If it's 1, the value is >= 256 -> clip to 255.
assign R = (R_d[9]) ? 8'd0 : (R_d[8]) ? 8'd255 : R_d[7:0];
assign G = (G_d[9]) ? 8'd0 : (G_d[8]) ? 8'd255 : G_d[7:0];
assign B = (B_d[9]) ? 8'd0 : (B_d[8]) ? 8'd255 : B_d[7:0];

//==============================================================================
// 4. Output Assignment
//==============================================================================
// MODIFIED: Combine the single processed pixel for output
assign O_tdata = {R, G, B};

endmodule
