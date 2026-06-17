module sharpen(
input               clk,                //输入系统时钟        
input               rst_n,              //输入系统复位信号      
                                                        
input               per_img_vsync,      //输入场同步信号       
input               per_img_href,       //输入行同步信号       
input               per_img_de,         //输入有效数据标志      
input      [23:0]   per_img_data,       //输入原始数据 
input      [1:0]    select_filter,        //输入算法选择
                                                        
output    reg          post_img_vsync,     //输出场同步信号       
output    reg          post_img_href,      //输出行同步信号       
output    reg          post_img_de,        //输出有效数据标志      
output    reg [23:0]   post_img_data       //输出灰度数据 

 );

wire [23:0] sobel_sharpen_data;
wire        sobel_sharpen_vs;
wire        sobel_sharpen_hs;
wire        sobel_sharpen_de;
sobel_sharpen u_sobel_sharpen(
.clk              (clk),  
.rst_n            (rst_n),   
                     
.per_img_vsync    (per_img_vsync),  
.per_img_href     (per_img_href),   
.per_img_de       (per_img_de),   
.per_img_data     (per_img_data), 
                    
.post_img_vsync   (sobel_sharpen_vs),  
.post_img_href    (sobel_sharpen_hs),   
.post_img_de      (sobel_sharpen_de),   
.post_img_data    (sobel_sharpen_data)
    
);     
wire [23:0] laplacian_sharpen_data;
wire laplacian_sharpen_vs;
wire laplacian_sharpen_hs;
wire laplacian_sharpen_de; 
laplacian_sharpen u_laplacian_sharpen(
.clk           (clk),
.rst_n         (rst_n),
               
.per_img_vsync (per_img_vsync),
.per_img_href  (per_img_href),
.per_img_de    (per_img_de),
.per_img_data  (per_img_data),
               
.post_img_vsync(laplacian_sharpen_vs),
.post_img_href (laplacian_sharpen_hs),
.post_img_de   (laplacian_sharpen_de),
.post_img_data (laplacian_sharpen_data) 
);       


wire  robert_sharpen_vs;
wire  robert_sharpen_hs;
wire  robert_sharpen_de;
wire  [23:0] robert_sharpen_data;
robert_sharpen u_robert_sharpen(
.clk              (clk),  
.rst_n            (rst_n),   
                     
.per_img_vsync    (per_img_vsync),  
.per_img_href     (per_img_href),   
.per_img_de       (per_img_de),   
.per_img_data     (per_img_data),
                    
.post_img_vsync   (robert_sharpen_vs),  
.post_img_href    (robert_sharpen_hs),   
.post_img_de      (robert_sharpen_de),   
.post_img_data    (robert_sharpen_data)
    
);     

//输出选择器
always @ (negedge clk)begin
    if(!rst_n)
        begin
        post_img_vsync <= 1'b0; 
        post_img_href  <= 1'b0; 
        post_img_data  <= 24'b0; 
        post_img_de    <= 1'b0; 
		
    end
    else begin
    case(select_filter)
    
    2'b01:begin
    post_img_vsync <= sobel_sharpen_vs;
    post_img_href  <= sobel_sharpen_hs;  
    post_img_data  <= sobel_sharpen_data;  
    post_img_de    <= sobel_sharpen_de;  
    end
    
    2'b10:begin
    post_img_vsync <= laplacian_sharpen_vs;   
    post_img_href  <= laplacian_sharpen_hs;   
    post_img_data  <= laplacian_sharpen_data; 
    post_img_de    <= laplacian_sharpen_de;   
    end
     
    2'b11:begin
    post_img_vsync <= robert_sharpen_vs;
    post_img_href  <= robert_sharpen_hs;
    post_img_data  <= robert_sharpen_data;
    post_img_de    <= robert_sharpen_de;
    end
    
   
    default :begin
    post_img_vsync <= per_img_vsync;  
    post_img_href  <= per_img_href;  
    post_img_data  <= per_img_data;
    post_img_de    <= per_img_de;  
    end
    endcase
end
end


endmodule
