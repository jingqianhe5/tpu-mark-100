module median_filter( 
    input wire clk,
    input wire rst_n,
    
    input wire per_img_vsync,
    input wire per_img_href,
    input wire per_img_de,
    input wire [23:0] per_img_data,
    
    output     post_img_vsync,
    output     post_img_href,
    output     post_img_de,
    output  [23:0] post_img_data

);

wire post_img_vsync_R;
wire post_img_href_R;
wire post_img_de_R;
median_filter_single median_filter_single_R(
    
.clk            (clk),    
.rst_n          (rst_n),    
                   
.per_img_vsync  (per_img_vsync),    
.per_img_href   (per_img_href),    
.per_img_de     (per_img_de),    
.per_img_data   (per_img_data[23:16]),
                   
.post_img_vsync (post_img_vsync_R),    
.post_img_href  (post_img_href_R),    
.post_img_de    (post_img_de_R),    
.post_img_data  (post_img_data[23:16])
);
wire post_img_vsync_G;
wire post_img_href_G;
wire post_img_de_G;
median_filter_single median_filter_single_G(
    
.clk            (clk),    
.rst_n          (rst_n),    
                   
.per_img_vsync  (per_img_vsync),    
.per_img_href   (per_img_href),    
.per_img_de     (per_img_de),    
.per_img_data   (per_img_data[15:8]),
                   
.post_img_vsync (post_img_vsync_G),    
.post_img_href  (post_img_href_G),    
.post_img_de    (post_img_de_G),    
.post_img_data  (post_img_data[15:8])
);
wire post_img_vsync_B;
wire post_img_href_B;
wire post_img_de_B;
median_filter_single median_filter_single_B(
.clk            (clk),    
.rst_n          (rst_n),    
                   
.per_img_vsync  (per_img_vsync),    
.per_img_href   (per_img_href),    
.per_img_de     (per_img_de),    
.per_img_data   (per_img_data[7:0]),
                   
.post_img_vsync (post_img_vsync_B),    
.post_img_href  (post_img_href_B),    
.post_img_de    (post_img_de_B),    
.post_img_data  (post_img_data[7:0])
    
);

assign post_img_vsync=post_img_vsync_R & post_img_vsync_G & post_img_vsync_B;
assign post_img_href=post_img_href_R & post_img_href_G & post_img_href_B;
assign post_img_de=post_img_de_R & post_img_de_G & post_img_de_B;

endmodule
