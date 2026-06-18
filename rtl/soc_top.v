/*------------------------------------------------------------------------------
--------------------------------------------------------------------------------
Copyright (c) 2016, Loongson Technology Corporation Limited.

All rights reserved.

Redistribution and use in source and binary forms, with or without modification,
are permitted provided that the following conditions are met:

1. Redistributions of source code must retain the above copyright notice, this 
list of conditions and the following disclaimer.

2. Redistributions in binary form must reproduce the above copyright notice, 
this list of conditions and the following disclaimer in the documentation and/or
other materials provided with the distribution.

3. Neither the name of Loongson Technology Corporation Limited nor the names of 
its contributors may be used to endorse or promote products derived from this 
software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND 
ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED 
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE 
DISCLAIMED. IN NO EVENT SHALL LOONGSON TECHNOLOGY CORPORATION LIMITED BE LIABLE
TO ANY PARTY FOR DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR 
CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE 
GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) 
HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT 
LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF
THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
--------------------------------------------------------------------------------
------------------------------------------------------------------------------*/

`include "config.h"
`include "mycpu.h"

module soc_top #(parameter SIMULATION=1'b0)
(
    input           clk,                //50MHz 时钟输入
    input           reset,              //BTN6手动复位按钮开关，带消抖电路，按下时为1

    //图像输出信号
    output [2:0]    video_red,          //红色像素，3位
    output [2:0]    video_green,        //绿色像素，3位
    output [1:0]    video_blue,         //蓝色像素，2位
    output          video_hsync,        //行同步（水平同步）信号
    output          video_vsync,        //场同步（垂直同步）信号
    output          video_clk,          //像素时钟输出
    output          video_de,           //行数据有效信号，用于区分消隐区

    input           clock_btn,          //BTN5手动时钟按钮开关，带消抖电路，按下时为1
    input  [3:0]    touch_btn,          //BTN1~BTN4，按钮开关，按下时为1
    input  [31:0]   dip_sw,             //32位拨码开关，拨到“ON”时为1
    output [15:0]   leds,               //16位LED，输出时1点亮
    output [7:0]    dpy0,               //数码管低位信号，包括小数点，输出1点亮
    output [7:0]    dpy1,               //数码管高位信号，包括小数点，输出1点亮

    //BaseRAM信号
    inout  [31:0]   base_ram_data,      //BaseRAM数据，低8位与CPLD串口控制器共享
    output [19:0]   base_ram_addr,      //BaseRAM地址
    output [ 3:0]   base_ram_be_n,      //BaseRAM字节使能，低有效。如果不使用字节使能，请保持为0
    output          base_ram_ce_n,      //BaseRAM片选，低有效
    output          base_ram_oe_n,      //BaseRAM读使能，低有效
    output          base_ram_we_n,      //BaseRAM写使能，低有效
    //ExtRAM信号
    inout  [31:0]   ext_ram_data,       //ExtRAM数据
    output [19:0]   ext_ram_addr,       //ExtRAM地址
    output [ 3:0]   ext_ram_be_n,       //ExtRAM字节使能，低有效。如果不使用字节使能，请保持为0
    output          ext_ram_ce_n,       //ExtRAM片选，低有效
    output          ext_ram_oe_n,       //ExtRAM读使能，低有效
    output          ext_ram_we_n,       //ExtRAM写使能，低有效

    //Flash存储器信号，参考 JS28F640 芯片手册
    output [22:0]   flash_a,            //Flash地址，a0仅在8bit模式有效，16bit模式无意义
    inout  [15:0]   flash_d,            //Flash数据
    output          flash_rp_n,         //Flash复位信号，低有效
    output          flash_vpen,         //Flash写保护信号，低电平时不能擦除、烧写
    output          flash_ce_n,         //Flash片选信号，低有效
    output          flash_oe_n,         //Flash读使能信号，低有效
    output          flash_we_n,         //Flash写使能信号，低有效
    output          flash_byte_n,       //Flash 8bit模式选择，低有效。在使用flash的16位模式时请设为1

    //------uart-------
    inout           UART_RX,            //串口RX接收
    inout           UART_TX             //串口TX发送
);

wire cpu_clk;
wire cpu_resetn;
wire sys_clk;
wire sys_resetn;
wire tpu_clk;
wire tpu_resetn;
wire pll_locked;

generate if(SIMULATION) begin: sim_clk
    //simulation clk.
    reg clk_sim;
    initial begin
        clk_sim = 1'b0;
    end
    always #15 clk_sim = ~clk_sim;

    assign cpu_clk = clk_sim;
    assign sys_clk = clk;
    assign tpu_clk = clk;
    rst_sync u_rst_sys(
        .clk(sys_clk),
        .rst_n_in(~reset),
        .rst_n_out(sys_resetn)
    );
    rst_sync u_rst_cpu(
        .clk(cpu_clk),
        .rst_n_in(sys_resetn),
        .rst_n_out(cpu_resetn)
    );
    rst_sync u_rst_tpu(
        .clk(tpu_clk),
        .rst_n_in(sys_resetn),
        .rst_n_out(tpu_resetn)
    );
end
else begin: pll_clk
    clk_pll u_clk_pll(
        .cpu_clk    (cpu_clk),
        .sys_clk    (sys_clk),
        .clk_out3   (),
        .resetn     (~reset),
        .locked     (pll_locked),
        .clk_in1    (clk)
    );
    rst_sync u_rst_sys(
        .clk(sys_clk),
        .rst_n_in(pll_locked),
        .rst_n_out(sys_resetn)
    );
    rst_sync u_rst_cpu(
        .clk(cpu_clk),
        .rst_n_in(sys_resetn),
        .rst_n_out(cpu_resetn)
    );
    rst_sync u_rst_tpu(
        .clk(tpu_clk),
        .rst_n_in(sys_resetn),
        .rst_n_out(tpu_resetn)
    );
end
endgenerate

//==================================================
// 声明尚未定义的 CPU AXI 接口信号和 Debug 信号
//==================================================
wire [ 7:0] intrpt;

// AXI Read Request
wire [ 3:0] cpu_arid;
wire [31:0] cpu_araddr;
wire [ 7:0] cpu_arlen;
wire [ 2:0] cpu_arsize;
wire [ 1:0] cpu_arburst;
wire [ 1:0] cpu_arlock;
wire [ 3:0] cpu_arcache;
wire [ 2:0] cpu_arprot;
wire        cpu_arvalid;
wire        cpu_arready;

// AXI Read Back
wire [ 3:0] cpu_rid;
wire [31:0] cpu_rdata;
wire [ 1:0] cpu_rresp;
wire        cpu_rlast;
wire        cpu_rvalid;
wire        cpu_rready;

// AXI Write Request
wire [ 3:0] cpu_awid;
wire [31:0] cpu_awaddr;
wire [ 7:0] cpu_awlen;
wire [ 2:0] cpu_awsize;
wire [ 1:0] cpu_awburst;
wire [ 1:0] cpu_awlock;
wire [ 3:0] cpu_awcache;
wire [ 2:0] cpu_awprot;
wire        cpu_awvalid;
wire        cpu_awready;

// AXI Write Data
wire [ 3:0] cpu_wid;
wire [31:0] cpu_wdata;
wire [ 3:0] cpu_wstrb;
wire        cpu_wlast;
wire        cpu_wvalid;
wire        cpu_wready;

// AXI Write Back
wire [ 3:0] cpu_bid;
wire [ 1:0] cpu_bresp;
wire        cpu_bvalid;
wire        cpu_bready;

// CPU Debug 信号
wire        cpu_break_point;
wire        cpu_infor_flag;
wire [ 4:0] cpu_reg_num;

// CPU Debug Trace 信号
wire [31:0] cpu_debug0_wb_pc;
wire [ 3:0] cpu_debug0_wb_rf_wen;
wire [ 4:0] cpu_debug0_wb_rf_wnum;
wire [31:0] cpu_debug0_wb_rf_wdata;
wire [31:0] cpu_debug0_wb_inst;

wire        confreg_int;
wire        uart0_int;
wire        confreg_dma_finish;
wire        confreg_fft_finish;
//-----------------------------------------------------
assign intrpt      = {6'd0, uart0_int, confreg_int};
assign cpu_break_point = 1'b0;
assign cpu_infor_flag  = 1'b0;
assign cpu_reg_num     = 5'd0;
assign confreg_fft_finish = 1'b0;
//-----------------------------------------------------

// 实例化 CPU (core_top)

core_top u_core_top (
    .aclk               (cpu_clk    ),
    .aresetn            (cpu_resetn ),
    .intrpt             ( {6'b0,uart0_int,confreg_int} ), 
    
    // AXI Read Request
    .arid               (cpu_arid   ),//4
    .araddr             (cpu_araddr ),
    .arlen              (cpu_arlen  ),
    .arsize             (cpu_arsize ),
    .arburst            (cpu_arburst),
    .arlock             (cpu_arlock ),
    .arcache            (cpu_arcache),
    .arprot             (cpu_arprot ),
    .arvalid            (cpu_arvalid),
    .arready            (cpu_arready),
    // AXI Read Back
    .rid                (cpu_rid    ),//4
    .rdata              (cpu_rdata  ),
    .rresp              (cpu_rresp  ),
    .rlast              (cpu_rlast  ),
    .rvalid             (cpu_rvalid ),
    .rready             (cpu_rready ),
    // AXI Write Request
    .awid               (cpu_awid   ),//4
    .awaddr             (cpu_awaddr ),
    .awlen              (cpu_awlen  ),
    .awsize             (cpu_awsize ),
    .awburst            (cpu_awburst),
    .awlock             (cpu_awlock ),
    .awcache            (cpu_awcache),
    .awprot             (cpu_awprot ),
    .awvalid            (cpu_awvalid),
    .awready            (cpu_awready),
    // AXI Write Data
    .wid                (cpu_wid    ),//4
    .wdata              (cpu_wdata  ),
    .wstrb              (cpu_wstrb  ),
    .wlast              (cpu_wlast  ),
    .wvalid             (cpu_wvalid ),
    .wready             (cpu_wready ),
    // AXI Write Back
    .bid                (cpu_bid    ),
    .bresp              (cpu_bresp  ),
    .bvalid             (cpu_bvalid ),
    .bready             (cpu_bready ),

    // Debug Interfaces
    .break_point        (1'b0), // 暂不使用断点功能，保持为0
    .infor_flag         (1'b0 ),
    .reg_num            (5'b0    ),
    .ws_valid           (   ),
    .rf_rdata           (   ),
`ifdef HAS_LACC
    .lacc_tpu_start     (lacc_tpu_start),
    .lacc_tpu_start_pc  (lacc_tpu_start_pc),
    .lacc_tpu_cmd_valid (lacc_tpu_cmd_valid),
    .lacc_tpu_cmd_ready (lacc_tpu_cmd_ready),
    .lacc_tpu_cmd_op    (lacc_tpu_cmd_op),
    .lacc_tpu_cmd_payload(lacc_tpu_cmd_payload),
    .tpu_busy           (tpu_busy),
    .tpu_done           (tpu_done),
    .tpu_error          (tpu_error),
    .tpu_infer_result_data (tpu_infer_result_data),
    .tpu_infer_result_valid(tpu_infer_result_valid),
`endif

    // Trace Interfaces
    .debug0_wb_pc       (cpu_debug0_wb_pc      ),
    .debug0_wb_rf_wen   (cpu_debug0_wb_rf_wen  ),
    .debug0_wb_rf_wnum  (cpu_debug0_wb_rf_wnum ),
    .debug0_wb_rf_wdata (cpu_debug0_wb_rf_wdata),
    .debug0_wb_inst     (cpu_debug0_wb_inst    )
);

//==================================================
// 声明系统时钟域 (sys_clk) 的 AXI 接口信号
//==================================================
// AXI Read Request (SYS domain)
wire [ 3:0] sys_arid;
wire [31:0] sys_araddr;
wire [ 7:0] sys_arlen;
wire [ 2:0] sys_arsize;
wire [ 1:0] sys_arburst;
wire [ 0:0] sys_arlock;
wire [ 3:0] sys_arcache;
wire [ 2:0] sys_arprot;
wire        sys_arvalid;
wire        sys_arready;

// AXI Read Back (SYS domain)
wire [ 3:0] sys_rid;
wire [31:0] sys_rdata;
wire [ 1:0] sys_rresp;
wire        sys_rlast;
wire        sys_rvalid;
wire        sys_rready;

// AXI Write Request (SYS domain)
wire [ 3:0] sys_awid;
wire [31:0] sys_awaddr;
wire [ 7:0] sys_awlen;
wire [ 2:0] sys_awsize;
wire [ 1:0] sys_awburst;
wire [ 0:0] sys_awlock;
wire [ 3:0] sys_awcache;
wire [ 2:0] sys_awprot;
wire        sys_awvalid;
wire        sys_awready;

// AXI Write Data (SYS domain)
wire [ 3:0] sys_wid;
wire [31:0] sys_wdata;
wire [ 3:0] sys_wstrb;
wire        sys_wlast;
wire        sys_wvalid;
wire        sys_wready;

// AXI Write Back (SYS domain)
wire [ 3:0] sys_bid;
wire [ 1:0] sys_bresp;
wire        sys_bvalid;
wire        sys_bready;


//==================================================
// 实例化 AXI CDC (Clock Domain Crossing)
// 将 CPU 的 AXI 接口跨接到 SYS (系统外设) 的 AXI 接口
//==================================================
Axi_CDC u_Axi_CDC (
    .axiInClk       (cpu_clk    ),
    .axiInRst       (cpu_resetn ),
    .axiOutClk      (sys_clk    ),
    .axiOutRst      (sys_resetn ),

    // CPU Domain (In) <- AW Channel -> System Domain (Out)
    .axiIn_awvalid  (cpu_awvalid),
    .axiIn_awready  (cpu_awready),
    .axiIn_awaddr   (cpu_awaddr ),
    .axiIn_awid     (cpu_awid   ),
    .axiIn_awlen    (cpu_awlen  ),
    .axiIn_awsize   (cpu_awsize ),
    .axiIn_awburst  (cpu_awburst),
    .axiIn_awlock   (cpu_awlock[0]), // 截取低位以匹配位宽
    .axiIn_awcache  (cpu_awcache),
    .axiIn_awprot   (cpu_awprot ),
    .axiOut_awvalid (sys_awvalid),
    .axiOut_awready (sys_awready),
    .axiOut_awaddr  (sys_awaddr ),
    .axiOut_awid    (sys_awid   ),
    .axiOut_awlen   (sys_awlen  ),
    .axiOut_awsize  (sys_awsize ),
    .axiOut_awburst (sys_awburst),
    .axiOut_awlock  (sys_awlock ),
    .axiOut_awcache (sys_awcache),
    .axiOut_awprot  (sys_awprot ),

    // CPU Domain (In) <- W Channel -> System Domain (Out)
    .axiIn_wvalid   (cpu_wvalid ),
    .axiIn_wready   (cpu_wready ),
    .axiIn_wdata    (cpu_wdata  ),
    .axiIn_wstrb    (cpu_wstrb  ),
    .axiIn_wlast    (cpu_wlast  ),
    .axiOut_wvalid  (sys_wvalid ),
    .axiOut_wready  (sys_wready ),
    .axiOut_wdata   (sys_wdata  ),
    .axiOut_wstrb   (sys_wstrb  ),
    .axiOut_wlast   (sys_wlast  ),

    // CPU Domain (In) <- B Channel -> System Domain (Out)
    .axiOut_bvalid  (sys_bvalid ),
    .axiOut_bready  (sys_bready ),
    .axiOut_bid     (sys_bid    ),
    .axiOut_bresp   (sys_bresp  ),
    .axiIn_bvalid   (cpu_bvalid ),
    .axiIn_bready   (cpu_bready ),
    .axiIn_bid      (cpu_bid    ),
    .axiIn_bresp    (cpu_bresp  ),

    // CPU Domain (In) <- AR Channel -> System Domain (Out)
    .axiIn_arvalid  (cpu_arvalid),
    .axiIn_arready  (cpu_arready),
    .axiIn_araddr   (cpu_araddr ),
    .axiIn_arid     (cpu_arid   ),
    .axiIn_arlen    (cpu_arlen  ),
    .axiIn_arsize   (cpu_arsize ),
    .axiIn_arburst  (cpu_arburst),
    .axiIn_arlock   (cpu_arlock[0]), // 截取低位以匹配位宽
    .axiIn_arcache  (cpu_arcache),
    .axiIn_arprot   (cpu_arprot ),
    .axiOut_arvalid (sys_arvalid),
    .axiOut_arready (sys_arready),
    .axiOut_araddr  (sys_araddr ),
    .axiOut_arid    (sys_arid   ),
    .axiOut_arlen   (sys_arlen  ),
    .axiOut_arsize  (sys_arsize ),
    .axiOut_arburst (sys_arburst),
    .axiOut_arlock  (sys_arlock ),
    .axiOut_arcache (sys_arcache),
    .axiOut_arprot  (sys_arprot ),

    // CPU Domain (In) <- R Channel -> System Domain (Out)
    .axiOut_rvalid  (sys_rvalid ),
    .axiOut_rready  (sys_rready ),
    .axiOut_rdata   (sys_rdata  ),
    .axiOut_rid     (sys_rid    ),
    .axiOut_rresp   (sys_rresp  ),
    .axiOut_rlast   (sys_rlast  ),
    .axiIn_rvalid   (cpu_rvalid ),
    .axiIn_rready   (cpu_rready ),
    .axiIn_rdata    (cpu_rdata  ),
    .axiIn_rid      (cpu_rid    ),
    .axiIn_rresp    (cpu_rresp  ),
    .axiIn_rlast    (cpu_rlast  )
);

//==================================================
// 声明 AXI Crossbar 1x4 输出扩展接口 (Slave 0 ~ Slave 3)
// 注意: 经过 Crossbar 后，输出的 ID 位宽由 4 位增加到了 5 位
//==================================================
// --- S0 AXI Interface ---
wire [31:0] s0_axi_awaddr; wire [ 5:0] s0_axi_awid; wire [ 7:0] s0_axi_awlen; wire [ 2:0] s0_axi_awsize; wire [ 1:0] s0_axi_awburst; wire [ 0:0] s0_axi_awlock; wire [ 3:0] s0_axi_awcache; wire [ 2:0] s0_axi_awprot; wire s0_axi_awvalid; wire s0_axi_awready;
wire [31:0] s0_axi_wdata;  wire [ 3:0] s0_axi_wstrb; wire        s0_axi_wlast; wire        s0_axi_wvalid; wire        s0_axi_wready;
wire [ 5:0] s0_axi_bid;    wire [ 1:0] s0_axi_bresp; wire        s0_axi_bvalid; wire        s0_axi_bready;
wire [31:0] s0_axi_araddr; wire [ 5:0] s0_axi_arid; wire [ 7:0] s0_axi_arlen; wire [ 2:0] s0_axi_arsize; wire [ 1:0] s0_axi_arburst; wire [ 0:0] s0_axi_arlock; wire [ 3:0] s0_axi_arcache; wire [ 2:0] s0_axi_arprot; wire s0_axi_arvalid; wire s0_axi_arready;
wire [31:0] s0_axi_rdata;  wire [ 5:0] s0_axi_rid;  wire [ 1:0] s0_axi_rresp; wire        s0_axi_rlast;  wire        s0_axi_rvalid; wire        s0_axi_rready;

// --- S1 AXI Interface ---
wire [31:0] s1_axi_awaddr; wire [ 5:0] s1_axi_awid; wire [ 7:0] s1_axi_awlen; wire [ 2:0] s1_axi_awsize; wire [ 1:0] s1_axi_awburst; wire [ 0:0] s1_axi_awlock; wire [ 3:0] s1_axi_awcache; wire [ 2:0] s1_axi_awprot; wire s1_axi_awvalid; wire s1_axi_awready;
wire [31:0] s1_axi_wdata;  wire [ 3:0] s1_axi_wstrb; wire        s1_axi_wlast; wire        s1_axi_wvalid; wire        s1_axi_wready;
wire [ 5:0] s1_axi_bid;    wire [ 1:0] s1_axi_bresp; wire        s1_axi_bvalid; wire        s1_axi_bready;
wire [31:0] s1_axi_araddr; wire [ 5:0] s1_axi_arid; wire [ 7:0] s1_axi_arlen; wire [ 2:0] s1_axi_arsize; wire [ 1:0] s1_axi_arburst; wire [ 0:0] s1_axi_arlock; wire [ 3:0] s1_axi_arcache; wire [ 2:0] s1_axi_arprot; wire s1_axi_arvalid; wire s1_axi_arready;
wire [31:0] s1_axi_rdata;  wire [ 5:0] s1_axi_rid;  wire [ 1:0] s1_axi_rresp; wire        s1_axi_rlast;  wire        s1_axi_rvalid; wire        s1_axi_rready;

// --- S1 AXILite 中间转换信号 ---
wire [31:0] s1_axil_awaddr;
wire [ 2:0] s1_axil_awprot;
wire        s1_axil_awvalid;
wire        s1_axil_awready;
wire [31:0] s1_axil_wdata;
wire [ 3:0] s1_axil_wstrb;
wire        s1_axil_wvalid;
wire        s1_axil_wready;
wire [ 1:0] s1_axil_bresp;
wire        s1_axil_bvalid;
wire        s1_axil_bready;
wire [31:0] s1_axil_araddr;
wire [ 2:0] s1_axil_arprot;
wire        s1_axil_arvalid;
wire        s1_axil_arready;
wire [31:0] s1_axil_rdata;
wire [ 1:0] s1_axil_rresp;
wire        s1_axil_rvalid;
wire        s1_axil_rready;

// --- S2 AXI Interface ---
wire [31:0] s2_axi_awaddr; wire [ 5:0] s2_axi_awid; wire [ 7:0] s2_axi_awlen; wire [ 2:0] s2_axi_awsize; wire [ 1:0] s2_axi_awburst; wire [ 0:0] s2_axi_awlock; wire [ 3:0] s2_axi_awcache; wire [ 2:0] s2_axi_awprot; wire s2_axi_awvalid; wire s2_axi_awready;
wire [31:0] s2_axi_wdata;  wire [ 3:0] s2_axi_wstrb; wire        s2_axi_wlast; wire        s2_axi_wvalid; wire        s2_axi_wready;
wire [ 5:0] s2_axi_bid;    wire [ 1:0] s2_axi_bresp; wire        s2_axi_bvalid; wire        s2_axi_bready;
wire [31:0] s2_axi_araddr; wire [ 5:0] s2_axi_arid; wire [ 7:0] s2_axi_arlen; wire [ 2:0] s2_axi_arsize; wire [ 1:0] s2_axi_arburst; wire [ 0:0] s2_axi_arlock; wire [ 3:0] s2_axi_arcache; wire [ 2:0] s2_axi_arprot; wire s2_axi_arvalid; wire s2_axi_arready;
wire [31:0] s2_axi_rdata;  wire [ 5:0] s2_axi_rid;  wire [ 1:0] s2_axi_rresp; wire        s2_axi_rlast;  wire        s2_axi_rvalid; wire        s2_axi_rready;

// --- S2 AXILite 中间转换信号 ---
wire [31:0] s2_axil_awaddr;
wire [ 2:0] s2_axil_awprot;
wire        s2_axil_awvalid;
wire        s2_axil_awready;
wire [31:0] s2_axil_wdata;
wire [ 3:0] s2_axil_wstrb;
wire        s2_axil_wvalid;
wire        s2_axil_wready;
wire [ 1:0] s2_axil_bresp;
wire        s2_axil_bvalid;
wire        s2_axil_bready;
wire [31:0] s2_axil_araddr;
wire [ 2:0] s2_axil_arprot;
wire        s2_axil_arvalid;
wire        s2_axil_arready;
wire [31:0] s2_axil_rdata;
wire [ 1:0] s2_axil_rresp;
wire        s2_axil_rvalid;
wire        s2_axil_rready;

// --- S3 AXI Interface (连接至 DVI) ---
wire [31:0] s3_axi_awaddr; wire [ 5:0] s3_axi_awid; wire [ 7:0] s3_axi_awlen; wire [ 2:0] s3_axi_awsize; wire [ 1:0] s3_axi_awburst; wire [ 0:0] s3_axi_awlock; wire [ 3:0] s3_axi_awcache; wire [ 2:0] s3_axi_awprot; wire s3_axi_awvalid; wire s3_axi_awready;
wire [31:0] s3_axi_wdata;  wire [ 3:0] s3_axi_wstrb; wire        s3_axi_wlast; wire        s3_axi_wvalid; wire        s3_axi_wready;
wire [ 5:0] s3_axi_bid;    wire [ 1:0] s3_axi_bresp; wire        s3_axi_bvalid; wire        s3_axi_bready;
wire [31:0] s3_axi_araddr; wire [ 5:0] s3_axi_arid; wire [ 7:0] s3_axi_arlen; wire [ 2:0] s3_axi_arsize; wire [ 1:0] s3_axi_arburst; wire [ 0:0] s3_axi_arlock; wire [ 3:0] s3_axi_arcache; wire [ 2:0] s3_axi_arprot; wire s3_axi_arvalid; wire s3_axi_arready;
wire [31:0] s3_axi_rdata;  wire [ 5:0] s3_axi_rid;  wire [ 1:0] s3_axi_rresp; wire        s3_axi_rlast;  wire        s3_axi_rvalid; wire        s3_axi_rready;

// --- S4 AXI Interface (连接至 confreg) ---
wire [31:0] s4_axi_awaddr; wire [ 5:0] s4_axi_awid; wire [ 7:0] s4_axi_awlen; wire [ 2:0] s4_axi_awsize; wire [ 1:0] s4_axi_awburst; wire [ 0:0] s4_axi_awlock; wire [ 3:0] s4_axi_awcache; wire [ 2:0] s4_axi_awprot; wire s4_axi_awvalid; wire s4_axi_awready;
wire [31:0] s4_axi_wdata;  wire [ 3:0] s4_axi_wstrb; wire        s4_axi_wlast; wire        s4_axi_wvalid; wire        s4_axi_wready;
wire [ 5:0] s4_axi_bid;    wire [ 1:0] s4_axi_bresp; wire        s4_axi_bvalid; wire        s4_axi_bready;
wire [31:0] s4_axi_araddr; wire [ 5:0] s4_axi_arid; wire [ 7:0] s4_axi_arlen; wire [ 2:0] s4_axi_arsize; wire [ 1:0] s4_axi_arburst; wire [ 0:0] s4_axi_arlock; wire [ 3:0] s4_axi_arcache; wire [ 2:0] s4_axi_arprot; wire s4_axi_arvalid; wire s4_axi_arready;
wire [31:0] s4_axi_rdata;  wire [ 5:0] s4_axi_rid;  wire [ 1:0] s4_axi_rresp; wire        s4_axi_rlast;  wire        s4_axi_rvalid; wire        s4_axi_rready;

// --- S4 AXILite 中间转换信号 ---
wire [31:0] s4_axil_awaddr;
wire [ 2:0] s4_axil_awprot;
wire        s4_axil_awvalid;
wire        s4_axil_awready;
wire [31:0] s4_axil_wdata;
wire [ 3:0] s4_axil_wstrb;
wire        s4_axil_wvalid;
wire        s4_axil_wready;
wire [ 1:0] s4_axil_bresp;
wire        s4_axil_bvalid;
wire        s4_axil_bready;
wire [31:0] s4_axil_araddr;
wire [ 2:0] s4_axil_arprot;
wire        s4_axil_arvalid;
wire        s4_axil_arready;
wire [31:0] s4_axil_rdata;
wire [ 1:0] s4_axil_rresp;
wire        s4_axil_rvalid;
wire        s4_axil_rready;

// --- S5 AXI Interface (连接至 DMA Config) ---
wire [31:0] s5_axi_awaddr; wire [ 5:0] s5_axi_awid; wire [ 7:0] s5_axi_awlen; wire [ 2:0] s5_axi_awsize; wire [ 1:0] s5_axi_awburst; wire [ 0:0] s5_axi_awlock; wire [ 3:0] s5_axi_awcache; wire [ 2:0] s5_axi_awprot; wire s5_axi_awvalid; wire s5_axi_awready;
wire [31:0] s5_axi_wdata;  wire [ 3:0] s5_axi_wstrb; wire        s5_axi_wlast; wire        s5_axi_wvalid; wire        s5_axi_wready;
wire [ 5:0] s5_axi_bid;    wire [ 1:0] s5_axi_bresp; wire        s5_axi_bvalid; wire        s5_axi_bready;
wire [31:0] s5_axi_araddr; wire [ 5:0] s5_axi_arid; wire [ 7:0] s5_axi_arlen; wire [ 2:0] s5_axi_arsize; wire [ 1:0] s5_axi_arburst; wire [ 0:0] s5_axi_arlock; wire [ 3:0] s5_axi_arcache; wire [ 2:0] s5_axi_arprot; wire s5_axi_arvalid; wire s5_axi_arready;
wire [31:0] s5_axi_rdata;  wire [ 5:0] s5_axi_rid;  wire [ 1:0] s5_axi_rresp; wire        s5_axi_rlast;  wire        s5_axi_rvalid; wire        s5_axi_rready;

// --- S5 AXILite 中间转换信号 ---
wire [31:0] s5_axil_awaddr;
wire [ 2:0] s5_axil_awprot;
wire        s5_axil_awvalid;
wire        s5_axil_awready;
wire [31:0] s5_axil_wdata;
wire [ 3:0] s5_axil_wstrb;
wire        s5_axil_wvalid;
wire        s5_axil_wready;
wire [ 1:0] s5_axil_bresp;
wire        s5_axil_bvalid;
wire        s5_axil_bready;
wire [31:0] s5_axil_araddr;
wire [ 2:0] s5_axil_arprot;
wire        s5_axil_arvalid;
wire        s5_axil_arready;
wire [31:0] s5_axil_rdata;
wire [ 1:0] s5_axil_rresp;
wire        s5_axil_rvalid;
wire        s5_axil_rready;

// --- S6 AXI Interface (预留给扩展外设/FFT) ---
wire [31:0] s6_axi_awaddr; wire [ 5:0] s6_axi_awid; wire [ 7:0] s6_axi_awlen; wire [ 2:0] s6_axi_awsize; wire [ 1:0] s6_axi_awburst; wire [ 0:0] s6_axi_awlock; wire [ 3:0] s6_axi_awcache; wire [ 2:0] s6_axi_awprot; wire s6_axi_awvalid; wire s6_axi_awready;
wire [31:0] s6_axi_wdata;  wire [ 3:0] s6_axi_wstrb; wire        s6_axi_wlast; wire        s6_axi_wvalid; wire        s6_axi_wready;
wire [ 5:0] s6_axi_bid;    wire [ 1:0] s6_axi_bresp; wire        s6_axi_bvalid; wire        s6_axi_bready;
wire [31:0] s6_axi_araddr; wire [ 5:0] s6_axi_arid; wire [ 7:0] s6_axi_arlen; wire [ 2:0] s6_axi_arsize; wire [ 1:0] s6_axi_arburst; wire [ 0:0] s6_axi_arlock; wire [ 3:0] s6_axi_arcache; wire [ 2:0] s6_axi_arprot; wire s6_axi_arvalid; wire s6_axi_arready;
wire [31:0] s6_axi_rdata;  wire [ 5:0] s6_axi_rid;  wire [ 1:0] s6_axi_rresp; wire        s6_axi_rlast;  wire        s6_axi_rvalid; wire        s6_axi_rready;

// S6 当前未接实际从设备，固定返回避免悬空传播 X/Z
assign s6_axi_awready = 1'b1;
assign s6_axi_wready  = 1'b1;
assign s6_axi_bid     = 6'd0;
assign s6_axi_bresp   = 2'b0;
assign s6_axi_bvalid  = 1'b0;
assign s6_axi_arready = 1'b1;
assign s6_axi_rid     = 6'd0;
assign s6_axi_rdata   = 32'd0;
assign s6_axi_rresp   = 2'b0;
assign s6_axi_rlast   = 1'b0;
assign s6_axi_rvalid  = 1'b0;

// --- S7 AXI Interface (连接至 ISP Config) ---
wire [31:0] s7_axi_awaddr; wire [ 5:0] s7_axi_awid; wire [ 7:0] s7_axi_awlen; wire [ 2:0] s7_axi_awsize; wire [ 1:0] s7_axi_awburst; wire [ 0:0] s7_axi_awlock; wire [ 3:0] s7_axi_awcache; wire [ 2:0] s7_axi_awprot; wire s7_axi_awvalid; wire s7_axi_awready;
wire [31:0] s7_axi_wdata;  wire [ 3:0] s7_axi_wstrb; wire        s7_axi_wlast; wire        s7_axi_wvalid; wire        s7_axi_wready;
wire [ 5:0] s7_axi_bid;    wire [ 1:0] s7_axi_bresp; wire        s7_axi_bvalid; wire        s7_axi_bready;
wire [31:0] s7_axi_araddr; wire [ 5:0] s7_axi_arid; wire [ 7:0] s7_axi_arlen; wire [ 2:0] s7_axi_arsize; wire [ 1:0] s7_axi_arburst; wire [ 0:0] s7_axi_arlock; wire [ 3:0] s7_axi_arcache; wire [ 2:0] s7_axi_arprot; wire s7_axi_arvalid; wire s7_axi_arready;
wire [31:0] s7_axi_rdata;  wire [ 5:0] s7_axi_rid;  wire [ 1:0] s7_axi_rresp; wire        s7_axi_rlast;  wire        s7_axi_rvalid; wire        s7_axi_rready;

// --- S7 AXILite 中间转换信号 ---
wire [31:0] s7_axil_awaddr;
wire [ 2:0] s7_axil_awprot;
wire        s7_axil_awvalid;
wire        s7_axil_awready;
wire [31:0] s7_axil_wdata;
wire [ 3:0] s7_axil_wstrb;
wire        s7_axil_wvalid;
wire        s7_axil_wready;
wire [ 1:0] s7_axil_bresp;
wire        s7_axil_bvalid;
wire        s7_axil_bready;
wire [31:0] s7_axil_araddr;
wire [ 2:0] s7_axil_arprot;
wire        s7_axil_arvalid;
wire        s7_axil_arready;
wire [31:0] s7_axil_rdata;
wire [ 1:0] s7_axil_rresp;
wire        s7_axil_rvalid;
wire        s7_axil_rready;

// --- DMA AXI Master Interface (接往 AXI_top 主机1号口) ---
wire [31:0] dma_axi_awaddr; wire [ 3:0] dma_axi_awid; wire [ 7:0] dma_axi_awlen; wire [ 2:0] dma_axi_awsize; wire [ 1:0] dma_axi_awburst; wire [ 0:0] dma_axi_awlock; wire [ 3:0] dma_axi_awcache; wire [ 2:0] dma_axi_awprot; wire dma_axi_awvalid; wire dma_axi_awready;
wire [31:0] dma_axi_wdata;  wire [ 3:0] dma_axi_wstrb; wire        dma_axi_wlast; wire        dma_axi_wvalid; wire        dma_axi_wready;
wire [ 3:0] dma_axi_bid;    wire [ 1:0] dma_axi_bresp; wire        dma_axi_bvalid; wire        dma_axi_bready;
wire [31:0] dma_axi_araddr; wire [ 3:0] dma_axi_arid; wire [ 7:0] dma_axi_arlen; wire [ 2:0] dma_axi_arsize; wire [ 1:0] dma_axi_arburst; wire [ 0:0] dma_axi_arlock; wire [ 3:0] dma_axi_arcache; wire [ 2:0] dma_axi_arprot; wire dma_axi_arvalid; wire dma_axi_arready;
wire [31:0] dma_axi_rdata;  wire [ 3:0] dma_axi_rid;  wire [ 1:0] dma_axi_rresp; wire        dma_axi_rlast;  wire        dma_axi_rvalid; wire        dma_axi_rready;

// --- TPU AXI Master Interface (接往 AXI_top 主机2号口，只读 SRAM 中的 TPU 指令) ---
wire [31:0] tpu_axi_awaddr; wire [ 3:0] tpu_axi_awid; wire [ 7:0] tpu_axi_awlen; wire [ 2:0] tpu_axi_awsize; wire [ 1:0] tpu_axi_awburst; wire [ 0:0] tpu_axi_awlock; wire [ 3:0] tpu_axi_awcache; wire [ 2:0] tpu_axi_awprot; wire tpu_axi_awvalid; wire tpu_axi_awready;
wire [31:0] tpu_axi_wdata;  wire [ 3:0] tpu_axi_wstrb; wire        tpu_axi_wlast; wire        tpu_axi_wvalid; wire        tpu_axi_wready;
wire [ 3:0] tpu_axi_bid;    wire [ 1:0] tpu_axi_bresp; wire        tpu_axi_bvalid; wire        tpu_axi_bready;
wire [31:0] tpu_axi_araddr; wire [ 3:0] tpu_axi_arid; wire [ 7:0] tpu_axi_arlen; wire [ 2:0] tpu_axi_arsize; wire [ 1:0] tpu_axi_arburst; wire [ 0:0] tpu_axi_arlock; wire [ 3:0] tpu_axi_arcache; wire [ 2:0] tpu_axi_arprot; wire tpu_axi_arvalid; wire tpu_axi_arready;
wire [31:0] tpu_axi_rdata;  wire [ 3:0] tpu_axi_rid;  wire [ 1:0] tpu_axi_rresp; wire        tpu_axi_rlast;  wire        tpu_axi_rvalid; wire        tpu_axi_rready;
wire [31:0] tpu_sys_axi_awaddr; wire [ 3:0] tpu_sys_axi_awid; wire [ 7:0] tpu_sys_axi_awlen; wire [ 2:0] tpu_sys_axi_awsize; wire [ 1:0] tpu_sys_axi_awburst; wire [ 0:0] tpu_sys_axi_awlock; wire [ 3:0] tpu_sys_axi_awcache; wire [ 2:0] tpu_sys_axi_awprot; wire tpu_sys_axi_awvalid; wire tpu_sys_axi_awready;
wire [31:0] tpu_sys_axi_wdata;  wire [ 3:0] tpu_sys_axi_wstrb; wire        tpu_sys_axi_wlast; wire        tpu_sys_axi_wvalid; wire        tpu_sys_axi_wready;
wire [ 3:0] tpu_sys_axi_bid;    wire [ 1:0] tpu_sys_axi_bresp; wire        tpu_sys_axi_bvalid; wire        tpu_sys_axi_bready;
wire [31:0] tpu_sys_axi_araddr; wire [ 3:0] tpu_sys_axi_arid; wire [ 7:0] tpu_sys_axi_arlen; wire [ 2:0] tpu_sys_axi_arsize; wire [ 1:0] tpu_sys_axi_arburst; wire [ 0:0] tpu_sys_axi_arlock; wire [ 3:0] tpu_sys_axi_arcache; wire [ 2:0] tpu_sys_axi_arprot; wire tpu_sys_axi_arvalid; wire tpu_sys_axi_arready;
wire [31:0] tpu_sys_axi_rdata;  wire [ 3:0] tpu_sys_axi_rid;  wire [ 1:0] tpu_sys_axi_rresp; wire        tpu_sys_axi_rlast;  wire        tpu_sys_axi_rvalid; wire        tpu_sys_axi_rready;

wire        tpu_busy;
wire        tpu_done;
wire        tpu_error;
wire        tpu_busy_tpu;
wire        tpu_done_tpu;
wire        tpu_error_tpu;
wire [31:0] tpu_pc_current;
wire [31:0] tpu_last_ins;
wire [8*16-1:0] tpu_infer_result_data;
wire [7:0]      tpu_infer_result_valid;
wire [8*16-1:0] tpu_infer_result_data_tpu;
wire [7:0]      tpu_infer_result_valid_tpu;
wire            lacc_tpu_start;
wire [31:0]     lacc_tpu_start_pc;
wire            lacc_tpu_cmd_valid;
wire            lacc_tpu_cmd_ready;
wire [1:0]      lacc_tpu_cmd_op;
wire [31:0]     lacc_tpu_cmd_payload;
wire            tpu_start_final;
wire [31:0]     tpu_start_pc_final;
wire            tpu_lacc_cmd_fifo_full;
wire            tpu_lacc_cmd_fifo_empty;
wire            tpu_lacc_cmd_fifo_valid;
wire            tpu_lacc_cmd_fifo_wr_rst_busy;
wire            tpu_lacc_cmd_fifo_rd_rst_busy;
wire [135:0]    tpu_lacc_cmd_fifo_din;
wire [135:0]    tpu_lacc_cmd_fifo_dout;
wire [1:0]      tpu_lacc_cmd_op_tpu;
wire [31:0]     tpu_lacc_cmd_payload_tpu;
wire            tpu_lacc_cmd_is_start;
wire            tpu_lacc_cmd_is_ub_write;
wire            tpu_lacc_cmd_fifo_wr_en;
wire            tpu_lacc_cmd_fifo_rd_en;
wire            tpu_ub_host_wr_valid;
wire [15:0]     tpu_ub_host_wr_addr;
wire [15:0]     tpu_ub_host_wr_data;

wire            tpu_result_fifo_full;
wire            tpu_result_fifo_empty;
wire            tpu_result_fifo_valid;
wire            tpu_result_fifo_wr_rst_busy;
wire            tpu_result_fifo_rd_rst_busy;
wire [135:0]    tpu_result_fifo_dout;

reg [1:0]       tpu_busy_sync_cpu;
reg [1:0]       tpu_done_sync_cpu;
reg [1:0]       tpu_error_sync_cpu;

localparam [1:0] TPU_LACC_CMD_START    = 2'd1;
localparam [1:0] TPU_LACC_CMD_UB_WRITE = 2'd2;

assign lacc_tpu_cmd_ready =
    !tpu_lacc_cmd_fifo_full && !tpu_lacc_cmd_fifo_wr_rst_busy;
assign tpu_lacc_cmd_fifo_wr_en =
    lacc_tpu_cmd_valid && lacc_tpu_cmd_ready;
assign tpu_lacc_cmd_fifo_din =
    {lacc_tpu_cmd_op, 102'd0, lacc_tpu_cmd_payload};

assign tpu_lacc_cmd_op_tpu      = tpu_lacc_cmd_fifo_dout[135:134];
assign tpu_lacc_cmd_payload_tpu = tpu_lacc_cmd_fifo_dout[31:0];
assign tpu_lacc_cmd_is_start =
    tpu_lacc_cmd_fifo_valid && (tpu_lacc_cmd_op_tpu == TPU_LACC_CMD_START);
assign tpu_lacc_cmd_is_ub_write =
    tpu_lacc_cmd_fifo_valid && (tpu_lacc_cmd_op_tpu == TPU_LACC_CMD_UB_WRITE);
assign tpu_lacc_cmd_fifo_rd_en =
    tpu_lacc_cmd_fifo_valid &&
    !tpu_lacc_cmd_fifo_rd_rst_busy &&
    (!tpu_lacc_cmd_is_start || !tpu_busy_tpu);

assign tpu_start_final =
    tpu_lacc_cmd_fifo_rd_en && tpu_lacc_cmd_is_start;
assign tpu_start_pc_final = tpu_lacc_cmd_payload_tpu;
assign tpu_ub_host_wr_valid =
    tpu_lacc_cmd_fifo_rd_en && tpu_lacc_cmd_is_ub_write;
assign tpu_ub_host_wr_addr = tpu_lacc_cmd_payload_tpu[31:16];
assign tpu_ub_host_wr_data = tpu_lacc_cmd_payload_tpu[15:0];

wire tpu_result_fifo_wr_en =
    (tpu_infer_result_valid_tpu != 8'd0) &&
    !tpu_result_fifo_full &&
    !tpu_result_fifo_wr_rst_busy;
wire tpu_result_fifo_rd_en =
    tpu_result_fifo_valid && !tpu_result_fifo_rd_rst_busy;

always @(posedge cpu_clk or negedge cpu_resetn) begin
    if (!cpu_resetn) begin
        tpu_busy_sync_cpu  <= 2'b00;
        tpu_done_sync_cpu  <= 2'b00;
        tpu_error_sync_cpu <= 2'b00;
    end else begin
        tpu_busy_sync_cpu  <= {tpu_busy_sync_cpu[0],  tpu_busy_tpu};
        tpu_done_sync_cpu  <= {tpu_done_sync_cpu[0],  tpu_done_tpu};
        tpu_error_sync_cpu <= {tpu_error_sync_cpu[0], tpu_error_tpu};
    end
end

assign tpu_busy  = tpu_busy_sync_cpu[1];
assign tpu_done  = tpu_done_sync_cpu[1];
assign tpu_error = tpu_error_sync_cpu[1];

assign tpu_infer_result_valid =
    tpu_result_fifo_valid ? tpu_result_fifo_dout[135:128] : 8'd0;
assign tpu_infer_result_data =
    tpu_result_fifo_valid ? tpu_result_fifo_dout[127:0] : 128'd0;

tpu_lacc_cmd_async_fifo u_tpu_lacc_cmd_async_fifo (
    .rst         (~sys_resetn),
    .wr_clk      (cpu_clk),
    .rd_clk      (tpu_clk),
    .din         (tpu_lacc_cmd_fifo_din),
    .wr_en       (tpu_lacc_cmd_fifo_wr_en),
    .rd_en       (tpu_lacc_cmd_fifo_rd_en),
    .dout        (tpu_lacc_cmd_fifo_dout),
    .full        (tpu_lacc_cmd_fifo_full),
    .empty       (tpu_lacc_cmd_fifo_empty),
    .valid       (tpu_lacc_cmd_fifo_valid),
    .wr_rst_busy (tpu_lacc_cmd_fifo_wr_rst_busy),
    .rd_rst_busy (tpu_lacc_cmd_fifo_rd_rst_busy)
);

tpu_result_async_fifo u_tpu_result_async_fifo (
    .rst         (~sys_resetn),
    .wr_clk      (tpu_clk),
    .rd_clk      (cpu_clk),
    .din         ({tpu_infer_result_valid_tpu, tpu_infer_result_data_tpu}),
    .wr_en       (tpu_result_fifo_wr_en),
    .rd_en       (tpu_result_fifo_rd_en),
    .dout        (tpu_result_fifo_dout),
    .full        (tpu_result_fifo_full),
    .empty       (tpu_result_fifo_empty),
    .valid       (tpu_result_fifo_valid),
    .wr_rst_busy (tpu_result_fifo_wr_rst_busy),
    .rd_rst_busy (tpu_result_fifo_rd_rst_busy)
);

// TPU host AXI runs in the sys_clk domain, so it can enter the crossbar directly.
assign tpu_clk = sys_clk;
assign tpu_axi_awready = tpu_sys_axi_awready;
assign tpu_sys_axi_awvalid = tpu_axi_awvalid;
assign tpu_sys_axi_awaddr  = tpu_axi_awaddr;
assign tpu_sys_axi_awid    = tpu_axi_awid;
assign tpu_sys_axi_awlen   = tpu_axi_awlen;
assign tpu_sys_axi_awsize  = tpu_axi_awsize;
assign tpu_sys_axi_awburst = tpu_axi_awburst;
assign tpu_sys_axi_awlock  = tpu_axi_awlock;
assign tpu_sys_axi_awcache = tpu_axi_awcache;
assign tpu_sys_axi_awprot  = tpu_axi_awprot;

assign tpu_axi_wready = tpu_sys_axi_wready;
assign tpu_sys_axi_wvalid = tpu_axi_wvalid;
assign tpu_sys_axi_wdata  = tpu_axi_wdata;
assign tpu_sys_axi_wstrb  = tpu_axi_wstrb;
assign tpu_sys_axi_wlast  = tpu_axi_wlast;

assign tpu_axi_bvalid = tpu_sys_axi_bvalid;
assign tpu_axi_bresp  = tpu_sys_axi_bresp;
assign tpu_sys_axi_bready = tpu_axi_bready;

assign tpu_axi_arready = tpu_sys_axi_arready;
assign tpu_sys_axi_arvalid = tpu_axi_arvalid;
assign tpu_sys_axi_araddr  = tpu_axi_araddr;
assign tpu_sys_axi_arid    = tpu_axi_arid;
assign tpu_sys_axi_arlen   = tpu_axi_arlen;
assign tpu_sys_axi_arsize  = tpu_axi_arsize;
assign tpu_sys_axi_arburst = tpu_axi_arburst;
assign tpu_sys_axi_arlock  = tpu_axi_arlock;
assign tpu_sys_axi_arcache = tpu_axi_arcache;
assign tpu_sys_axi_arprot  = tpu_axi_arprot;

assign tpu_axi_rvalid = tpu_sys_axi_rvalid;
assign tpu_axi_rdata  = tpu_sys_axi_rdata;
assign tpu_axi_rresp  = tpu_sys_axi_rresp;
assign tpu_axi_rlast  = tpu_sys_axi_rlast;
assign tpu_sys_axi_rready = tpu_axi_rready;

//==================================================
// 实例化 AXI Crossbar 3x8
// 将 SYS、DMA、TPU 三个 AXI 主机分发至最多 8 个从设备。
// S_ID_WIDTH=4 且 S_COUNT=3 时，从设备侧 ID 位宽为 4+$clog2(3)=6。
//==================================================
wire [11:0] axi_top_s_bid;
wire [11:0] axi_top_s_rid;
assign sys_bid = axi_top_s_bid[3:0];
assign sys_rid = axi_top_s_rid[3:0];
assign dma_axi_bid = axi_top_s_bid[7:4];
assign dma_axi_rid = axi_top_s_rid[7:4];
assign tpu_axi_bid = axi_top_s_bid[11:8];
assign tpu_axi_rid = axi_top_s_rid[11:8];

AXI_top #(
    .S_COUNT(3),
    .M_COUNT(8),
    .DATA_WIDTH(32),
    .ADDR_WIDTH(32),
    .S_ID_WIDTH(4),
    .M_BASE_ADDR ({
        32'h1F500000,  // M7 isp
        32'h1F400000,  // M6 FFT
        32'h1F300000,  // M5 dma
        32'h1F200000,  // M4 confreg
        32'h1F100000,  // M3 DVI
        32'h1F000000,  // M2 uart
        32'h11000000,  // M1 new DVI
        32'h1C000000   // M0 sram
    }),
    .M_ADDR_WIDTH ({
        32'd20,  // M7 isp 1MB
        32'd20,  // M6 1MB
        32'd20,  // M5 1MB
        32'd20,  // M4 1MB
        32'd20,  // M3 1MB
        32'd20,  // M2 1MB
        32'd20,  // M1 new DVI 1MB
        32'd23   // M0 8MB
    })
) u_AXI_top (
    .clk           (sys_clk    ),
    .rst           (~sys_resetn),

    // ---------------------------------------------------------
    // AXI Input from CDC (sys_ domain), DMA, and TPU fetch master
    // ---------------------------------------------------------
    .s_axi_awid    ( {tpu_sys_axi_awid,    dma_axi_awid,    sys_awid} ),
    .s_axi_awaddr  ( {tpu_sys_axi_awaddr,  dma_axi_awaddr,  sys_awaddr}     ),
    .s_axi_awlen   ( {tpu_sys_axi_awlen,   dma_axi_awlen,   sys_awlen}      ),
    .s_axi_awsize  ( {tpu_sys_axi_awsize,  dma_axi_awsize,  sys_awsize}     ),
    .s_axi_awburst ( {tpu_sys_axi_awburst, dma_axi_awburst, sys_awburst}    ),
    .s_axi_awlock  ( {tpu_sys_axi_awlock,  dma_axi_awlock,  sys_awlock}     ),
    .s_axi_awcache ( {tpu_sys_axi_awcache, dma_axi_awcache, sys_awcache}    ),
    .s_axi_awprot  ( {tpu_sys_axi_awprot,  dma_axi_awprot,  sys_awprot}     ),
    .s_axi_awqos   ( {4'd0,            4'd0,            4'd0}           ),
    .s_axi_awuser  ( {1'b0,            1'b0,            1'b0}           ),
    .s_axi_awvalid ( {tpu_sys_axi_awvalid, dma_axi_awvalid, sys_awvalid}    ),
    .s_axi_awready ( {tpu_sys_axi_awready, dma_axi_awready, sys_awready}    ),
    
    .s_axi_wdata   ( {tpu_sys_axi_wdata,   dma_axi_wdata,   sys_wdata}      ),
    .s_axi_wstrb   ( {tpu_sys_axi_wstrb,   dma_axi_wstrb,   sys_wstrb}      ),
    .s_axi_wlast   ( {tpu_sys_axi_wlast,   dma_axi_wlast,   sys_wlast}      ),
    .s_axi_wuser   ( {1'b0,            1'b0,            1'b0}           ),
    .s_axi_wvalid  ( {tpu_sys_axi_wvalid,  dma_axi_wvalid,  sys_wvalid}     ),
    .s_axi_wready  ( {tpu_sys_axi_wready,  dma_axi_wready,  sys_wready}     ),
    
    .s_axi_bid     ( axi_top_s_bid                     ),
    .s_axi_bresp   ( {tpu_sys_axi_bresp,   dma_axi_bresp,   sys_bresp}      ),
    .s_axi_buser   (                                   ),
    .s_axi_bvalid  ( {tpu_sys_axi_bvalid,  dma_axi_bvalid,  sys_bvalid}     ),
    .s_axi_bready  ( {tpu_sys_axi_bready,  dma_axi_bready,  sys_bready}     ),
    
    .s_axi_arid    ( {tpu_sys_axi_arid,    dma_axi_arid,    sys_arid} ),
    .s_axi_araddr  ( {tpu_sys_axi_araddr,  dma_axi_araddr,  sys_araddr}     ),
    .s_axi_arlen   ( {tpu_sys_axi_arlen,   dma_axi_arlen,   sys_arlen}      ),
    .s_axi_arsize  ( {tpu_sys_axi_arsize,  dma_axi_arsize,  sys_arsize}     ),
    .s_axi_arburst ( {tpu_sys_axi_arburst, dma_axi_arburst, sys_arburst}    ),
    .s_axi_arlock  ( {tpu_sys_axi_arlock,  dma_axi_arlock,  sys_arlock}     ),
    .s_axi_arcache ( {tpu_sys_axi_arcache, dma_axi_arcache, sys_arcache}    ),
    .s_axi_arprot  ( {tpu_sys_axi_arprot,  dma_axi_arprot,  sys_arprot}     ),
    .s_axi_arqos   ( {4'd0,            4'd0,            4'd0}           ),
    .s_axi_aruser  ( {1'b0,            1'b0,            1'b0}           ),
    .s_axi_arvalid ( {tpu_sys_axi_arvalid, dma_axi_arvalid, sys_arvalid}    ),
    .s_axi_arready ( {tpu_sys_axi_arready, dma_axi_arready, sys_arready}    ),
    
    .s_axi_rid     ( axi_top_s_rid                     ),
    .s_axi_rdata   ( {tpu_sys_axi_rdata,   dma_axi_rdata,   sys_rdata}      ),
    .s_axi_rresp   ( {tpu_sys_axi_rresp,   dma_axi_rresp,   sys_rresp}      ),
    .s_axi_rlast   ( {tpu_sys_axi_rlast,   dma_axi_rlast,   sys_rlast}      ),
    .s_axi_ruser   (                                   ),
    .s_axi_rvalid  ( {tpu_sys_axi_rvalid,  dma_axi_rvalid,  sys_rvalid}     ),
    .s_axi_rready  ( {tpu_sys_axi_rready,  dma_axi_rready,  sys_rready}     ),

    // ---------------------------------------------------------
    // AXI Outputs (s0 ~ s7 interfaces)
    // ---------------------------------------------------------
    .m_axi_awid    ( {s7_axi_awid,  s6_axi_awid,s5_axi_awid,    s4_axi_awid,    s3_axi_awid,    s2_axi_awid,    s1_axi_awid,    s0_axi_awid}    ),
    .m_axi_awaddr  ( {s7_axi_awaddr,  s6_axi_awaddr,  s5_axi_awaddr,  s4_axi_awaddr,  s3_axi_awaddr,  s2_axi_awaddr,  s1_axi_awaddr,  s0_axi_awaddr}  ),
    .m_axi_awlen   ( {s7_axi_awlen,   s6_axi_awlen,   s5_axi_awlen,   s4_axi_awlen,   s3_axi_awlen,   s2_axi_awlen,   s1_axi_awlen,   s0_axi_awlen}   ),
    .m_axi_awsize  ( {s7_axi_awsize,  s6_axi_awsize,  s5_axi_awsize,  s4_axi_awsize,  s3_axi_awsize,  s2_axi_awsize,  s1_axi_awsize,  s0_axi_awsize}  ),
    .m_axi_awburst ( {s7_axi_awburst, s6_axi_awburst, s5_axi_awburst, s4_axi_awburst, s3_axi_awburst, s2_axi_awburst, s1_axi_awburst, s0_axi_awburst} ),
    .m_axi_awlock  ( {s7_axi_awlock,  s6_axi_awlock,  s5_axi_awlock,  s4_axi_awlock,  s3_axi_awlock,  s2_axi_awlock,  s1_axi_awlock,  s0_axi_awlock}  ),
    .m_axi_awcache ( {s7_axi_awcache, s6_axi_awcache, s5_axi_awcache, s4_axi_awcache, s3_axi_awcache, s2_axi_awcache, s1_axi_awcache, s0_axi_awcache} ),
    .m_axi_awprot  ( {s7_axi_awprot,  s6_axi_awprot,  s5_axi_awprot,  s4_axi_awprot,  s3_axi_awprot,  s2_axi_awprot,  s1_axi_awprot,  s0_axi_awprot}  ),
    .m_axi_awqos   ( ),
    .m_axi_awregion( ),
    .m_axi_awuser  ( ),
    .m_axi_awvalid ( {s7_axi_awvalid, s6_axi_awvalid, s5_axi_awvalid, s4_axi_awvalid, s3_axi_awvalid, s2_axi_awvalid, s1_axi_awvalid, s0_axi_awvalid} ),
    .m_axi_awready ( {s7_axi_awready, s6_axi_awready, s5_axi_awready, s4_axi_awready, s3_axi_awready, s2_axi_awready, s1_axi_awready, s0_axi_awready} ),
    
    .m_axi_wdata   ( {s7_axi_wdata,   s6_axi_wdata,   s5_axi_wdata,   s4_axi_wdata,   s3_axi_wdata,   s2_axi_wdata,   s1_axi_wdata,   s0_axi_wdata}   ),
    .m_axi_wstrb   ( {s7_axi_wstrb,   s6_axi_wstrb,   s5_axi_wstrb,   s4_axi_wstrb,   s3_axi_wstrb,   s2_axi_wstrb,   s1_axi_wstrb,   s0_axi_wstrb}   ),
    .m_axi_wlast   ( {s7_axi_wlast,   s6_axi_wlast,   s5_axi_wlast,   s4_axi_wlast,   s3_axi_wlast,   s2_axi_wlast,   s1_axi_wlast,   s0_axi_wlast}   ),
    .m_axi_wuser   ( ),
    .m_axi_wvalid  ( {s7_axi_wvalid,  s6_axi_wvalid,  s5_axi_wvalid,  s4_axi_wvalid,  s3_axi_wvalid,  s2_axi_wvalid,  s1_axi_wvalid,  s0_axi_wvalid}  ),
    .m_axi_wready  ( {s7_axi_wready,  s6_axi_wready,  s5_axi_wready,  s4_axi_wready,  s3_axi_wready,  s2_axi_wready,  s1_axi_wready,  s0_axi_wready}  ),
    
    .m_axi_bid     ( {s7_axi_bid,     s6_axi_bid,     s5_axi_bid,     s4_axi_bid,     s3_axi_bid,     s2_axi_bid,     s1_axi_bid,     s0_axi_bid}     ),
    .m_axi_bresp   ( {s7_axi_bresp,   s6_axi_bresp,   s5_axi_bresp,   s4_axi_bresp,   s3_axi_bresp,   s2_axi_bresp,   s1_axi_bresp,   s0_axi_bresp}   ),
    .m_axi_buser   ( 8'd0 ),
    .m_axi_bvalid  ( {s7_axi_bvalid,  s6_axi_bvalid,  s5_axi_bvalid,  s4_axi_bvalid,  s3_axi_bvalid,  s2_axi_bvalid,  s1_axi_bvalid,  s0_axi_bvalid}  ),
    .m_axi_bready  ( {s7_axi_bready,  s6_axi_bready,  s5_axi_bready,  s4_axi_bready,  s3_axi_bready,  s2_axi_bready,  s1_axi_bready,  s0_axi_bready}  ),
    
    .m_axi_arid    ( {s7_axi_arid,    s6_axi_arid,    s5_axi_arid,    s4_axi_arid,    s3_axi_arid,    s2_axi_arid,    s1_axi_arid,    s0_axi_arid}    ),
    .m_axi_araddr  ( {s7_axi_araddr,  s6_axi_araddr,  s5_axi_araddr,  s4_axi_araddr,  s3_axi_araddr,  s2_axi_araddr,  s1_axi_araddr,  s0_axi_araddr}  ),
    .m_axi_arlen   ( {s7_axi_arlen,   s6_axi_arlen,   s5_axi_arlen,   s4_axi_arlen,   s3_axi_arlen,   s2_axi_arlen,   s1_axi_arlen,   s0_axi_arlen}   ),
    .m_axi_arsize  ( {s7_axi_arsize,  s6_axi_arsize,  s5_axi_arsize,  s4_axi_arsize,  s3_axi_arsize,  s2_axi_arsize,  s1_axi_arsize,  s0_axi_arsize}  ),
    .m_axi_arburst ( {s7_axi_arburst, s6_axi_arburst, s5_axi_arburst, s4_axi_arburst, s3_axi_arburst, s2_axi_arburst, s1_axi_arburst, s0_axi_arburst} ),
    .m_axi_arlock  ( {s7_axi_arlock,  s6_axi_arlock,  s5_axi_arlock,  s4_axi_arlock,  s3_axi_arlock,  s2_axi_arlock,  s1_axi_arlock,  s0_axi_arlock}  ),

    .m_axi_arcache ( {s7_axi_arcache, s6_axi_arcache, s5_axi_arcache, s4_axi_arcache, s3_axi_arcache, s2_axi_arcache, s1_axi_arcache, s0_axi_arcache} ),
    .m_axi_arprot  ( {s7_axi_arprot,  s6_axi_arprot,  s5_axi_arprot,  s4_axi_arprot,  s3_axi_arprot,  s2_axi_arprot,  s1_axi_arprot,  s0_axi_arprot}  ),
    .m_axi_arqos   ( ),
    .m_axi_arregion( ),
    .m_axi_aruser  ( ),
    .m_axi_arvalid ( {s7_axi_arvalid, s6_axi_arvalid, s5_axi_arvalid, s4_axi_arvalid, s3_axi_arvalid, s2_axi_arvalid, s1_axi_arvalid, s0_axi_arvalid} ),
    .m_axi_arready ( {s7_axi_arready, s6_axi_arready, s5_axi_arready, s4_axi_arready, s3_axi_arready, s2_axi_arready, s1_axi_arready, s0_axi_arready} ),
    
    .m_axi_rid     ( {s7_axi_rid,     s6_axi_rid,     s5_axi_rid,     s4_axi_rid,     s3_axi_rid,     s2_axi_rid,     s1_axi_rid,     s0_axi_rid}     ),
    .m_axi_rdata   ( {s7_axi_rdata,   s6_axi_rdata,   s5_axi_rdata,   s4_axi_rdata,   s3_axi_rdata,   s2_axi_rdata,   s1_axi_rdata,   s0_axi_rdata}   ),
    .m_axi_rresp   ( {s7_axi_rresp,   s6_axi_rresp,   s5_axi_rresp,   s4_axi_rresp,   s3_axi_rresp,   s2_axi_rresp,   s1_axi_rresp,   s0_axi_rresp}   ),
    .m_axi_rlast   ( {s7_axi_rlast,   s6_axi_rlast,   s5_axi_rlast,   s4_axi_rlast,   s3_axi_rlast,   s2_axi_rlast,   s1_axi_rlast,   s0_axi_rlast}   ),
    .m_axi_ruser   ( 8'd0 ),

    .m_axi_rvalid  ( {s7_axi_rvalid,  s6_axi_rvalid,  s5_axi_rvalid,  s4_axi_rvalid,  s3_axi_rvalid,  s2_axi_rvalid,  s1_axi_rvalid,  s0_axi_rvalid}  ),
    .m_axi_rready  ( {s7_axi_rready,  s6_axi_rready,  s5_axi_rready,  s4_axi_rready,  s3_axi_rready,  s2_axi_rready,  s1_axi_rready,  s0_axi_rready}  )
);

//==================================================
// 实例化 AXI 包装器以连接外部物理 SRAM (BaseRAM & ExtRAM, 连接至 S0 端口)
//==================================================
wire s0_axi_awvalid_gated = s0_axi_awvalid & s0_axi_wvalid;
axi_wrap_ram_sp_ext u_axi_wrap_ram_sp_ext (
    .aclk           (sys_clk        ),
    .aresetn        (sys_resetn     ),

    // AXI AR Channel
    .axi_araddr     (s0_axi_araddr  ),
    .axi_arburst    (s0_axi_arburst ),
    .axi_arcache    (s0_axi_arcache ),
    .axi_arid       (s0_axi_arid    ),
    .axi_arlen      (s0_axi_arlen   ),
    .axi_arlock     ({1'b0, s0_axi_arlock}),
    .axi_arprot     (s0_axi_arprot  ),
    .axi_arready    (s0_axi_arready ),
    .axi_arsize     (s0_axi_arsize  ),
    .axi_arvalid    (s0_axi_arvalid ),

    // AXI AW Channel
    .axi_awaddr     (s0_axi_awaddr  ),
    .axi_awburst    (s0_axi_awburst ),
    .axi_awcache    (s0_axi_awcache ),
    .axi_awid       (s0_axi_awid    ),
    .axi_awlen      (s0_axi_awlen   ),
    .axi_awlock     ({1'b0, s0_axi_awlock}),
    .axi_awprot     (s0_axi_awprot  ),
    .axi_awready    (s0_axi_awready ),
    .axi_awsize     (s0_axi_awsize  ),
    .axi_awvalid    (s0_axi_awvalid_gated ),

    // AXI B Channel
    .axi_bid        (s0_axi_bid     ),
    .axi_bready     (s0_axi_bready  ),
    .axi_bresp      (s0_axi_bresp   ),
    .axi_bvalid     (s0_axi_bvalid  ),

    // AXI R Channel
    .axi_rdata      (s0_axi_rdata   ),
    .axi_rid        (s0_axi_rid     ),
    .axi_rlast      (s0_axi_rlast   ),
    .axi_rready     (s0_axi_rready  ),
    .axi_rresp      (s0_axi_rresp   ),
    .axi_rvalid     (s0_axi_rvalid  ),

    // AXI W Channel
    .axi_wdata      (s0_axi_wdata   ),
    .axi_wlast      (s0_axi_wlast   ),
    .axi_wready     (s0_axi_wready  ),
    .axi_wstrb      (s0_axi_wstrb   ),
    .axi_wvalid     (s0_axi_wvalid  ),

    // BaseRAM Interfaces
    .base_ram_data  (base_ram_data  ),
    .base_ram_addr  (base_ram_addr  ),
    .base_ram_be_n  (base_ram_be_n  ),
    .base_ram_ce_n  (base_ram_ce_n  ),
    .base_ram_oe_n  (base_ram_oe_n  ),
    .base_ram_we_n  (base_ram_we_n  ),

    // ExtRAM Interfaces
    .ext_ram_data   (ext_ram_data   ),
    .ext_ram_addr   (ext_ram_addr   ),
    .ext_ram_be_n   (ext_ram_be_n   ),
    .ext_ram_ce_n   (ext_ram_ce_n   ),
    .ext_ram_oe_n   (ext_ram_oe_n   ),
    .ext_ram_we_n   (ext_ram_we_n   )
);

//==================================================
// 实例化 AXI UART 控制器 (连接至 S2 端口)
//==================================================
wire UART_CTS, UART_RTS;
wire UART_DTR, UART_DSR;
wire UART_RI, UART_DCD;

assign UART_CTS = 1'b0;
assign UART_DSR = 1'b0;
assign UART_DCD = 1'b0;
assign UART_RI = 1'b0;

wire uart0_txd_o ;
wire uart0_txd_i ;
wire uart0_txd_oe;
wire uart0_rxd_o ;
wire uart0_rxd_i ;
wire uart0_rxd_oe;
wire uart0_rts_o ;
wire uart0_cts_i ;
wire uart0_dsr_i ;
wire uart0_dcd_i ;
wire uart0_dtr_o ;
wire uart0_ri_i ;

assign UART_TX = uart0_txd_o;
//assign UART_RX = uart0_rxd_oe ? 1'bz : uart0_rxd_o ;
//assign UART_TX = uart0_txd_oe ? 1'bz : uart0_txd_o ;
assign UART_RTS = uart0_rts_o ;
assign UART_DTR = uart0_dtr_o ;
assign uart0_txd_i = UART_TX;
assign uart0_rxd_i = UART_RX;
assign uart0_cts_i = UART_CTS;
assign uart0_dcd_i = UART_DCD;
assign uart0_dsr_i = UART_DSR;
assign uart0_ri_i = UART_RI ;  

axi_uart_controller u_axi_uart_controller (
    .clk             (sys_clk         ),
    .rst_n           (sys_resetn      ),

    // AXI Slave Interface (Connect to S2)
    .axi_s_awid      (s2_axi_awid     ),
    .axi_s_awaddr    (s2_axi_awaddr   ),
    .axi_s_awlen     (s2_axi_awlen    ),
    .axi_s_awsize    (s2_axi_awsize   ),
    .axi_s_awburst   (s2_axi_awburst  ),
    .axi_s_awlock    ({1'b0, s2_axi_awlock}), // 锁宽扩展适配
    .axi_s_awcache   (s2_axi_awcache  ),
    .axi_s_awprot    (s2_axi_awprot   ),
    .axi_s_awvalid   (s2_axi_awvalid  ),
    .axi_s_awready   (s2_axi_awready  ),
    .axi_s_wid       (s2_axi_awid     ),      
    .axi_s_wdata     (s2_axi_wdata    ),
    .axi_s_wstrb     (s2_axi_wstrb    ),
    .axi_s_wlast     (s2_axi_wlast    ),
    .axi_s_wvalid    (s2_axi_wvalid   ),
    .axi_s_wready    (s2_axi_wready   ),
    .axi_s_bid       (s2_axi_bid      ),
    .axi_s_bresp     (s2_axi_bresp    ),
    .axi_s_bvalid    (s2_axi_bvalid   ),
    .axi_s_bready    (s2_axi_bready   ),
    .axi_s_arid      (s2_axi_arid     ),
    .axi_s_araddr    (s2_axi_araddr   ),
    .axi_s_arlen     (s2_axi_arlen    ),
    .axi_s_arsize    (s2_axi_arsize   ),
    .axi_s_arburst   (s2_axi_arburst  ),
    .axi_s_arlock    ({1'b0, s2_axi_arlock}), // 锁宽扩展适配
    .axi_s_arcache   (s2_axi_arcache  ),
    .axi_s_arprot    (s2_axi_arprot   ),
    .axi_s_arvalid   (s2_axi_arvalid  ),
    .axi_s_arready   (s2_axi_arready  ),
    .axi_s_rid       (s2_axi_rid      ),
    .axi_s_rdata     (s2_axi_rdata    ),
    .axi_s_rresp     (s2_axi_rresp    ),
    .axi_s_rlast     (s2_axi_rlast    ),
    .axi_s_rvalid    (s2_axi_rvalid   ),
    .axi_s_rready    (s2_axi_rready   ),

    // DMA APB Interface 
    .apb_rw_dma      (1'b0            ),  .apb_psel_dma    (1'b0            ),
    .apb_enab_dma    (1'b0            ),  .apb_addr_dma    (20'd0           ),
    .apb_valid_dma   (1'b0            ),  .apb_wdata_dma   (32'd0           ),
    .apb_rdata_dma   (                ),  .apb_ready_dma   (                ),
    .dma_grant       (                ),  .dma_req_o       (                ),
    .dma_ack_i       (1'b0            ),

    // UART External IO Signals
    .uart0_txd_i (uart0_txd_i ),
    .uart0_txd_o (uart0_txd_o ),
    .uart0_txd_oe (uart0_txd_oe ),
    .uart0_rxd_i (uart0_rxd_i ),
    .uart0_rxd_o (uart0_rxd_o ),
    .uart0_rxd_oe (uart0_rxd_oe ),
    .uart0_rts_o (uart0_rts_o ),
    .uart0_dtr_o (uart0_dtr_o ),
    .uart0_cts_i (uart0_cts_i ),
    .uart0_dsr_i (uart0_dsr_i ),
    .uart0_dcd_i (uart0_dcd_i ),
    .uart0_ri_i (uart0_ri_i ),
    .uart0_int (uart0_int )
);

//==================================================
// 实例化 AXI DVI 控制器 (连接至 S3)
//==================================================
wire old_video_clk;
wire old_video_hsync;
wire old_video_vsync;
wire old_video_de;
wire [2:0] old_video_red;
wire [2:0] old_video_green;
wire [1:0] old_video_blue;

assign video_clk   = old_video_clk;
assign video_hsync = old_video_hsync;
assign video_vsync = old_video_vsync;
assign video_de    = old_video_de;
assign video_red   = old_video_red;
assign video_green = old_video_green;
assign video_blue  = old_video_blue;

axi_dvi u_axi_dvi (
    .s_awvalid      (s3_axi_awvalid  ),
    .s_awready      (s3_axi_awready  ),
    .s_awaddr       (s3_axi_awaddr   ),
    .s_awid         (s3_axi_awid     ),
    .s_awlen        (s3_axi_awlen    ),
    .s_awsize       (s3_axi_awsize   ),
    .s_awburst      (s3_axi_awburst  ),
    .s_awlock       (s3_axi_awlock   ),
    .s_awcache      (s3_axi_awcache  ),
    .s_awprot       (s3_axi_awprot   ),
    .s_wvalid       (s3_axi_wvalid   ),
    .s_wready       (s3_axi_wready   ),
    .s_wdata        (s3_axi_wdata    ),
    .s_wstrb        (s3_axi_wstrb    ),
    .s_wlast        (s3_axi_wlast    ),
    .s_bvalid       (s3_axi_bvalid   ),
    .s_bready       (s3_axi_bready   ),
    .s_bid          (s3_axi_bid      ),
    .s_bresp        (s3_axi_bresp    ),
    .s_arvalid      (s3_axi_arvalid  ),
    .s_arready      (s3_axi_arready  ),
    .s_araddr       (s3_axi_araddr   ),
    .s_arid         (s3_axi_arid     ),
    .s_arlen        (s3_axi_arlen    ),
    .s_arsize       (s3_axi_arsize   ),
    .s_arburst      (s3_axi_arburst  ),
    .s_arlock       (s3_axi_arlock   ),
    .s_arcache      (s3_axi_arcache  ),
    .s_arprot       (s3_axi_arprot   ),
    .s_rvalid       (s3_axi_rvalid   ),
    .s_rready       (s3_axi_rready   ),
    .s_rdata        (s3_axi_rdata    ),
    .s_rid          (s3_axi_rid      ),
    .s_rresp        (s3_axi_rresp    ),
    .s_rlast        (s3_axi_rlast    ),
    .video_clk      (old_video_clk   ),
    .hsync          (old_video_hsync ),
    .vsync          (old_video_vsync ),
    .data_enable    (old_video_de    ),
    .video_red      (old_video_red   ),
    .video_green    (old_video_green ),
    .video_blue     (old_video_blue  ),
    .aclk           (sys_clk         ),
    .aresetn        (sys_resetn      )
);

assign s1_axi_awready = 1'b1;
assign s1_axi_wready  = 1'b1;
assign s1_axi_bid     = s1_axi_awid;
assign s1_axi_bresp   = 2'b11;
assign s1_axi_bvalid  = s1_axi_awvalid && s1_axi_wvalid;
assign s1_axi_arready = 1'b1;
assign s1_axi_rid     = s1_axi_arid;
assign s1_axi_rdata   = 32'd0;
assign s1_axi_rresp   = 2'b11;
assign s1_axi_rlast   = 1'b1;
assign s1_axi_rvalid  = s1_axi_arvalid;

//==================================================
// 实例化 AXI to AXI-Lite 适配器 (连接至 S5 端口, 用于DMA配置)
//==================================================
axi_axil_adapter #(
    .ADDR_WIDTH      (32),
    .AXI_DATA_WIDTH  (32),
    .AXI_ID_WIDTH    (6),
    .AXIL_DATA_WIDTH (32)
) u_axi_axil_adapter_s7 (
    .clk             (sys_clk        ),
    .rst             (~sys_resetn    ),
    .s_axi_awid      (s5_axi_awid    ),
    .s_axi_awaddr    (s5_axi_awaddr  ),
    .s_axi_awlen     (s5_axi_awlen   ),
    .s_axi_awsize    (s5_axi_awsize  ),
    .s_axi_awburst   (s5_axi_awburst ),
    .s_axi_awlock    (s5_axi_awlock  ),
    .s_axi_awcache   (s5_axi_awcache ),
    .s_axi_awprot    (s5_axi_awprot  ),
    .s_axi_awvalid   (s5_axi_awvalid ),
    .s_axi_awready   (s5_axi_awready ),
    .s_axi_wdata     (s5_axi_wdata   ),
    .s_axi_wstrb     (s5_axi_wstrb   ),
    .s_axi_wlast     (s5_axi_wlast   ),
    .s_axi_wvalid    (s5_axi_wvalid  ),
    .s_axi_wready    (s5_axi_wready  ),
    .s_axi_bid       (s5_axi_bid     ),
    .s_axi_bresp     (s5_axi_bresp   ),
    .s_axi_bvalid    (s5_axi_bvalid  ),
    .s_axi_bready    (s5_axi_bready  ),
    .s_axi_arid      (s5_axi_arid    ),
    .s_axi_araddr    (s5_axi_araddr  ),
    .s_axi_arlen     (s5_axi_arlen   ),
    .s_axi_arsize    (s5_axi_arsize  ),
    .s_axi_arburst   (s5_axi_arburst ),
    .s_axi_arlock    (s5_axi_arlock  ),
    .s_axi_arcache   (s5_axi_arcache ),
    .s_axi_arprot    (s5_axi_arprot  ),
    .s_axi_arvalid   (s5_axi_arvalid ),
    .s_axi_arready   (s5_axi_arready ),
    .s_axi_rid       (s5_axi_rid     ),
    .s_axi_rdata     (s5_axi_rdata   ),
    .s_axi_rresp     (s5_axi_rresp   ),
    .s_axi_rlast     (s5_axi_rlast   ),
    .s_axi_rvalid    (s5_axi_rvalid  ),
    .s_axi_rready    (s5_axi_rready  ),
    .m_axil_awaddr   (s5_axil_awaddr ),
    .m_axil_awprot   (s5_axil_awprot ),
    .m_axil_awvalid  (s5_axil_awvalid),
    .m_axil_awready  (s5_axil_awready),
    .m_axil_wdata    (s5_axil_wdata  ),
    .m_axil_wstrb    (s5_axil_wstrb  ),
    .m_axil_wvalid   (s5_axil_wvalid ),
    .m_axil_wready   (s5_axil_wready ),
    .m_axil_bresp    (s5_axil_bresp  ),
    .m_axil_bvalid   (s5_axil_bvalid ),
    .m_axil_bready   (s5_axil_bready ),
    .m_axil_araddr   (s5_axil_araddr ),
    .m_axil_arprot   (s5_axil_arprot ),
    .m_axil_arvalid  (s5_axil_arvalid),
    .m_axil_arready  (s5_axil_arready),
    .m_axil_rdata    (s5_axil_rdata  ),
    .m_axil_rresp    (s5_axil_rresp  ),
    .m_axil_rvalid   (s5_axil_rvalid ),
    .m_axil_rready   (s5_axil_rready )
);

//==================================================
// 实例化 AXI to AXI-Lite 适配器 (连接至 S7 端口, 用于ISP配置)
//==================================================
axi_axil_adapter #(
    .ADDR_WIDTH      (32),
    .AXI_DATA_WIDTH  (32),
    .AXI_ID_WIDTH    (6),
    .AXIL_DATA_WIDTH (32)
) u_axi_axil_adapter_s5 (
    .clk             (sys_clk        ),
    .rst             (~sys_resetn    ),
    .s_axi_awid      (s7_axi_awid    ),
    .s_axi_awaddr    (s7_axi_awaddr  ),
    .s_axi_awlen     (s7_axi_awlen   ),
    .s_axi_awsize    (s7_axi_awsize  ),
    .s_axi_awburst   (s7_axi_awburst ),
    .s_axi_awlock    (s7_axi_awlock  ),
    .s_axi_awcache   (s7_axi_awcache ),
    .s_axi_awprot    (s7_axi_awprot  ),
    .s_axi_awvalid   (s7_axi_awvalid ),
    .s_axi_awready   (s7_axi_awready ),
    .s_axi_wdata     (s7_axi_wdata   ),
    .s_axi_wstrb     (s7_axi_wstrb   ),
    .s_axi_wlast     (s7_axi_wlast   ),
    .s_axi_wvalid    (s7_axi_wvalid  ),
    .s_axi_wready    (s7_axi_wready  ),
    .s_axi_bid       (s7_axi_bid     ),
    .s_axi_bresp     (s7_axi_bresp   ),
    .s_axi_bvalid    (s7_axi_bvalid  ),
    .s_axi_bready    (s7_axi_bready  ),
    .s_axi_arid      (s7_axi_arid    ),
    .s_axi_araddr    (s7_axi_araddr  ),
    .s_axi_arlen     (s7_axi_arlen   ),
    .s_axi_arsize    (s7_axi_arsize  ),
    .s_axi_arburst   (s7_axi_arburst ),
    .s_axi_arlock    (s7_axi_arlock  ),
    .s_axi_arcache   (s7_axi_arcache ),
    .s_axi_arprot    (s7_axi_arprot  ),
    .s_axi_arvalid   (s7_axi_arvalid ),
    .s_axi_arready   (s7_axi_arready ),
    .s_axi_rid       (s7_axi_rid     ),
    .s_axi_rdata     (s7_axi_rdata   ),
    .s_axi_rresp     (s7_axi_rresp   ),
    .s_axi_rlast     (s7_axi_rlast   ),
    .s_axi_rvalid    (s7_axi_rvalid  ),
    .s_axi_rready    (s7_axi_rready  ),
    .m_axil_awaddr   (s7_axil_awaddr ),
    .m_axil_awprot   (s7_axil_awprot ),
    .m_axil_awvalid  (s7_axil_awvalid),
    .m_axil_awready  (s7_axil_awready),
    .m_axil_wdata    (s7_axil_wdata  ),
    .m_axil_wstrb    (s7_axil_wstrb  ),
    .m_axil_wvalid   (s7_axil_wvalid ),
    .m_axil_wready   (s7_axil_wready ),
    .m_axil_bresp    (s7_axil_bresp  ),
    .m_axil_bvalid   (s7_axil_bvalid ),
    .m_axil_bready   (s7_axil_bready ),
    .m_axil_araddr   (s7_axil_araddr ),
    .m_axil_arprot   (s7_axil_arprot ),
    .m_axil_arvalid  (s7_axil_arvalid),
    .m_axil_arready  (s7_axil_arready),
    .m_axil_rdata    (s7_axil_rdata  ),
    .m_axil_rresp    (s7_axil_rresp  ),
    .m_axil_rvalid   (s7_axil_rvalid ),
    .m_axil_rready   (s7_axil_rready )
);

// S1 已改接新 DVI，Flash 外部引脚保持非选通状态。
assign flash_a      = 23'd0;
assign flash_d      = 16'hzzzz;
assign flash_rp_n   = 1'b1;
assign flash_vpen   = 1'b0;
assign flash_ce_n   = 1'b1;
assign flash_oe_n   = 1'b1;
assign flash_we_n   = 1'b1;
assign flash_byte_n = 1'b1;

//==================================================
// 实例化 Confreg (连接至 S4 端口)
//==================================================
confreg #(
    .ID_WIDTH       (6               ),
    .SIMULATION     (SIMULATION      )
) u_confreg (
    .aclk           (sys_clk         ),
    .aresetn        (sys_resetn      ),
    .cpu_clk        (cpu_clk         ),
    .cpu_resetn     (cpu_resetn      ),

    // AXI Slave Interface (Connect to S4)
    .s_awid         (s4_axi_awid     ),
    .s_awaddr       (s4_axi_awaddr   ),
    .s_awlen        (s4_axi_awlen    ),
    .s_awsize       (s4_axi_awsize   ),
    .s_awburst      (s4_axi_awburst  ),
    .s_awlock       (s4_axi_awlock      ), // 位宽对齐处理
    .s_awcache      (s4_axi_awcache  ),
    .s_awprot       (s4_axi_awprot   ),
    .s_awvalid      (s4_axi_awvalid  ),
    .s_awready      (s4_axi_awready  ),
    .s_wid          (s4_axi_awid     ), // AXI4 无 WID，沿用 AWID 保持 6bit 对齐
    .s_wdata        (s4_axi_wdata    ),
    .s_wstrb        (s4_axi_wstrb    ),
    .s_wlast        (s4_axi_wlast    ),
    .s_wvalid       (s4_axi_wvalid   ),
    .s_wready       (s4_axi_wready   ),
    .s_bid          (s4_axi_bid      ),
    .s_bresp        (s4_axi_bresp    ),
    .s_bvalid       (s4_axi_bvalid   ),
    .s_bready       (s4_axi_bready   ),
    .s_arid         (s4_axi_arid     ),
    .s_araddr       (s4_axi_araddr   ),
    .s_arlen        (s4_axi_arlen    ),
    .s_arsize       (s4_axi_arsize   ),
    .s_arburst      (s4_axi_arburst  ),
    .s_arlock       (s4_axi_arlock      ), // 位宽对齐处理
    .s_arcache      (s4_axi_arcache  ),
    .s_arprot       (s4_axi_arprot   ),
    .s_arvalid      (s4_axi_arvalid  ),
    .s_arready      (s4_axi_arready  ),
    .s_rid          (s4_axi_rid      ),
    .s_rdata        (s4_axi_rdata    ),
    .s_rresp        (s4_axi_rresp    ),
    .s_rlast        (s4_axi_rlast    ),
    .s_rvalid       (s4_axi_rvalid   ),
    .s_rready       (s4_axi_rready   ),

    // Board Peripherals 外部引脚接口
    .led            (leds            ),
    .dpy0           (dpy0            ),
    .dpy1           (dpy1            ),
    .switch         (dip_sw          ),
    .touch_btn      (touch_btn       ),
    .dma_finish     (confreg_dma_finish),
    .fft_finish     (confreg_fft_finish),
    .confreg_int    (confreg_int     )
);

//==================================================
// 实例化 AXI DMA 和 ISP Top
//==================================================
// 注意：axi_dma 和 isp_top 源文件目前不包含基于内存映射 AXI-Lite 的配置通道。
// 如果你需要使用 CPU 配置这俩模块的寄存器，建议后续编写 AXI-Lite Wrapper 并连接在刚才引出的 S4 和 S5 号口上。
// 当前顶层先直接打通 DMA 读写回环，让数据从 SRAM 搬运到 DVI，ISP 数据链路暂时旁路。

wire [31:0] axis_dma_read_tdata;
wire [ 3:0] axis_dma_read_tkeep;
wire        axis_dma_read_tvalid;
wire        axis_dma_read_tlast;
wire        axis_dma_read_tready;

wire [31:0] axis_dma_write_tdata;
wire [ 3:0] axis_dma_write_tkeep;
wire        axis_dma_write_tvalid;
wire        axis_dma_write_tlast;
wire [0:0]  axis_dma_write_tuser;
wire        axis_dma_write_tready;

// --- DMA 和 ISP 控制信号 (由配置模块驱动) ---
wire [31:0] dma_read_cmd_addr;
wire [19:0] dma_read_cmd_len;
wire        dma_read_cmd_valid;
wire        dma_read_cmd_ready;
wire [31:0] dma_write_cmd_addr;
wire [19:0] dma_write_cmd_len;
wire        dma_write_cmd_valid;
wire        dma_write_cmd_ready;
wire        dma_read_desc_status_valid;
wire        dma_write_desc_status_valid;
wire        isp_cpu_frame_start_pulse;
wire [8:0]  isp_cfg_selector;
wire [7:0]  isp_cfg_brightness_thresh;
wire [7:0]  isp_cfg_contrast_thresh;
wire [7:0]  isp_cfg_awb_r_thresh;
wire [7:0]  isp_cfg_awb_g_thresh;
wire [7:0]  isp_cfg_awb_b_thresh;
wire [15:0] isp_cfg_width;
wire [15:0] isp_cfg_height;

assign confreg_dma_finish = dma_read_desc_status_valid | dma_write_desc_status_valid;

assign axis_dma_read_tready = axis_dma_write_tready;
assign axis_dma_write_tdata  = axis_dma_read_tdata;
assign axis_dma_write_tkeep  = axis_dma_read_tkeep;
assign axis_dma_write_tvalid = axis_dma_read_tvalid;
assign axis_dma_write_tlast  = axis_dma_read_tlast;
assign axis_dma_write_tuser  = 1'b0;

// --- 例化 AXI DMA 引擎 ---
axi_dma #(
    .AXI_DATA_WIDTH(32),
    .AXI_ADDR_WIDTH(32),
    .AXI_ID_WIDTH(4),   // 匹配 AXI_top 的 S_ID_WIDTH=4
    .AXIS_DATA_WIDTH(32),
    // 1 beat = 32-bit = 4 pixels, 16-beat burst = 64 pixels
    .AXI_MAX_BURST_LEN(16)
) u_axi_dma (
    .clk           (sys_clk    ),
    .rst           (~sys_resetn),

    // DMA 读任务指令接口 (SRAM -> DVI)
    .s_axis_read_desc_addr  (dma_read_cmd_addr),
    .s_axis_read_desc_len   (dma_read_cmd_len),
    .s_axis_read_desc_tag   (8'd0),
    .s_axis_read_desc_id    (8'd0),
    .s_axis_read_desc_dest  (8'd0),
    .s_axis_read_desc_user  (1'b0),
    .s_axis_read_desc_valid (dma_read_cmd_valid),
    .s_axis_read_desc_ready (dma_read_cmd_ready),
    .m_axis_read_desc_status_tag   (),
    .m_axis_read_desc_status_error (),
    .m_axis_read_desc_status_valid (dma_read_desc_status_valid),

    // DMA 写任务指令接口 (DMA 读数据 -> DVI)
    .s_axis_write_desc_addr  (dma_write_cmd_addr),
    .s_axis_write_desc_len   (dma_write_cmd_len),
    .s_axis_write_desc_tag   (8'd0),
    .s_axis_write_desc_valid (dma_write_cmd_valid),
    .s_axis_write_desc_ready (dma_write_cmd_ready),
    .m_axis_write_desc_status_len  (),
    .m_axis_write_desc_status_tag  (),
    .m_axis_write_desc_status_id   (),
    .m_axis_write_desc_status_dest (),
    .m_axis_write_desc_status_user (),
    .m_axis_write_desc_status_error(),
    .m_axis_write_desc_status_valid(dma_write_desc_status_valid),

    // DMA 的内存读结果直接回送写通道，用于 SRAM -> DVI
    .m_axis_read_data_tdata  (axis_dma_read_tdata),
    .m_axis_read_data_tkeep  (axis_dma_read_tkeep),
    .m_axis_read_data_tvalid (axis_dma_read_tvalid),
    .m_axis_read_data_tready (axis_dma_read_tready),
    .m_axis_read_data_tlast  (axis_dma_read_tlast ),
    .m_axis_read_data_tid    (),
    .m_axis_read_data_tdest  (),
    .m_axis_read_data_tuser  (),

    // DMA 写通道直接接收 DMA 读通道的数据
    .s_axis_write_data_tdata  (axis_dma_write_tdata ),
    .s_axis_write_data_tkeep  (axis_dma_write_tkeep),
    .s_axis_write_data_tvalid (axis_dma_write_tvalid),
    .s_axis_write_data_tready (axis_dma_write_tready),
    .s_axis_write_data_tlast  (axis_dma_write_tlast ),
    .s_axis_write_data_tid    (8'd0),
    .s_axis_write_data_tdest  (8'd0),
    .s_axis_write_data_tuser  (axis_dma_write_tuser ),

    // AXI 主机接口 (连接 Crossbar S1)
    .m_axi_awid    (dma_axi_awid   ), .m_axi_awaddr  (dma_axi_awaddr ),
    .m_axi_awlen   (dma_axi_awlen  ), .m_axi_awsize  (dma_axi_awsize ),
    .m_axi_awburst (dma_axi_awburst), .m_axi_awlock  (dma_axi_awlock ),
    .m_axi_awcache (dma_axi_awcache), .m_axi_awprot  (dma_axi_awprot ),
    .m_axi_awvalid (dma_axi_awvalid), .m_axi_awready (dma_axi_awready),
    .m_axi_wdata   (dma_axi_wdata  ), .m_axi_wstrb   (dma_axi_wstrb  ),
    .m_axi_wlast   (dma_axi_wlast  ), .m_axi_wvalid  (dma_axi_wvalid ),
    .m_axi_wready  (dma_axi_wready ), .m_axi_bid     (dma_axi_bid    ),
    .m_axi_bresp   (dma_axi_bresp  ), .m_axi_bvalid  (dma_axi_bvalid ),
    .m_axi_bready  (dma_axi_bready ), .m_axi_arid    (dma_axi_arid   ),
    .m_axi_araddr  (dma_axi_araddr ), .m_axi_arlen   (dma_axi_arlen  ),
    .m_axi_arsize  (dma_axi_arsize ), .m_axi_arburst (dma_axi_arburst),
    .m_axi_arlock  (dma_axi_arlock ), .m_axi_arcache (dma_axi_arcache),
    .m_axi_arprot  (dma_axi_arprot ), .m_axi_arvalid (dma_axi_arvalid),
    .m_axi_arready (dma_axi_arready), .m_axi_rid     (dma_axi_rid    ),
    .m_axi_rdata   (dma_axi_rdata  ), .m_axi_rresp   (dma_axi_rresp  ),
    .m_axi_rlast   (dma_axi_rlast  ), .m_axi_rvalid  (dma_axi_rvalid ),
    .m_axi_rready  (dma_axi_rready ),

    // 全局使能位
    .read_enable   (1'b1),
    .write_enable  (1'b1),
    .write_abort   (1'b0)
);

// --- 例化 TPU 指令取指主机 ---
// TPU 指令需要提前放在 SRAM 的 TPU_INSN_START_PC 地址开始处。
// 上电后这里会自动打一拍启动脉冲，后续也保留 LACC 的显式启动入口。
tpu_axi_fetch_top #(
    .SYSTOLIC_ARRAY_WIDTH(8),
    .AXI_ID_WIDTH(4)
) u_tpu_axi_fetch_top (
    .clk                  (tpu_clk),
    .rst_n                (tpu_resetn),
    .start                (tpu_start_final),
    .start_pc             (tpu_start_pc_final),
    .busy                 (tpu_busy_tpu),
    .done                 (tpu_done_tpu),
    .error                (tpu_error_tpu),
    .pc_current           (tpu_pc_current),
    .last_ins             (tpu_last_ins),
    .ub_wr_ext_valid      (tpu_ub_host_wr_valid),
    .ub_wr_ext_addr       (tpu_ub_host_wr_addr),
    .ub_wr_ext_data       (tpu_ub_host_wr_data),

    .m_axi_awid           (tpu_axi_awid),
    .m_axi_awaddr         (tpu_axi_awaddr),
    .m_axi_awlen          (tpu_axi_awlen),
    .m_axi_awsize         (tpu_axi_awsize),
    .m_axi_awburst        (tpu_axi_awburst),
    .m_axi_awlock         (tpu_axi_awlock),
    .m_axi_awcache        (tpu_axi_awcache),
    .m_axi_awprot         (tpu_axi_awprot),
    .m_axi_awvalid        (tpu_axi_awvalid),
    .m_axi_awready        (tpu_axi_awready),
    .m_axi_wdata          (tpu_axi_wdata),
    .m_axi_wstrb          (tpu_axi_wstrb),
    .m_axi_wlast          (tpu_axi_wlast),
    .m_axi_wvalid         (tpu_axi_wvalid),
    .m_axi_wready         (tpu_axi_wready),
    .m_axi_bid            (tpu_axi_bid),
    .m_axi_bresp          (tpu_axi_bresp),
    .m_axi_bvalid         (tpu_axi_bvalid),
    .m_axi_bready         (tpu_axi_bready),

    .m_axi_arid           (tpu_axi_arid),
    .m_axi_araddr         (tpu_axi_araddr),
    .m_axi_arlen          (tpu_axi_arlen),
    .m_axi_arsize         (tpu_axi_arsize),
    .m_axi_arburst        (tpu_axi_arburst),
    .m_axi_arlock         (tpu_axi_arlock),
    .m_axi_arcache        (tpu_axi_arcache),
    .m_axi_arprot         (tpu_axi_arprot),
    .m_axi_arvalid        (tpu_axi_arvalid),
    .m_axi_arready        (tpu_axi_arready),
    .m_axi_rid            (tpu_axi_rid),
    .m_axi_rdata          (tpu_axi_rdata),
    .m_axi_rresp          (tpu_axi_rresp),
    .m_axi_rlast          (tpu_axi_rlast),
    .m_axi_rvalid         (tpu_axi_rvalid),
    .m_axi_rready         (tpu_axi_rready),

    .infer_result_data    (tpu_infer_result_data_tpu),
    .infer_result_valid   (tpu_infer_result_valid_tpu)
);

// --- 例化 ISP 图像处理算法模块 ---
isp_top #(
    .AXIS_DATA_WIDTH(32),
    .INPUT_FIFO_DEPTH(16385),
    .OUTPUT_FIFO_DEPTH(16385)
) u_isp_top (
    .clk                   (sys_clk    ),
    .rst_n                 (sys_resetn ),

    .width                 (isp_cfg_width ),
    .height                (isp_cfg_height),

    .cpu_frame_start_pulse (isp_cpu_frame_start_pulse),
    .isp_selector          (isp_cfg_selector),
    .brightness_thresh     (isp_cfg_brightness_thresh),
    .contrast_thresh       (isp_cfg_contrast_thresh),
    .awb_R_thresh          (isp_cfg_awb_r_thresh),
    .awb_G_thresh          (isp_cfg_awb_g_thresh),
    .awb_B_thresh          (isp_cfg_awb_b_thresh),
    .fifo_overflow         (),     

    // 当前顶层暂不走 ISP 数据链路，保留例化但将其旁路
    .s_axis_tdata          (32'd0),
    .s_axis_tvalid         (1'b0),
    .s_axis_tlast          (1'b0),
    .s_axis_tready         (),

    .m_axis_tdata          (),
    .m_axis_tvalid         (),
    .m_axis_tlast          (),
    .m_axis_tuser          (),
    .m_axis_tready         (1'b0)
);

//==================================================
// 实例化 DMA 和 ISP 的 AXI-Lite 配置模块 (占位)
//==================================================
/*
 * 模块 `dma_config_axil` (需要你来创建):
 * 这是一个 AXI-Lite 从设备，它有几个寄存器:
 * - 0x00: 读地址 (R/W)
 * - 0x04: 读长度 (R/W)
 * - 0x08: 写地址 (R/W)
 * - 0x0C: 写长度 (R/W)
 * - 0x10: 命令寄存器 (W): bit0=启动读, bit1=启动写
 * - 0x14: 状态寄存器 (R): bit0=读指令ready, bit1=写指令ready, bit2=DMA busy, bit3=DMA done(sticky)
 */
dma_config_axil u_dma_config_axil (
    .aclk           (sys_clk),
    .aresetn        (sys_resetn),
    // AXI-Lite Slave Interface (来自总线 S4)
    .s_axil_awaddr  (s5_axil_awaddr),
    .s_axil_awprot  (s5_axil_awprot),
    .s_axil_awvalid (s5_axil_awvalid),
    .s_axil_awready (s5_axil_awready),
    .s_axil_wdata   (s5_axil_wdata),
    .s_axil_wstrb   (s5_axil_wstrb),
    .s_axil_wvalid  (s5_axil_wvalid),
    .s_axil_wready  (s5_axil_wready),
    .s_axil_bresp   (s5_axil_bresp),
    .s_axil_bvalid  (s5_axil_bvalid),
    .s_axil_bready  (s5_axil_bready),
    .s_axil_araddr  (s5_axil_araddr),
    .s_axil_arprot  (s5_axil_arprot),
    .s_axil_arvalid (s5_axil_arvalid),
    .s_axil_arready (s5_axil_arready),
    .s_axil_rdata   (s5_axil_rdata),
    .s_axil_rresp   (s5_axil_rresp),
    .s_axil_rvalid  (s5_axil_rvalid),
    .s_axil_rready  (s5_axil_rready),
    // DMA Descriptor Command Interface (连接至 u_axi_dma)
    .read_cmd_addr  (dma_read_cmd_addr),
    .read_cmd_len   (dma_read_cmd_len),
    .read_cmd_valid (dma_read_cmd_valid),
    .read_cmd_ready (dma_read_cmd_ready),
    .write_cmd_addr (dma_write_cmd_addr),
    .write_cmd_len  (dma_write_cmd_len),
    .write_cmd_valid(dma_write_cmd_valid),
    .write_cmd_ready(dma_write_cmd_ready),
    .read_desc_status_valid (dma_read_desc_status_valid),
    .write_desc_status_valid(dma_write_desc_status_valid)
);

/*
 * 模块 `isp_config_axil` (需要你来创建):
 * 这是一个简单的 AXI-Lite 从设备，向其特定地址写入任意值
 * 就会产生一个 `frame_start_pulse` 脉冲。
 */

isp_config_axil u_isp_config_axil (
    .aclk               (sys_clk),
    .aresetn            (sys_resetn),

    // --- AXI-Lite 写地址通道 (AW) ---
    .s_axil_awaddr      (s7_axil_awaddr),
    .s_axil_awprot      (s7_axil_awprot),   // <--- 补充连接：写保护信号
    .s_axil_awvalid     (s7_axil_awvalid),
    .s_axil_awready     (s7_axil_awready),

    // --- AXI-Lite 写数据通道 (W) ---
    .s_axil_wdata       (s7_axil_wdata),    
    .s_axil_wstrb       (s7_axil_wstrb),    
    .s_axil_wvalid      (s7_axil_wvalid),
    .s_axil_wready      (s7_axil_wready),

    // --- AXI-Lite 写响应通道 (B) ---
    .s_axil_bresp       (s7_axil_bresp),    
    .s_axil_bvalid      (s7_axil_bvalid),
    .s_axil_bready      (s7_axil_bready),

    // --- AXI-Lite 读地址通道 (AR) ---
    .s_axil_araddr      (s7_axil_araddr),
    .s_axil_arprot      (s7_axil_arprot),   // <--- 补充连接：读保护信号
    .s_axil_arvalid     (s7_axil_arvalid),
    .s_axil_arready     (s7_axil_arready),

    // --- AXI-Lite 读响应通道 (R) ---
    .s_axil_rdata       (s7_axil_rdata),
    .s_axil_rresp       (s7_axil_rresp),
    .s_axil_rvalid      (s7_axil_rvalid),
    .s_axil_rready      (s7_axil_rready),

    // --- ISP 控制接口 ---
    .frame_start_pulse  (isp_cpu_frame_start_pulse),
    .isp_selector       (isp_cfg_selector),
    .brightness_thresh  (isp_cfg_brightness_thresh),
    .contrast_thresh    (isp_cfg_contrast_thresh),
    .awb_R_thresh       (isp_cfg_awb_r_thresh),
    .awb_G_thresh       (isp_cfg_awb_g_thresh),
    .awb_B_thresh       (isp_cfg_awb_b_thresh),
    .width              (isp_cfg_width ),
    .height             (isp_cfg_height)
);

endmodule
