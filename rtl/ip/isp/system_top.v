
`define DRAM_BYTE_NUM    4
`define APP_ADDR_WIDTH   28


module system_top (
input wire            I_sys_clk,
input wire            I_ddr_clk,
output wire           O_phy_rst,            //以太网芯片复位信号，低电平有效 
input  wire [3:0]     I_a_rgmii_rxd,        //RGMII输入数据
input  wire           I_a_rgmii_rx_ctl,     //RGMII输入数据有效信号
input  wire           I_a_rgmii_rxc,        //RGMII接收数据时钟
output wire [3:0]     O_a_rgmii_txd,        //RGMII输出数据 
output wire           O_a_rgmii_tx_ctl,     //RGMII输出数据有效信号
output wire           O_a_rgmii_txc,

inout  wire           IO_cam_sda,
output wire           O_cam_scl,
output wire           O_clk_24m,
input  wire [3:0]     I_button
);


wire        S_hs_rx_clk;           //synthesis keep  
wire        S_hs_rx_valid;         //synthesis keep  
wire[15:0]  S_hs_rx_data;          //synthesis keep
 
wire        S_csi_frame_start;       
wire        S_csi_frame_end;         
wire        S_csi_valid;             
wire[31:0]  S_csi_data;     


//  Current implementation supports RAW8 only. 
wire            w_mipi_clk; 
wire            w_csi_rx_vsync0;//synthesis keep
wire            w_csi_rx_hsync0;//synthesis keep
wire            w_csi_rx_dvalid; //synthesis keep
wire    [47:0]  w_csi_rx_data; 
wire    [15:0]  w_csi_rx_index; 

 
wire        S_raw8_frame_start; 
wire        S_raw8_frame_end;   
wire        S_raw8_valid;       
wire[31:0]  S_raw8_data;             

wire        pll_locked;         //synthesis keep
wire        ddr_pll_locked;     //synthesis keep
wire        vtc_de_valid;       //synthesis keep
wire        sys_rstn;           //synthesis keep
wire        vtc_rstn;           //synthesis keep
wire        S_rst;              //synthesis keep
wire        O_phyrst_done;      
wire        phy_rst;            //synthesis keep
wire        reset;              //synthesis keep

assign      sys_rstn = pll_locked & ddr_pll_locked; 

assign      S_rst     = ~sys_rstn;
assign      vtc_rstn  =  sys_rstn;
assign      reset     = ~O_phyrst_done;
assign      O_phy_rst = phy_rst;

wire        clk_125,clk_125_90;
wire        clk24m;
wire        vtc_clk;
wire        vtc_vs;  //synthesis keep
// oDDR primitive
PH1_LOGIC_ODDR  CMOS_CLK 
(
.q             (O_clk_24m), //output 125mhz（1gbps） 25mhz(100mbps)    2.5mhz(10mbps)
.clk           (clk24m),
.d0            (1'b1),
.d1            (1'b0),
.rst           (1'b0)
);

pll u_pll(
.refclk   ( I_sys_clk           ),
.lock     ( pll_locked          ),
.clkc_rst (1'b0                 ), 
.clk0_out ( clk_125             ),
.clk1_out ( clk_125_90          ),
.clk2_out ( S_clk_70m           ),
.clk3_out ( clk24m              ),
.clk4_out ( vtc_clk             ) //35M 降低速度
);

uiphyrst#
(
.CLK_FREQ(32'd24_000_000)          //时钟参数
)
uiphyrst_inst                      //设置分频系数，降低流水灯的变化速度
(                                  //该参数可以由上层调用时修改
.I_CLK(clk24m),                    //系统时钟信号
.I_rstn(pll_locked),               //全局复位
.I_phyrst(1'b0),             //复位时钟
.O_phyrst(phy_rst),                //复位输出
.O_phyrst_done(O_phyrst_done)
);


localparam  AXI_ADDR_WIDTH = `APP_ADDR_WIDTH +2;
localparam  AXI_DATA_WIDTH = `DRAM_BYTE_NUM*8*8;

wire [AXI_ADDR_WIDTH-1:  0]      fdma_waddr;   //FDMA写通道地址
wire                             fdma_wareq;   //FDMA写通道请求
wire [15: 0]                     fdma_wsize;   //FDMA写通道一次FDMA的传输大小                                       
wire                             fdma_wbusy;   //FDMA处于BUSY状态，AXI总线正在写操作        
wire [AXI_DATA_WIDTH-1 : 0]      fdma_wdata;   //FDMA写数据
wire                             fdma_wvalid;  //FDMA 写有效
wire                             fdma_wready;  //FDMA写准备好，用户可以写数据

wire [AXI_ADDR_WIDTH-1:  0]      fdma_raddr;   //FDMA读通道地址
wire                             fdma_rareq;   //FDMA读通道请求
wire [15: 0]                     fdma_rsize;   //FDMA读通道一次FDMA的传输大小                                       
wire                             fdma_rbusy;   //FDMA处于BUSY状态，AXI总线正在读操作            
wire [AXI_DATA_WIDTH-1 : 0]      fdma_rdata;   //FDMA读数据
wire                             fdma_rvalid;  //FDMA 读有效
wire                             fdma_rready;  //FDMA读准备好，用户可以读数据   

wire                             O_axi_clk;//synthesis keep

//例化APP接口转AXI接口
uifdma_axi_ddr#
(
.M_AXI_MAX_BURST_LEN (16)
)
u_uifdma_axi_ddr
(
.I_ddr_clk                       ( I_ddr_clk    ),
.I_sys_rstn                      ( 1'b1         ),
.O_ddr_pll_locked                ( ddr_pll_locked   ),

// DDR signals
.ddr_reset_n                     ( ddr_reset_n  ),
.ddr_addr                        ( ddr_addr     ),
.ddr_ba                          ( ddr_ba       ),
.ddr_ck_p                        ( ddr_ck_p     ),
.ddr_ck_n                        ( ddr_ck_n     ),
.ddr_cke                         ( ddr_cke      ),
.ddr_cs_n                        ( ddr_cs_n     ),
.ddr_ras_n                       ( ddr_ras_n    ),
.ddr_cas_n                       ( ddr_cas_n    ),
.ddr_we_n                        ( ddr_we_n     ),
.ddr_odt                         ( ddr_odt      ),
.ddr_dqs_p                       ( ddr_dqs_p    ),
.ddr_dqs_n                       ( ddr_dqs_n    ),
.ddr_dq                          ( ddr_dq       ),
.ddr_dm                          ( ddr_dm       ),


.O_axi_clk                       (O_axi_clk     ),

.I_fdma_waddr                    (fdma_waddr)    ,// FDMA写通道地址
.I_fdma_wareq                    (fdma_wareq)    ,// FDMA写通道请求
.I_fdma_wsize                    (fdma_wsize)    ,// FDMA写通道一次FDMA的传输大小                                            
.O_fdma_wbusy                    (fdma_wbusy)    ,// FDMA处于BUSY状态，AXI总线正在写操作  
                
.I_fdma_wdata                    (fdma_wdata)    ,// FDMA写数据
.O_fdma_wvalid                   (fdma_wvalid)   ,// FDMA 写有效
.I_fdma_wready                   (1'b1)          ,// FDMA写准备好，用户可以写数据

.I_fdma_raddr                    (fdma_raddr)    ,// FDMA读通道地址
.I_fdma_rareq                    (fdma_rareq)    ,// FDMA读通道请求
.I_fdma_rsize                    (fdma_rsize)    ,// FDMA读通道一次FDMA的传输大小                                      
.O_fdma_rbusy                    (fdma_rbusy)    ,// FDMA处于BUSY状态，AXI总线正在读操作 
                
.O_fdma_rdata                    (fdma_rdata)    ,// FDMA读数据
.O_fdma_rvalid                   (fdma_rvalid)   ,// FDMA 读有效
.I_fdma_rready                   (1'b1)          // FDMA读准备好，用户可以读数据
);


wire ud_wclk;//synthesis keep
wire ud_wvs;//synthesis keep
wire ud_wde;//synthesis keep
wire [31:0] ud_wdata;//synthesis keep

wire ud_rclk,ud_rvs,ud_rde;
wire [31:0]  ud_rdata;//synthesis keep

wire [7:0] wbuf_sync,rbuf_sync;
reg  ud_rfifo_en;

assign ud_wclk   = S_hs_rx_clk;
assign ud_wvs    = S_raw8_frame_start;
assign ud_wde    = S_raw8_valid;
assign ud_wdata  = S_raw8_data;


assign ud_rclk   = vtc_clk;
assign ud_rvs    = vtc_vs;
assign ud_rde    = ud_rfifo_en;

//例化uidbuf 控制器
uidbuf# (
.VIDEO_ENABLE(1'b1),  
.AXI_DATA_WIDTH(AXI_DATA_WIDTH),
.AXI_ADDR_WIDTH(AXI_ADDR_WIDTH),

.W_BUFDEPTH(1024),
.W_DATAWIDTH(32),
.W_BASEADDR(0),
.W_DSIZEBITS(25),
.W_XSIZE(480),
.W_XSTRIDE(480),
.W_YSIZE(1080),
.W_XDIV(1),
.W_BUFSIZE(3),

.R_BUFDEPTH(1024),
.R_DATAWIDTH(32),
.R_BASEADDR(0),
.R_DSIZEBITS(25),
.R_XSIZE(480),
.R_XSTRIDE(480),
.R_YSIZE(1080),
.R_XDIV(1),
.R_BUFSIZE(3)
)
uidbuf_u0
(
.I_ui_clk       (O_axi_clk),
.I_ui_rstn      (sys_rstn),


.I_W_FS         (ud_wvs),
.I_W_clk        (ud_wclk),
.I_W_wren       (ud_wde),
.I_W_data       (ud_wdata), 
.O_W_sync_cnt   (),
.I_W_buf        (wbuf_sync),
.O_W_full       (),

.I_R_FS         (ud_rvs),
.I_R_clk        (ud_rclk),
.I_R_rden       (ud_rde),
.O_R_data       (ud_rdata),
.O_R_sync_cnt   (rbuf_sync),
.I_R_buf        (rbuf_sync),
.O_R_empty      (),
       
.O_fdma_waddr   (fdma_waddr)  ,
.O_fdma_wareq   (fdma_wareq)  ,
.O_fdma_wsize   (fdma_wsize)  ,                                     
.I_fdma_wbusy   (fdma_wbusy)  ,         
.O_fdma_wdata   (fdma_wdata)     ,
.I_fdma_wvalid  (fdma_wvalid),
.O_fdma_wready  (fdma_wready),
.O_fdma_raddr   (fdma_raddr)  ,
.O_fdma_rareq   (fdma_rareq)  ,
.O_fdma_rsize   (fdma_rsize)  ,                                     
.I_fdma_rbusy   (fdma_rbusy)  ,         
.I_fdma_rdata   (fdma_rdata)     ,
.I_fdma_rvalid  (fdma_rvalid),
.O_fdma_rready  (fdma_rready),
.O_fmda_wbuf    (fdma_wbuf),    
.O_fdma_wirq    (fdma_wirq),        
.O_fmda_rbuf    (fdma_rbuf),    
.O_fdma_rirq    (fdma_rirq)
 ); 

//设置3帧缓存，读延迟写1帧
uisetvbuf#(
.BUF_DELAY(1),
.BUF_LENTH(3)
)
uisetvbuf_u
(
.I_bufn(rbuf_sync),
.O_bufn(wbuf_sync)
);   

//以下代码需要注意时序设计，在正确的时序输出
reg [1 :0] ud_rdata_cnt; //synthesis keep
reg [7 :0] ud_rdata_d1;//synthesis keep
reg  vtc_user_d1;//synthesis keep
reg  vtc_last_d1;//synthesis keep
reg  vtc_de_valid_d1; //synthesis keep

always @(posedge vtc_clk) begin
    if(vtc_de_valid)
        ud_rdata_cnt <= ud_rdata_cnt + 'd1;
    else 
        ud_rdata_cnt <= 0;
end

always @(posedge vtc_clk) begin
        vtc_user_d1     <= vtc_user;
        vtc_last_d1     <= vtc_last;
        vtc_de_valid_d1 <= vtc_de_valid;
end

// 当vtc_de_valid = 1 ud_rdata_cnt =1 读1个数据，但是ud_rfifo_en延迟1个周期输出1，fifo再延迟1个周期更新数据
always @(posedge vtc_clk) begin
    ud_rfifo_en <=  (ud_rdata_cnt == 2);
end

always @(posedge vtc_clk) begin
    if(vtc_de_valid)begin
        case(ud_rdata_cnt)
            'd0: ud_rdata_d1 <=  ud_rdata[31:24]; 
            'd1: ud_rdata_d1 <=  ud_rdata[23:16]; 
            'd2: ud_rdata_d1 <=  ud_rdata[15: 8];
            'd3: ud_rdata_d1 <=  ud_rdata[7 : 0];
        default:
            ud_rdata_d1 <= ud_rdata_d1;
    endcase
    end
    else 
        ud_rdata_d1 <=0;
end

wire            w_rgb_vsync, w_rgb_href; 
wire    [7:0]   w_rgb_r, w_rgb_g, w_rgb_b; 


raw8_2_rgb888 #(
.H_SIZE(1920), 
.V_SIZE(1080)
)u_raw8_2_rgb888 
(
.I_clk          (vtc_clk),                //cmos video pixel clock
.I_rst_n        (vtc_rstn),              //global reset
        
//CMOS YCbCr444 data output
.I_raw_vs       (~vtc_vs),    //Prepared Image data vsync valid signal. Reset on falling edge. 
.I_raw_de       (vtc_de_valid_d1),     //Prepared Image data href vaild  signal
.I_raw_data     (ud_rdata_d1),        //Prepared Image data 8 Bit RAW Data

.O_rgb_vs       (w_rgb_vsync),   //Processed Image data vsync valid signal
.O_rgb_de       (w_rgb_href),    //Processed Image data href vaild  signal
.O_rgb_r        (w_rgb_r),       //Prepared Image green data to be processed 
.O_rgb_g        (w_rgb_g),     //Prepared Image green data to be processed
.O_rgb_b        (w_rgb_b)       //Prepared Image blue data to be processed
);

wire            w_awb_vs, w_awb_hs, w_awb_de; 
wire    [7:0]   w_awb_r, w_awb_g, w_awb_b;
awb u_awb 
(
.I_clk          (vtc_clk),
.I_rst_n        (vtc_rstn),

.I_red_gain     (0),
.I_green_gain   (0),
.I_blue_gain    (0),

.I_awb_vs       (w_rgb_vsync),
.I_awb_hs       (w_rgb_href),
.I_awb_de       (w_rgb_href),
.I_awb_rgb      ({w_rgb_r, w_rgb_g, w_rgb_b}),

.O_awb_vs       (w_awb_vs),
.O_awb_hs       (w_awb_hs),
.O_awb_de       (w_awb_de),
.O_awb_rgb      ({w_awb_r, w_awb_g, w_awb_b})
);


wire            w_crop_vs, w_crop_hs, w_crop_de; 
wire    [23:0]  w_crop_data; 

bound_cut u_bound_cut 
(
.I_clk          (vtc_clk),
.I_awb_vs       (w_awb_vs),
.I_awb_hs       (w_awb_hs),
.I_awb_de       (w_awb_de),
.I_awb_data     ({w_awb_r, w_awb_g, w_awb_b}),
        
.O_awb_vs       (w_crop_vs),
.O_awb_hs       (w_crop_hs),
.O_awb_de       (w_crop_de),
.O_awb_data     (w_crop_data)
);

        
//解码为RAW8
/**/
raw10_unpacket_2lane u_raw10_unpacket(
.I_clk                 ( S_hs_rx_clk          ),
.I_rst_n               ( ~S_rst               ),
                                                     
.I_csi_frame_start     ( S_csi_frame_start    ),
.I_csi_frame_end       ( S_csi_frame_end      ),
.I_csi_valid           ( S_csi_valid          ),
.I_csi_data            ( S_csi_data           ),
    
.O_raw8_frame_start    ( S_raw8_frame_start   ),
.O_raw8_frame_end      ( S_raw8_frame_end     ),
.O_raw8_valid          ( S_raw8_valid         ),
.O_raw8_data           ( S_raw8_data          )
);

//csi 解码为RAW数据

csi_unpacket_2lane u_csi_unpacket(
.I_clk                 ( S_hs_rx_clk       ),
.I_rst_n               ( ~S_rst            ),

.I_hs_valid            ( S_hs_rx_valid     ),
.I_hs_data             ( S_hs_rx_data      ),

.O_csi_frame_start     ( S_csi_frame_start ),
.O_csi_frame_end       ( S_csi_frame_end   ),
.O_csi_valid           ( S_csi_valid       ),
.O_csi_data            ( S_csi_data        )
);

assign S_data_lane1_idelay = 100;
assign S_data_lane0_idelay = 100;
assign S_clk_lane_idelay   = 0;

wire [1:0] S_lane_error;//synthesis keep
wire [7:0]  O_lp_rx_data; 


mipi_dphy_rx_ph1a_mipiio_wrapper#(
.LANE_NUM              ( 2 ),
.BYTE_NUM              ( 1 )
)u_mipi_dphy_rx_ph1a_mipiio_wrapper(
.I_lp_clk              ( S_clk_70m            ),
.I_rst                 ( S_rst                ),

.I_clk_lane_in_delay   ( S_clk_lane_idelay    ),
.I_data_lane0_in_delay ( S_data_lane0_idelay  ),
.I_data_lane1_in_delay ( S_data_lane1_idelay  ),
.I_data_lane2_in_delay ( S_data_lane2_idelay  ),
.I_data_lane3_in_delay ( S_data_lane3_idelay  ),

.I_lane_invert         ( 4'b0000         ),

.O_hs_rx_clk           ( S_hs_rx_clk     ),
.O_hs_rx_valid         ( S_hs_rx_valid   ),
.O_hs_rx_data          ( S_hs_rx_data    ),

.O_lp_rx_lane0_p       ( S_lp_rx_lane0_p ),
.O_lp_rx_lane0_n       ( S_lp_rx_lane0_n ),

.I_lp_tx_en            ( 1'b0            ),
.I_lp_tx_lane0_p       ( 1'b0            ),
.I_lp_tx_lane0_n       ( 1'b0            ),

.O_lane_error          ( S_lane_error    )
);


uivtc#(
//1080P @ 137.5M
.H_ActiveSize       (1920), //视频时间参数,行视频信号，一行有效(需要显示的部分)像素所占的时钟数，一个时钟对应一个有效像素
.H_SyncStart        (1920+10), //视频时间参数,行同步开始，即多少时钟数后开始产生行同步信号 
.H_SyncEnd          (1920+10+10),//视频时间参数,行同步结束，即多少时钟数后停止产生行同步信号，之后就是行有效数据部分
.H_FrameSize        (1920+1000), //视频时间参数,行视频信号，一行视频信号总计占用的时钟数
.V_ActiveSize       (1080),//视频时间参数,场视频信号，一帧图像所占用的有效(需要显示的部分)行数量，通常说的视频分辨率即H_ActiveSize*V_ActiveSize
.V_SyncStart        (1080+2),//视频时间参数,场同步开始，即多少行数后开始产生场同步信号 
.V_SyncEnd          (1080+2+2), //视频时间参数,场同步结束，多少行后停止产生长同步信号  
.V_FrameSize        (1080+2+2+2) //视频时间参数,场视频信号，一帧视频信号总计占用的行数量     
)
uivtc_inst
(
.I_vtc_clk(vtc_clk),  //系统时钟 
.I_vtc_rstn(vtc_rstn),//系统复位
.O_vtc_vs  (vtc_vs),//场同步输出
.O_vtc_hs  (vtc_hs),//行同步输出
.O_vtc_de_valid(vtc_de_valid),  //视频数据有效
.O_vtc_user(vtc_user),          //满足stream时序产生 user 信号,用于帧同步
.O_vtc_last(vtc_last)           //满足stream时序产生 later 信号,用于每行结束
);


wire [15:0]ae;//synthesis keep
wire [15:0]ag;//synthesis keep
wire cam_cfg_done,ae_cfg_done;
wire ae_req;
ae_set u_ae_set(
.I_clk(clk24m),
.I_rst(~sys_rstn),
.I_btn(I_button),
.I_cam_cfg_done(cam_cfg_done),
.I_ae_cfg_done(ae_cfg_done),
.O_ae_req(ae_req),
.O_ae(ae),
.O_ag(ag)
);

uicfgcs500#
(
.CLK_DIV(24000000/100000-1)
)
u_uicfgcs500
(
.I_clk(clk24m),  //系统时钟输入
.I_rst_n(sys_rstn),  //系统复位输入
.I_ae_req(ae_req),
.I_ae(ae),
.I_ag(ag),
.O_cam_scl(O_cam_scl), //I2C总线，SCL时钟
.IO_cam_sda(IO_cam_sda), //I2C总线，SDA数据
.O_cfg_done(cam_cfg_done),//摄像头寄存器初始化完成
.O_ae_cfg_done(ae_cfg_done)//AE配置完成
);  


localparam      S_SYNC_1        = 3'd0;
localparam      S_SYNC_2        = 3'd1;
localparam      S_SYNC_3        = 3'd2;
localparam      S_UDP_WAIT      = 3'd3;
localparam      S_UDP_ACK       = 3'd4;
localparam      S_UDP_HEADER    = 3'd5;
localparam      S_UDP_DATA      = 3'd6;
localparam      S_UDP_END       = 3'd7;

localparam      IMG_HEADER      = 32'hAA0055FF;
localparam      IMG_WIDTH       = 16'd1920; 
localparam      IMG_HEIGHT      = 16'd1080; 
//localparam      IMG_TOTAL       = IMG_WIDTH*IMG_HEIGHT*3;
localparam      IMG_FRAMSIZE    = 32'd1440;
localparam      IMG_FRAMTOTAL   = IMG_WIDTH*IMG_HEIGHT*3/IMG_FRAMSIZE;
localparam      IMG_HEADERSIZE  = 6'd16;
reg  [15 :0]    IMG_FRAMSEQ;
reg  [15 :0]    IMG_PICSEQ; 
wire [127:0]    STHEADER_X86    = {IMG_FRAMSIZE,IMG_FRAMSEQ,IMG_PICSEQ,IMG_HEIGHT,IMG_WIDTH,IMG_HEADER};


wire [7:0]  gmii_tdata;
wire        gmii_tvalid;
wire [7:0]  gmii_rdata;
wire        gmii_rvalid;

wire        R_udp_valid;
wire [7:0]  R_udp_data;
wire [15:0] R_udp_len;
wire [15:0] R_udp_src_port;


wire        W_udp_busy; //synthesis keep
reg         W_udp_req; //synthesis keep
reg         W_udp_valid;//synthesis keep 
reg [7 :0]  W_udp_data;
reg [15:0]  W_udp_len;
reg         W_udp_data_read;

reg [2 :0] UDP_MS;          //synthesis keep
reg [11:0] W_pkg_cnt;       //synthesis keep//每次发送UDP的计数器
reg [1 :0] rd_index;        //synthesis keep
wire[23:0] udp_rdata;       //synthesis keep
wire       udp_ren;         //synthesis keep

wire        [12:0] wr_cnt; //synthesis keep
udp_pkg_buf #(
.DATA_WIDTH_W   (24), 
.DATA_WIDTH_R   (24), 
.ADDR_WIDTH_W   (12), 
.ADDR_WIDTH_R   (12), 
.AL_FULL_NUM    (2045), 
.AL_EMPTY_NUM   (2), 
.SHOW_AHEAD_EN  (1'b1), 
.OUTREG_EN      ("NOREG")
) 
udp_tfifo_inst(
.rst    (vtc_vs |  reset    ),      //asynchronous port,active hight
.clkw   (vtc_clk    ),      //write clock
.clkr   (clk_125    ),      //read ()clock
.we     (w_crop_de  ),      //write enable,active hight
.di     (w_crop_data),      //write data
.re     (udp_ren    ),      //read enable,active hight
.dout   (udp_rdata  ),      //read data
.valid  (           ),      //read data valid flag
.wrusedw(wr_cnt     )       //stored data number in fifo 
); 


// 当vtc_de_valid = 1 ud_rdata_cnt =1 读1个数据，但是ud_rfifo_en延迟1个周期输出1，fifo再延迟1个周期更新数据
assign udp_ren = (rd_index == 2'd2 )&& (UDP_MS == S_UDP_DATA );

always @(posedge clk_125 or posedge reset) begin
    if(reset)
        I_input_data <= 0;
    else begin
        if(UDP_MS == S_UDP_ACK || UDP_MS == S_UDP_HEADER)begin
            I_input_data <= STHEADER_X86[W_pkg_cnt*8 +: 8];
        end
        else if(UDP_MS == S_UDP_DATA)begin
            case(rd_index)
            'd0: I_input_data <=  udp_rdata[23:16]; 
            'd1: I_input_data <=  udp_rdata[15: 8];
            'd2: I_input_data <=  udp_rdata[7 : 0];          
            default:
                 I_input_data <= I_input_data;
            endcase
        end
    end
end


reg [7:0] I_input_data;
reg I_input_len_valid;
reg I_input_valid;
wire O_input_ready;
always@(posedge clk_125 or posedge reset)begin
    if(reset) begin
        I_input_len_valid   <= 1'b0;
        I_input_valid       <= 1'b0;
        W_udp_req           <= 1'b0;
        W_udp_valid         <= 1'b0;
        W_pkg_cnt           <= 12'd0;
        IMG_PICSEQ          <= 32'd0;
        IMG_FRAMSEQ         <= 32'd0;
        rd_index            <= 2'd0;
        UDP_MS              <= S_SYNC_1;
    end
    else begin
       case(UDP_MS)
       S_SYNC_1:begin //产生VS同步，通过FDMA从DDR读取数据
         if(vtc_vs)begin
         rd_index    <= 2'd0;
         IMG_FRAMSEQ <= 32'd0; //一帧图片会分为IMG_FRAMSEQ次发送，并且上位机缓存依据此此序号对一帧图片内的数据包重组为一帧图片
         IMG_PICSEQ  <= IMG_PICSEQ + 1'b1;//图片计数器，该计数器提供给上位机缓存，用于根据图片的计数器号，一次显示图片
         UDP_MS      <= S_SYNC_2;
         end
       end
       S_SYNC_2:begin
            if(~vtc_vs)
            UDP_MS      <= S_SYNC_3;
       end
       S_SYNC_3:begin
         UDP_MS      <= S_UDP_WAIT;
       end
       S_UDP_WAIT:begin      //等待UDP准备好发送
          W_pkg_cnt <= 12'd0; //每次UDP发送的数据计数器
           if(wr_cnt >= 480) begin//UDP控制器发送非忙，以及读缓存有数据
              I_input_len_valid <= 1'b1;UDP_MS <= S_UDP_ACK;//发送UDP发数据请求
           end
           else begin
               I_input_len_valid <= 1'b0;UDP_MS <= S_UDP_WAIT;
           end
       end
       
       S_UDP_ACK:begin
          if(O_input_ready) begin //当UDP总线忙，代表正在发送数据
               I_input_len_valid <= 1'b0;
               I_input_valid <= 1'b1;   //发送有效数据
               W_pkg_cnt         <= W_pkg_cnt + 1;
               IMG_FRAMSEQ       <= IMG_FRAMSEQ + 1'b1;
               UDP_MS            <= S_UDP_HEADER;
           end
         end
        S_UDP_HEADER:begin
            I_input_valid <= 1'b1;    //发送有效数据
            W_pkg_cnt   <= W_pkg_cnt + 1;
            if(W_pkg_cnt == IMG_HEADERSIZE -1'b1 )
                UDP_MS           <= S_UDP_DATA;
                    
        end 
        S_UDP_DATA:begin
            I_input_valid <= 1'b1;
            if(rd_index[1:0] == 2'd2) 
                rd_index[1:0] <= 2'd0;
            else
                rd_index[1:0] <= rd_index[1:0]  + 1'b1;
                
            W_pkg_cnt   <= W_pkg_cnt + 1'b1;
            if(W_pkg_cnt == IMG_FRAMSIZE + IMG_HEADERSIZE - 1'b1   )         
                UDP_MS <= S_UDP_END;
            else 
                UDP_MS <= S_UDP_DATA;            
         end
         
         S_UDP_END:begin
            I_input_valid <= 1'b0; 
            if(IMG_FRAMSEQ == IMG_FRAMTOTAL) 
                  UDP_MS <= S_SYNC_1;
            else 
                UDP_MS  <= S_UDP_WAIT; 
          end
          default: UDP_MS <= S_SYNC_1;
        endcase
    end
end      

eth_udp u_eth(
.clk_125           (clk_125),			//系统时钟输入
.reset			   (reset),          //系统复位，高电平有效
   
.I_a_rgmii_rxd(I_a_rgmii_rxd),   	//RGMII输入数据
.I_a_rgmii_rx_ctl(I_a_rgmii_rx_ctl),	//RGMII输入数据有效信号
.I_a_rgmii_rxc(I_a_rgmii_rxc),   	//RGMII接收数据时钟
.O_a_rgmii_txd(O_a_rgmii_txd),   	//RGMII输出数据 
.O_a_rgmii_tx_ctl(O_a_rgmii_tx_ctl), 	//RGMII输出数据有效信号
.O_a_rgmii_txc(O_a_rgmii_txc),    	//RGMII发送数据时钟

.I_input_data      (I_input_data),//输入数据
.I_input_len       (16'd1456),//输入数据长度
.I_input_len_valid (I_input_len_valid),
.I_input_valid     (I_input_valid),//输入数据有效
.O_input_ready     (O_input_ready),//输入数据准备好

.O_output_data      (),
.I_output_valid     (1'b0),
.O_output_empty_flag(),
.O_output_full_flag (),
.I_output_clk       (clk_125),
.I_output_rst       (1'b0) //读复位

);
    
endmodule
