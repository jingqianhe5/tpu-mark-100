module RBG888_to_gray(
    input               clk,                //输入系统时钟
    input               rst_n,              //输入系统复位信号
    
    input               per_img_vsync,      //输入场同步信号
    input               per_img_href,       //输入行同步信号
	input               per_img_de,         //输入有效数据标志
    input      [23:0]   per_img_data,       //输入原始数据
    
    output              post_img_vsync,     //输出场同步信号
    output              post_img_href,      //输出行同步信号
	output              post_img_de,        //输出有效数据标志
    output     [23:0]   post_img_data       //输出灰度数据 
 );
 
wire [7:0] per_img_red   ;
wire [7:0] per_img_green ;
wire [7:0] per_img_blue  ; 
wire [7:0] post_img_Y    ;
wire [7:0] post_img_Cb   ; 
wire [7:0] post_img_Cr   ; 

assign per_img_red    = per_img_data[23:16];
assign per_img_green  = per_img_data[15:8];
assign per_img_blue   = per_img_data[7:0];
assign post_img_data  =  {post_img_Y,post_img_Y,post_img_Y};






reg [15:0]  img_red_r0,   img_red_r1,   img_red_r2; 
reg [15:0]  img_green_r0, img_green_r1, img_green_r2; 
reg [15:0]  img_blue_r0,  img_blue_r1,  img_blue_r2; 

always@(posedge clk)
begin
    img_red_r0   <= per_img_red   * 8'd76;
    img_red_r1   <= per_img_red   * 8'd43;  
    img_red_r2   <= per_img_red   * 8'd128;
    img_green_r0 <= per_img_green * 8'd150;
    img_green_r1 <= per_img_green * 8'd84;
    img_green_r2 <= per_img_green * 8'd107;
    img_blue_r0  <= per_img_blue  * 8'd29;
    img_blue_r1  <= per_img_blue  * 8'd128;
    img_blue_r2  <= per_img_blue  * 8'd20;
end

reg [15:0]  img_Y_r0;   
reg [15:0]  img_Cb_r0; 
reg [15:0]  img_Cr_r0; 

always@(posedge clk)
begin
    img_Y_r0  <= img_red_r0  + img_green_r0 + img_blue_r0;                   // Y   = (76 *R + 150*G + 29 *B)>>8
    img_Cb_r0 <= img_blue_r1 - img_red_r1   - img_green_r1 +  16'd32768;     //Cb  = (-43*R - 84 *G + 128*B + 32768)>>8
    img_Cr_r0 <= img_red_r2  - img_green_r2 - img_blue_r2  +  16'd32768;     //Cr  = (128*R - 107*G - 20 *B + 32768)>>8
end


reg [7:0] img_Y_r1; 
reg [7:0] img_Cb_r1; 
reg [7:0] img_Cr_r1; 
always@(posedge clk)
begin
    img_Y_r1  <= img_Y_r0[15:8];
    img_Cb_r1 <= img_Cb_r0[15:8];
    img_Cr_r1 <= img_Cr_r0[15:8]; 
end

//延迟三拍

reg [2:0] per_img_vsync_r;
reg [2:0] per_img_href_r;
reg [2:0] per_img_de_r;  
always@(posedge clk or negedge rst_n)
begin
    if(!rst_n)
        begin
        per_img_vsync_r <= 0;
        per_img_href_r <= 0;
		per_img_de_r <= 0;
        end
    else
        begin
        per_img_vsync_r <=  {per_img_vsync_r[1:0],  per_img_vsync};
        per_img_href_r  <=  {per_img_href_r[1:0],   per_img_href};
		per_img_de_r    <=  {per_img_de_r[1:0],   per_img_de};
        end
end
assign  post_img_vsync = per_img_vsync_r[2];
assign  post_img_href  = per_img_href_r[2];
assign  post_img_de    = per_img_de_r[2];
assign  post_img_Y     = post_img_de ? img_Y_r1 : 8'd0;
assign  post_img_Cb    = post_img_de ? img_Cb_r1: 8'd0;
assign  post_img_Cr    = post_img_de ? img_Cr_r1: 8'd0;



endmodule
