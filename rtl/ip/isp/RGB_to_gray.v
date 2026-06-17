module RGB_to_gray(
input               clk,                //输入系统时钟        
input               rst_n,              //输入系统复位信号      
                                                        
input               per_img_vsync,      //输入场同步信号       
input               per_img_href,       //输入行同步信号       
input               per_img_de,         //输入有效数据标志      
input      [23:0]   per_img_data,       //输入原始数据 
input      [1:0]    select_gray,        //输入是否转灰度
                                                        
output    reg          post_img_vsync,     //输出场同步信号       
output    reg          post_img_href,      //输出行同步信号       
output    reg          post_img_de,        //输出有效数据标志      
output    reg [23:0]   post_img_data       //输出灰度数据 

 );

wire [23:0] gary_data;
wire gary_vs;
wire gary_hs;
wire gary_de;
RBG888_to_gray  u_RBG888_to_gray(
.clk           (clk),
.rst_n         (rst_n),
               
.per_img_vsync (per_img_vsync),
.per_img_href  (per_img_href),
.per_img_de    (per_img_de),
.per_img_data  (per_img_data),
               
.post_img_vsync(gary_vs),
.post_img_href (gary_hs),
.post_img_de   (gary_de),
.post_img_data (gary_data) 
    
);

wire [23:0] gamma_data;
gamma u_gamma(
.per_img_data  (gary_data),         
.post_img_data (gamma_data)  
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
    case(select_gray)
    
    2'b10:begin
    post_img_vsync <= gary_vs;
    post_img_href  <= gary_hs;
    post_img_data  <= gary_data;
    post_img_de    <= gary_de;
    end
    
    2'b11:begin
    post_img_vsync <= gary_vs;
    post_img_href  <= gary_hs;
    post_img_data  <= gamma_data;
    post_img_de    <= gary_de;
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
