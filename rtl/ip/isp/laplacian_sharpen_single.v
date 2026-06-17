// *********************************************************************
// 
// Copyright (C) 2021-20xx CrazyBird Corporation
// 
// Filename     :   laplacian_sharpen_proc.v
// Author       :   CrazyBird
// Email        :   CrazyBirdLin@qq.com
// 
// Description  :   
// 
// Modification History
// Date         By          Version         Change Description
//----------------------------------------------------------------------
// 2022/03/13   CrazyBird   1.0             Original
// 
// *********************************************************************
module laplacian_sharpen_single
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
    output reg                  post_img_vsync  ,       //  processed Image data vsync valid signal
    output reg                  post_img_href   ,       //  processed Image data href vaild  signal
    output reg      [7:0]       post_img_data   ,       //  processed Image brightness output
    output reg                  post_img_de     
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
    .matrix_img_de          (matrix_img_de          ),
    .matrix_top_edge_flag   (matrix_top_edge_flag   ),      //  processed Image top edge
    .matrix_bottom_edge_flag(matrix_bottom_edge_flag),      //  processed Image bottom edge
    .matrix_left_edge_flag  (matrix_left_edge_flag  ),      //  processed Image left edge
    .matrix_right_edge_flag (matrix_right_edge_flag ),      //  processed Image right edge
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
reg             [10:0]          minute_data;
reg             [ 9:0]          minus_data;

always @(posedge clk)
begin
    minute_data <= {matrix_p22,2'b0} ;
    minus_data <= {2'b0, matrix_p12} + {2'b0, matrix_p21} + {2'b0, matrix_p23} + {2'b0, matrix_p32};
end

//----------------------------------------------------------------------
reg signed      [11:0]          pixel_data1;

always @(posedge clk)
begin
    pixel_data1 <= $signed({1'b0,minute_data}) - $signed({1'b0,minus_data});
end

reg signed [12:0] sharpened_result;

always @(posedge clk)
begin
    sharpened_result <= $signed({1'b0, matrix_p22_r1[1], 3'b0}) + pixel_data1;
end

reg             [7:0]           pixel_data2;

always @(posedge clk)
begin
    if(sharpened_result[12] == 1'b1)
        pixel_data2 <= 8'b0;
    else if(sharpened_result[11:3] > 9'd255)
        pixel_data2 <= 8'd255;
    else
        pixel_data2 <= sharpened_result[10:3];
end

//----------------------------------------------------------------------
//  lag 4 clocks signal sync
reg             [3:0]           matrix_img_vsync_r1;
reg             [3:0]           matrix_img_href_r1;
reg             [3:0]           matrix_img_de_r1;
reg             [3:0]           matrix_edge_flag_r1;

always @(posedge clk or negedge rst_n)
begin
    if(!rst_n)
    begin
        matrix_img_vsync_r1 <= 4'b0;
        matrix_img_href_r1  <= 4'b0;
        matrix_img_de_r1    <= 4'b0;
        matrix_edge_flag_r1 <= 4'b0;
    end
    else
    begin
        matrix_img_vsync_r1 <= {matrix_img_vsync_r1[2:0],matrix_img_vsync};
        matrix_img_href_r1  <= {matrix_img_href_r1[2:0],matrix_img_href};
        matrix_img_de_r1    <= {matrix_img_de_r1[2:0],matrix_img_de};
        matrix_edge_flag_r1 <= {matrix_edge_flag_r1[2:0],matrix_top_edge_flag | matrix_bottom_edge_flag | matrix_left_edge_flag | matrix_right_edge_flag};
    end
end

reg             [7:0]           matrix_p22_r1       [0:3];

always @(posedge clk)
begin
    matrix_p22_r1[0] <= matrix_p22;
    matrix_p22_r1[1] <= matrix_p22_r1[0];
    matrix_p22_r1[2] <= matrix_p22_r1[1];
    matrix_p22_r1[3] <= matrix_p22_r1[2];
end

//----------------------------------------------------------------------
//  result output
always @(posedge clk)
begin
    if(matrix_edge_flag_r1[3] == 1'b1)
        post_img_data <= matrix_p22_r1[3];
    else
        post_img_data <= pixel_data2;
end

always @(posedge clk or negedge rst_n)
begin
    if(!rst_n)
    begin
        post_img_vsync <= 1'b0;
        post_img_href  <= 1'b0;
        post_img_de    <= 1'b0;
    end
    else
    begin
        post_img_vsync <= matrix_img_vsync_r1[3];
        post_img_href  <= matrix_img_href_r1[3];
        post_img_de    <= matrix_img_de_r1[3];
    end
end

endmodule