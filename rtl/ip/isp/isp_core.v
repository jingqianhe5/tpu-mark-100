module isp_core(
input wire              clk,                 
input wire              rst_n,               
                                
input wire [8:0]        seletor_data,
input wire              per_img_vsync,       
input wire              per_img_href,        
input wire              per_img_de,          
input wire [23:0]       per_img_data, 
input wire signed[7 :0]       brightness_thresh,
input wire [7 :0]       contrast_thresh,
                                
output                  post_img_vsync,      
output                  post_img_href,       
output                  post_img_de,         
output  [23:0]          post_img_data    

 );


wire [23:0] RGB_gray_data;
wire  RGB_gray_vsync;
wire  RGB_gray_href;
wire  RGB_gray_de;
RGB_to_gray u_RGB_to_gray(
.clk            (clk),     
.rst_n          (rst_n),    
                
.per_img_vsync  (per_img_vsync),   
.per_img_href   (per_img_href),   
.per_img_de     (per_img_de),   
.per_img_data   (per_img_data),   
.select_gray    (seletor_data[8:7]),  
                   
.post_img_vsync (RGB_gray_vsync),
.post_img_href  (RGB_gray_href),
.post_img_de    (RGB_gray_de),
.post_img_data  (RGB_gray_data)
                   
    
);

wire [23:0] filter_data;
wire        filter_vsync;
wire        filter_href;
wire        filter_de;
filter u_filter(
.clk            (clk),     
.rst_n          (rst_n),   
                
.per_img_vsync  (RGB_gray_vsync),   
.per_img_href   (RGB_gray_href),   
.per_img_de     (RGB_gray_de),   
.per_img_data   (RGB_gray_data),   
.select_filter    (seletor_data[6:4]),
.gray_flag      (seletor_data[8])  , 
                   
.post_img_vsync (filter_vsync),
.post_img_href  (filter_href),
.post_img_de    (filter_de),
.post_img_data  (filter_data)
                   
    
);

wire [23:0] sharpen_data;
wire        sharpen_vsync;
wire        sharpen_href;
wire        sharpen_de;
sharpen u_sharpen(
.clk            (clk),     
.rst_n          (rst_n),   
                
.per_img_vsync  (filter_vsync),   
.per_img_href   (filter_href),   
.per_img_de     (filter_de),   
.per_img_data   (filter_data),   
.select_filter    (seletor_data[3:2]),
                   
.post_img_vsync (sharpen_vsync),
.post_img_href  (sharpen_href),
.post_img_de    (sharpen_de),
.post_img_data  (sharpen_data)
                   
);


wire [23:0] special_data;
wire        special_vsync;
wire        special_href;
wire        special_de;
special u_special(
.clk            (clk),     
.rst_n          (rst_n),   
                
.per_img_vsync  (sharpen_vsync),   
.per_img_href   (sharpen_href),   
.per_img_de     (sharpen_de),   
.per_img_data   (sharpen_data),   
.select_filter  (seletor_data[1:0]),
.gray_flag      (seletor_data[8])  , 
                   
.post_img_vsync (special_vsync),
.post_img_href  (special_href),
.post_img_de    (special_de),
.post_img_data  (special_data)
                   
);


//thresh_control_contrast u_thresh_control_contrast(
//.clk           (clk),     
//.rst_n         (rst_n),
//.udp_data      (seletor_data), //00000 0101增加
//                               //00000 1001减小
//.thresh        (contrast_level)
//    
//);  
//wire  [7:0]   contrast_level;
wire          contrast_hs;
wire          contrast_vs;
wire  [23:0]  contrast_data;
wire          contrast_de;

contrast_adj u_contrast_adj  (
.I_clk             (clk),             
.I_rst_n           (rst_n), 
.I_tlast           (special_href),  
.I_tuser           (special_vsync),  
.I_tdata           (special_data),
.I_tvalid          (special_de),  
.contrast_level    (contrast_thresh),
 
.O_tlast           (contrast_hs), 
.O_tuser           (contrast_vs),
.O_tdata           (contrast_data),
.O_tvalid          (contrast_de)
    
);  

//thresh_control_Brightness u_thresh_control_Brightness(
//.clk           (clk),     
//.rst_n         (rst_n),
//.udp_data      (seletor_data), //00001 0101增加
//                               //00001 1001减小
//.thresh        (Brightness_level)
// );   
//wire  [7:0]   Brightness_level;
wire          Brightness_hs;
wire          Brightness_vs;
wire  [23:0]  Brightness_data;
wire          Brightness_de;

Brightness_adjustment u_Brightness_adjustment  (
.pixelclk             (clk),             
.reset_n           (rst_n), 
.i_hsync           (contrast_hs),  
.i_vsync           (contrast_vs),  
.din           (contrast_data),
.i_de          (contrast_de),  
.key_cnt            (brightness_thresh),

.o_hsync           (post_img_href), 
.o_vsync           (post_img_vsync),
.dout           (post_img_data),
.o_de          (post_img_de)
    
);  

endmodule
