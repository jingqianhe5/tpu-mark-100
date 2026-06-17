// *********************************************************************
// 
// Copyright (C) 2021-20xx CrazyBird Corporation
// 
// Filename     :   robert_sharpen_proc.v
// Author       :   CrazyBird
// Email        :   CrazyBirdLin@qq.com
// 
// Description  :   
// 
// Modification History
// Date         By          Version         Change Description
//----------------------------------------------------------------------
// 2022/03/11   CrazyBird   1.0             Original
// 
// *********************************************************************
module robert_sharpen_single
#(
    parameter   [10:0]  IMG_HDISP = 11'd1920,          
    parameter   [10:0]  IMG_VDISP = 11'd1080
)
(
    input  wire                 clk             ,
    input  wire                 rst_n           ,
    
    //  Image data prepared to be processed
    input  wire                 per_img_vsync   ,       //  Prepared Image data vsync valid signal
    input  wire                 per_img_href    ,       //  Prepared Image data href vaild  signal
    input  wire     [7:0]       per_img_data    ,       //  Prepared Image brightness input
    input  wire                 per_img_de      ,
    
    //  Image data has been processed
    output wire                 post_img_vsync  ,       //  processed Image data vsync valid signal
    output wire                 post_img_href   ,       //  processed Image data href vaild  signal
    output wire     [7:0]       post_img_data   ,       //  processed Image brightness output
    output wire                 post_img_de    
);
//----------------------------------------------------------------------
//  Generate 8Bit 3X3 Matrix
wire                            matrix_img_vsync;
wire                            matrix_img_href;
wire                            matrix_img_de;
wire                            matrix_top_edge_flag;
wire                            matrix_bottom_edge_flag;
wire                            matrix_left_edge_flag;
wire                            matrix_right_edge_flag;
wire            [7:0]           matrix_p11;
wire            [7:0]           matrix_p12;
wire            [7:0]           matrix_p13;
wire            [7:0]           matrix_p21;
wire            [7:0]           matrix_p22;
wire            [7:0]           matrix_p23;
wire            [7:0]           matrix_p31; 
wire            [7:0]           matrix_p32;
wire            [7:0]           matrix_p33;

Matrix_Generate_3X3_8Bit
#(
    .IMG_HDISP  (IMG_HDISP  ),
    .IMG_VDISP  (IMG_VDISP  )
)
u_Matrix_Generate_3X3_8Bit
(
    //  global clock & reset
    .clk                    (clk                    ),
    .rst_n                  (rst_n                  ),
    
    //  Image data prepared to be processed
    .per_img_vsync          (per_img_vsync          ),      //  Prepared Image data vsync valid signal
    .per_img_href           (per_img_href           ),      //  Prepared Image data href vaild  signal
    .per_img_data           (per_img_data           ),      //  Prepared Image brightness input
    .per_img_de             (per_img_de             ),
    //  Image data has been processed
    .matrix_img_vsync       (matrix_img_vsync       ),      //  processed Image data vsync valid signal
    .matrix_img_href        (matrix_img_href        ),      //  processed Image data href vaild  signal
    .matrix_img_de          (matrix_img_de)          ,
    .matrix_top_edge_flag   (matrix_top_edge_flag   ),   //  processed Image top edge
    .matrix_bottom_edge_flag(matrix_bottom_edge_flag),   //  processed Image bottom edge
    .matrix_left_edge_flag  (matrix_left_edge_flag  ),   //  processed Image left edge
    .matrix_right_edge_flag (matrix_right_edge_flag ),   //  processed Image right edge
    .matrix_p11             (matrix_p11             ),      //  3X3 Matrix output
    .matrix_p12             (matrix_p12             ),
    .matrix_p13             (matrix_p13             ),
    .matrix_p21             (matrix_p21             ), 
    .matrix_p22             (matrix_p22             ),
    .matrix_p23             (matrix_p23             ),
    .matrix_p31             (matrix_p31             ),  
    .matrix_p32             (matrix_p32             ),
    .matrix_p33             (matrix_p33             )
);

//----------------------------------------------------------------------
//  Gx_data = [p22,p23] * [ 0,1] = p23 - p32
//            [p32,p33]   [-1,0]
//  
//  Gy_data = [p22,p23] * [1, 0] = p22 - p33
//            [p32,p33]   [0,-1]
//
//  G_data = sqrt(Gx_data^2 + Gy_data^2)
reg signed      [ 8:0]          Gx_data;
reg signed      [ 8:0]          Gy_data;
reg signed      [17:0]          Gx_square_data;
reg signed      [17:0]          Gy_square_data;
reg             [16:0]          G_square_data;
wire            [ 10:0]          G_data;

always @(posedge clk)
begin
    Gx_data        <= $signed({1'b0,matrix_p23}) - $signed({1'b0,matrix_p32});
    Gy_data        <= $signed({1'b0,matrix_p22}) - $signed({1'b0,matrix_p33});
    Gx_square_data <= $signed(Gx_data) * $signed(Gx_data);
    Gy_square_data <= $signed(Gy_data) * $signed(Gy_data);
    G_square_data  <= Gx_square_data[16:0] + Gy_square_data[16:0];
end

sqrt u_sqrt
(
    .sys_clk    (clk            ),
    .sys_rst    (~rst_n         ),
    .din        (G_square_data  ),
    .din_valid  (1'b1           ),
    .dout       (G_data         ),
    .dout_valid (               )
);

//----------------------------------------------------------------------
//  lag 13 clocks signal sync
reg             [11:0]          matrix_img_vsync_r1;
reg             [11:0]          matrix_img_href_r1;
reg             [11:0]          matrix_img_de_r1;
reg             [11:0]          matrix_edge_flag_r1;


always @(posedge clk or negedge rst_n)
begin
    if(!rst_n)
    begin
        matrix_img_vsync_r1 <= 12'b0;
        matrix_img_href_r1  <= 12'b0;
        matrix_img_de_r1    <= 12'b0;
        matrix_edge_flag_r1 <= 12'b0;
    end
    else
    begin
        matrix_img_vsync_r1 <= {matrix_img_vsync_r1[10:0],matrix_img_vsync};
        matrix_img_href_r1  <= {matrix_img_href_r1[10:0],matrix_img_href};
        matrix_img_de_r1    <= {matrix_img_de_r1[10:0],matrix_img_de};
        matrix_edge_flag_r1 <= {matrix_edge_flag_r1[10:0],matrix_bottom_edge_flag | matrix_right_edge_flag};
    end
end

reg             [7:0]           matrix_p22_r1       [0:11];

always @(posedge clk)
begin
    matrix_p22_r1[ 0] <= matrix_p22;
    matrix_p22_r1[ 1] <= matrix_p22_r1[0];
    matrix_p22_r1[ 2] <= matrix_p22_r1[ 1];
    matrix_p22_r1[ 3] <= matrix_p22_r1[ 2];
    matrix_p22_r1[ 4] <= matrix_p22_r1[ 3];
    matrix_p22_r1[ 5] <= matrix_p22_r1[ 4];
    matrix_p22_r1[ 6] <= matrix_p22_r1[ 5];
    matrix_p22_r1[ 7] <= matrix_p22_r1[ 6];
    matrix_p22_r1[ 8] <= matrix_p22_r1[ 7];
    matrix_p22_r1[ 9] <= matrix_p22_r1[ 8];
    matrix_p22_r1[10] <= matrix_p22_r1[ 9];
    matrix_p22_r1[11] <= matrix_p22_r1[10];
end

//----------------------------------------------------------------------
reg             [10:0]           pixel_data1;

always @(posedge clk)
begin
    if(matrix_edge_flag_r1[11] == 1'b1)
        pixel_data1 <= matrix_p22_r1[11];
    else
        pixel_data1 <= matrix_p22_r1[11] + G_data;
end

reg             [7:0]           pixel_data2;

always @(posedge clk)
begin
    if(pixel_data1 > 10'd255)
        pixel_data2 <= 8'd255;
    else
        pixel_data2 <= pixel_data1[7:0];
end

//----------------------------------------------------------------------
//  lag 2 clocks signal sync
reg             [1:0]           matrix_img_vsync_r2;
reg             [1:0]           matrix_img_href_r2;
reg             [1:0]           matrix_img_de_r2;

always @(posedge clk or negedge rst_n)
begin
    if(!rst_n)
    begin
        matrix_img_vsync_r2 <= 2'b0;
        matrix_img_href_r2  <= 2'b0;
        matrix_img_de_r2    <= 2'b0;
    end
    else
    begin
        matrix_img_vsync_r2 <= {matrix_img_vsync_r2[0],matrix_img_vsync_r1[11]};
        matrix_img_href_r2  <= {matrix_img_href_r2[0],matrix_img_href_r1[11]};
        matrix_img_de_r2    <= {matrix_img_de_r2[0],matrix_img_de_r1[11]};
    end
end

//----------------------------------------------------------------------
//  result output
assign post_img_data  = pixel_data2;
assign post_img_vsync = matrix_img_vsync_r2[1];
assign post_img_href  = matrix_img_href_r2[1];
assign post_img_de    = matrix_img_de_r2[1];

endmodule