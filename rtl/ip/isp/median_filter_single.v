module median_filter_single #(
    parameter [10:0] IMG_HDISP = 11'd1920,
    parameter [10:0] IMG_VDISP = 11'd1080
)(
    input wire clk,
    input wire rst_n,
    
    input wire per_img_vsync,
    input wire per_img_href,
    input wire per_img_de,
    input wire [7:0] per_img_data,
    
    output reg post_img_vsync,
    output reg post_img_href,
    output reg post_img_de,
    output reg [7:0] post_img_data
);

wire [7:0] per_img_single;

assign per_img_single = per_img_data;


wire [7:0] post_img_gray;

// Line buffers
reg [7:0] line0, line1, line2;
reg [7:0] row0 [0:2];
reg [7:0] row1 [0:2];
reg [7:0] row2 [0:2];

// Window
wire [7:0] window [8:0];
assign window[0] = row0[0];
assign window[1] = row0[1];
assign window[2] = row0[2];
assign window[3] = row1[0];
assign window[4] = row1[1];
assign window[5] = row1[2];
assign window[6] = row2[0];
assign window[7] = row2[1];
assign window[8] = row2[2];

// Sorting network
wire [7:0] row0_max, row0_mid, row0_min;
wire [7:0] row1_max, row1_mid, row1_min;
wire [7:0] row2_max, row2_mid, row2_min;

sort3 u_row0_sort(
    .clk(clk),
    .rst_n(rst_n),
    .data1(window[0]),
    .data2(window[1]),
    .data3(window[2]),
    .max_data(row0_max),
    .mid_data(row0_mid),
    .min_data(row0_min)
);

sort3 u_row1_sort(
    .clk(clk),
    .rst_n(rst_n),
    .data1(window[3]),
    .data2(window[4]),
    .data3(window[5]),
    .max_data(row1_max),
    .mid_data(row1_mid),
    .min_data(row1_min)
);

sort3 u_row2_sort(
    .clk(clk),
    .rst_n(rst_n),
    .data1(window[6]),
    .data2(window[7]),
    .data3(window[8]),
    .max_data(row2_max),
    .mid_data(row2_mid),
    .min_data(row2_min)
);

// Second stage
wire [7:0] min_max, mid_mid, max_min;

sort3 u_max_sort(
    .clk(clk),
    .rst_n(rst_n),
    .data1(row0_min),
    .data2(row1_min),
    .data3(row2_min),
    .max_data(min_max),
    .mid_data(),
    .min_data()
);

sort3 u_mid_sort(
    .clk(clk),
    .rst_n(rst_n),
    .data1(row0_mid),
    .data2(row1_mid),
    .data3(row2_mid),
    .max_data(),
    .mid_data(mid_mid),
    .min_data()
);

sort3 u_min_sort(
    .clk(clk),
    .rst_n(rst_n),
    .data1(row0_max),
    .data2(row1_max),
    .data3(row2_max),
    .max_data(),
    .mid_data(),
    .min_data(max_min)
);

// Third stage
wire [7:0] median_value;
sort3 u_final_sort(
    .clk(clk),
    .rst_n(rst_n),
    .data1(min_max),
    .data2(mid_mid),
    .data3(max_min),
    .max_data(),
    .mid_data(median_value),
    .min_data()
);

// Delays for sync signals
reg [2:0] vsync_delay;
reg [2:0] href_delay;
reg [2:0] de_delay;

reg [7:0] cb_delay_0, cb_delay_1, cb_delay_2;
reg [7:0] cr_delay_0, cr_delay_1, cr_delay_2;
reg [2:0] is_border_pixel_dly;

always @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
        vsync_delay <= 3'b0;
        href_delay <= 3'b0;
        de_delay <= 3'b0;
        cb_delay_0 <= 8'h0; cb_delay_1 <= 8'h0; cb_delay_2 <= 8'h0;
        cr_delay_0 <= 8'h0; cr_delay_1 <= 8'h0; cr_delay_2 <= 8'h0;
        is_border_pixel_dly <= 3'b0;
    end else begin
        vsync_delay <= {vsync_delay[1:0], per_img_vsync};
        href_delay <= {href_delay[1:0], per_img_href};
        de_delay <= {de_delay[1:0], per_img_de};
        is_border_pixel_dly <= {is_border_pixel_dly[1:0], is_border_pixel};
    end
end

// Output sync signals
always @(posedge clk) begin
    post_img_vsync <= vsync_delay[2];
    post_img_href <= href_delay[2];
    post_img_de <= de_delay[2];
end

// Line buffers update
always @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
        {line0, line1, line2} <= 24'h0;
        {row0[0], row0[1], row0[2]} <= 24'h0;
        {row1[0], row1[1], row1[2]} <= 24'h0;
        {row2[0], row2[1], row2[2]} <= 24'h0;
    end else if (per_img_href) begin
        // Update line buffers
        line0 <= per_img_single;
        line1 <= line0;
        line2 <= line1;
        
        // Update row buffers
        row0[0] <= line0;
        row0[1] <= row0[0];
        row0[2] <= row0[1];
        row1[0] <= line1;
        row1[1] <= row1[0];
        row1[2] <= row1[1];
        row2[0] <= line2;
        row2[1] <= row2[0];
        row2[2] <= row2[1];
    end
end

// Counters
reg [10:0] col_count;
reg [10:0] row_count;
reg prev_href;
reg prev_vsync;
wire is_border_pixel;

always @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
        col_count <= 11'd0;
        row_count <= 11'd0;
        prev_href <= 1'b0;
        prev_vsync <= 1'b0;
    end else begin
        prev_href <= per_img_href;
        prev_vsync <= per_img_vsync;
        if (per_img_href) begin
            col_count <= col_count + 1;
            if (col_count == IMG_HDISP - 1) begin
                col_count <= 11'd0;
            end
        end else begin
            col_count <= 11'd0;
        end
        if (!prev_href && per_img_href) begin
            // Start of new line
            if (row_count == IMG_VDISP - 1) begin
                row_count <= 11'd0;
            end else begin
                row_count <= row_count + 1;
            end
        end
        if (!prev_vsync && per_img_vsync) begin
            // Start of new frame
            row_count <= 11'd0;
        end
    end
end
assign is_border_pixel = (col_count < 1) || (col_count >= IMG_HDISP - 1) || (row_count < 1) || (row_count >= IMG_VDISP - 1);
// Output pixel
always @(posedge clk) begin
    if (href_delay[2]) begin

        if (is_border_pixel_dly[2]) begin
            post_img_data <= window[4]; // 边界处
        end else begin
            post_img_data <= median_value; // 中心区域
        end
    end else begin
        post_img_data <= 24'd0; 
    end
end

endmodule