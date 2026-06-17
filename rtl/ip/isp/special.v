module special(
input               clk,                //输入系统时钟        
input               rst_n,              //输入系统复位信号      
                                                        
input               per_img_vsync,      //输入场同步信号       
input               per_img_href,       //输入行同步信号       
input               per_img_de,         //输入有效数据标志      
input      [23:0]   per_img_data,       //输入原始数据 
input      [1:0]    select_filter,        //输入算法选择
input               gray_flag,          //输入当前数据是否为灰度
                                                        
output    reg          post_img_vsync,     //输出场同步信号       
output    reg          post_img_href,      //输出行同步信号       
output    reg          post_img_de,        //输出有效数据标志      
output    reg [23:0]   post_img_data       //输出灰度数据 

 );
 
wire [23:0] binarization_data;
wire        binarization_vs;
wire        binarization_hs;
wire        binarization_de;
binarization u_binarization(
.clk              (clk),  
.rst_n            (rst_n),   
                     
.per_img_vsync    (per_img_vsync),  
.per_img_href     (per_img_href),   
.per_img_de       (per_img_de),   
.per_img_data     (per_img_data), 
                    
.post_img_vsync   (binarization_vs),  
.post_img_href    (binarization_hs),   
.post_img_de      (binarization_de),   
.post_img_data    (binarization_data)
    
);     
wire [23:0] sobel_detector_data;
wire        sobel_detector_vs;
wire        sobel_detector_hs;
wire        sobel_detector_de; 
sobel_detector u_sobel_detector(
.clk           (clk),
.rst_n         (rst_n),
               
.per_img_vsync (per_img_vsync),
.per_img_href  (per_img_href),
.per_img_de    (per_img_de),
.per_img_data  (per_img_data),
               
.post_img_vsync(sobel_detector_vs),
.post_img_href (sobel_detector_hs),
.post_img_de   (sobel_detector_de),
.post_img_data (sobel_detector_data) 
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
    else if(gray_flag) begin
    case(select_filter)
    
    2'b01:begin
    post_img_vsync <= binarization_vs;
    post_img_href  <= binarization_hs;
    post_img_data  <= binarization_data;
    post_img_de    <= binarization_de;
    end
    
    2'b10:begin
    post_img_vsync <= sobel_detector_vs;
    post_img_href  <= sobel_detector_hs;
    post_img_data  <= sobel_detector_data;
    post_img_de    <= sobel_detector_de;
    end
     

   
    default :begin
    post_img_vsync <= per_img_vsync;  
    post_img_href  <= per_img_href;  
    post_img_data  <= per_img_data;
    post_img_de    <= per_img_de;  
    end
    endcase
    end
    else begin
   
    post_img_vsync <= per_img_vsync;  
    post_img_href  <= per_img_href;  
    post_img_data  <= per_img_data;
    post_img_de    <= per_img_de;
    end


end



endmodule
