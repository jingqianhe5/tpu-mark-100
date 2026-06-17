module binarization(

    input               clk             ,   
    input               rst_n           ,   


    input               per_img_vsync   ,   
    input               per_img_href    ,  
    input   [23:0]      per_img_data    , //输入数据
    input               per_img_de      ,
 
    output              post_img_vsync      ,   
    output              post_img_href      ,   
    output  [23:0]      post_img_data   , //输出数据
    output              post_img_de     ,
    
    input   [7:0]       thresh_1
);

reg    post_de_reg; // 用于延迟de信号的寄存器
assign  post_img_de = post_de_reg;
wire [7:0] per_img_gray;
assign  per_img_gray = per_img_data [23:16];


reg  monoc;

//reg define
reg    ycbcr_vsync_d;
reg    ycbcr_hsync_d;

//*****************************************************
//**                    main code
//*****************************************************

assign  post_img_vsync = ycbcr_vsync_d  ;
assign  post_img_href  = ycbcr_hsync_d  ;


always @(posedge clk or negedge rst_n) begin
    if(!rst_n)
        monoc <= 1'b0;
    else if (per_img_de) begin
        if(per_img_gray > 8'd64)
            monoc <= 1'b1;
        else
            monoc <= 1'b0;
    end
end


//寤舵椂1鎷嶄互鍚屾鏃堕挓淇″彿
always@(posedge clk or negedge rst_n) begin
    if(!rst_n) begin
        ycbcr_vsync_d <= 1'd0;
        ycbcr_hsync_d <= 1'd0;

        post_de_reg <= 1'd0; 
    end
        else begin
        ycbcr_vsync_d <= per_img_vsync;
        ycbcr_hsync_d <= per_img_href;
        post_de_reg   <= per_img_de;
        
    end

end

assign post_img_data ={24{monoc}};
endmodule 
