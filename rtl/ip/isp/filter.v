module filter(
input               clk,                //输入系统时钟        
input               rst_n,              //输入系统复位信号      
                                                        
input               per_img_vsync,      //输入场同步信号       
input               per_img_href,       //输入行同步信号       
input               per_img_de,         //输入有效数据标志      
input      [23:0]   per_img_data,       //输入原始数据 
input      [2:0]    select_filter,        //输入算法选择
input               gray_flag,          //输入当前数据是否为灰度
                                                        
output    reg          post_img_vsync,     //输出场同步信号       
output    reg          post_img_href,      //输出行同步信号       
output    reg          post_img_de,        //输出有效数据标志      
output    reg [23:0]   post_img_data       //输出灰度数据 

 );

wire [23:0] bilateral_filter_data;
wire        bilateral_filter_vs;
wire        bilateral_filter_hs;
wire        bilateral_filter_de;
//bilateral_filter u_bilateral_filter(
//.clk              (clk),  
//.rst_n            (rst_n),   
//                     
//.per_img_vsync    (per_img_vsync),  
//.per_img_href     (per_img_href),   
//.per_img_de       (per_img_de),   
//.per_img_data     (per_img_data), 
//                    
//.post_img_vsync   (bilateral_filter_vs),  
//.post_img_href    (bilateral_filter_hs),   
//.post_img_de      (bilateral_filter_de),   
//.post_img_data    (bilateral_filter_data)
//    
//);     
wire [23:0] gaussian_data;
wire gaussian_vs;
wire gaussian_hs;
wire gaussian_de; 
gaussian_filter u_gaussian_filter(
.clk           (clk),
.rst_n         (rst_n),
               
.per_img_vsync (per_img_vsync),
.per_img_href  (per_img_href),
.per_img_de    (per_img_de),
.per_img_data  (per_img_data),
               
.post_img_vsync(gaussian_vs),
.post_img_href (gaussian_hs),
.post_img_de   (gaussian_de),
.post_img_data (gaussian_data) 
);       


wire  mean_vs;
wire  mean_hs;
wire  mean_de;
wire  [23:0] mean_data;
mean_filter_proc u_mean_filter_proc(
.clk              (clk),  
.rst_n            (rst_n),   
                     
.per_img_vsync    (per_img_vsync),  
.per_img_href     (per_img_href),   
.per_img_de       (per_img_de),   
.per_img_data     (per_img_data),
                    
.post_img_vsync   (mean_vs),  
.post_img_href    (mean_hs),   
.post_img_de      (mean_de),   
.post_img_data    (mean_data)
    
);     


wire  median_vs;
wire  median_hs;
wire  median_de;
wire [23:0] median_data;
median_filter u_median_filter(
.clk              (clk),  
.rst_n            (rst_n),   
                     
.per_img_vsync    (per_img_vsync),  
.per_img_href     (per_img_href),   
.per_img_de       (per_img_de),   
.per_img_data     (per_img_data),
                    
.post_img_vsync   (median_vs),   
.post_img_href    (median_hs),   
.post_img_de      (median_de),   
.post_img_data    (median_data)
    
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
    
    3'b001:begin
    post_img_vsync <= bilateral_filter_vs;
    post_img_href  <= bilateral_filter_hs;
    post_img_data  <= bilateral_filter_data;
    post_img_de    <= bilateral_filter_de;
    end
    
    3'b010:begin
    post_img_vsync <= mean_vs;
    post_img_href  <= mean_hs;
    post_img_data  <= mean_data;
    post_img_de    <= mean_de;
    end
     
    3'b011:begin
    post_img_vsync <= median_vs;
    post_img_href  <= median_hs;
    post_img_data  <= median_data;
    post_img_de    <= median_de;
    end
    
    3'b100:begin
    if (gray_flag)begin
    post_img_vsync <= gaussian_vs;
    post_img_href  <= gaussian_hs;
    post_img_data  <= gaussian_data;
    post_img_de    <= gaussian_de;
    end
    
    else begin
    post_img_vsync <= per_img_vsync;  
    post_img_href  <= per_img_href;  
    post_img_data  <= per_img_data;
    post_img_de    <= per_img_de;
    end
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
