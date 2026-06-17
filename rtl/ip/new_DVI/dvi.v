`timescale 1ns / 1ps
`define DVI                 16'h0000 //1100_0000

module dvi #(
    parameter   ID_WIDTH = 6,
    parameter [18:0] PIC_SIZE= 19'd61440   //图片像素个数
)
(
    input           aclk,
    input           aresetn,

    input           cpu_clk,
    input           cpu_resetn,

    input  [ID_WIDTH-1:0] s_awid,
    input  [31:0]   s_awaddr,
    input  [7 :0]   s_awlen,
    input  [2 :0]   s_awsize,
    input  [1 :0]   s_awburst,
    input           s_awlock,
    input  [3 :0]   s_awcache,
    input  [2 :0]   s_awprot,
    input           s_awvalid,
    output          s_awready,
    input  [ID_WIDTH-1:0] s_wid,
    input  [31:0]   s_wdata,
    input  [3 :0]   s_wstrb,
    input           s_wlast,
    input           s_wvalid,
    output          s_wready,
    output [ID_WIDTH-1:0] s_bid,
    output [1 :0]   s_bresp,
    output          s_bvalid,
    input           s_bready,
    input  [ID_WIDTH-1:0] s_arid,
    input  [31:0]   s_araddr,
    input  [7 :0]   s_arlen,
    input  [2 :0]   s_arsize,
    input  [1 :0]   s_arburst,
    input           s_arlock,
    input  [3 :0]   s_arcache,
    input  [2 :0]   s_arprot,
    input           s_arvalid,
    output          s_arready,
    output [ID_WIDTH-1:0] s_rid,
    output [31:0]   s_rdata,
    output [1 :0]   s_rresp,
    output          s_rlast,
    output          s_rvalid,
    input           s_rready,

    output          video_clk,           // Video clock signal                              
    output          video_hsync,               // Horizontal sync signal                   
    output          video_vsync,               // Vertical sync signal                     
    output          video_de,         // Data enable signal                                
    output    [2:0] video_red,      // Red color signal (3 bits)                     
    output    [2:0] video_green,    // Green color signal (3 bits)                   
    output    [1:0] video_blue,     // Blue color signal (2 bits)

    output          dvi_enable
 
);

reg busy,write,R_or_W;

localparam [31:0] DVI_MEM_BASE  = 32'h11000000;
localparam [31:0] DVI_MEM_LIMIT = DVI_MEM_BASE + {13'd0, PIC_SIZE};
localparam [31:0] DVI_CTRL_ADDR = 32'h110ffffc;

reg dvi_enable_reg;
assign dvi_enable = dvi_enable_reg;

reg current_s_wready; 
assign s_wready = current_s_wready; // AXI WREADY信号

reg s_bvalid_t;
reg [ID_WIDTH-1:0] s_bid_t;  
reg [1:0] s_bresp_t;

assign s_bvalid=s_bvalid_t;
assign s_bid=s_bid_t;
assign s_bresp=s_bresp_t;
assign s_rid=buf_id;
assign s_rresp=2'b0;


wire ar_enter = s_arvalid & s_arready;
wire r_retire = s_rvalid & s_rready & s_rlast;
wire aw_enter = s_awvalid & s_awready;
wire w_enter  = s_wvalid; // s_wlast 判断在FSM中处理
wire b_retire = s_bvalid_t & s_bready;

assign s_arready = ~busy & (!R_or_W| !s_awvalid);
assign s_awready = ~busy & ( R_or_W| !s_arvalid);

always@(posedge aclk)
    if(~aresetn) busy <= 1'b0;
    else if(ar_enter|aw_enter) busy <= 1'b1;
    else if(r_retire|b_retire) busy <= 1'b0;


reg [ID_WIDTH-1:0] buf_id;
reg [31:0] buf_addr;
reg [7 :0] buf_len;
reg [2 :0] buf_size;
reg [1 :0] buf_burst;
reg        buf_lock;
reg [3 :0] buf_cache;
reg [2 :0] buf_prot;

always@(posedge aclk)
    if(~aresetn) begin
        R_or_W      <= 1'b0;
        buf_id      <= 'b0;
        buf_addr    <= 'b0;
        buf_len     <= 'b0;
        buf_size    <= 'b0;
        buf_burst   <= 'b0;
        buf_lock    <= 'b0;
        buf_cache   <= 'b0;
        buf_prot    <= 'b0;
    end
    else
    if(ar_enter | aw_enter) begin
        R_or_W      <= ar_enter;
        buf_id      <= ar_enter ? s_arid   : s_awid   ;
        buf_addr    <= ar_enter ? s_araddr : s_awaddr ;
        buf_len     <= ar_enter ? s_arlen  : s_awlen  ;
        buf_size    <= ar_enter ? s_arsize : s_awsize ;
        buf_burst   <= ar_enter ? s_arburst: s_awburst;
        buf_lock    <= ar_enter ? s_arlock : s_awlock ;
        buf_cache   <= ar_enter ? s_arcache: s_awcache;
        buf_prot    <= ar_enter ? s_arprot : s_awprot ;
    end

always@(posedge aclk)
    if(~aresetn) write <= 1'b0;
    else if(aw_enter) write <= 1'b1;
    else if(ar_enter)  write <= 1'b0;


reg [31:0] s_rdata_reg; // 用于驱动 s_rdata 输出
reg s_rvalid_reg,s_rlast_reg;
assign s_rdata = s_rdata_reg;
assign s_rvalid = s_rvalid_reg;
assign s_rlast = s_rlast_reg;
 
// ** 新增FSM状态，用于处理32位数据的拆分和多次8位写入 **
reg [2:0] write_fsm_state;
localparam S_IDLE     = 3'd0; // 空闲态，等待AXI写入
localparam S_CAP_AXI  = 3'd1; // 捕获AXI数据 (AWVALID 和 WVALID 同时有效)
localparam S_WR_BYTE0 = 3'd2; // 写入第一个字节 (LSB)
localparam S_WR_BYTE1 = 3'd3; // 写入第二个字节
localparam S_WR_BYTE2 = 3'd4; // 写入第三个字节
localparam S_WR_BYTE3 = 3'd5; // 写入第四个字节 (MSB)
localparam S_RESP_B   = 3'd6; // 完成内部写入，准备AXI BVALID响应
 
// 内部寄存器，用于保存捕获到的AXI写事务详情
reg [31:0] captured_wdata;  // 捕获32位写入数据
reg [31:0] captured_awaddr; // 捕获AXI写入的基地址
reg [ID_WIDTH-1:0]  captured_awid;   // 捕获AXI ID，用于BRESP
reg [3:0] captured_wstrb;   // 捕获AXI字节写使能
 
// 输出给 DVI_Controller 的信号
reg  dvi_write_en_o;    // Active high, pulsed for one cycle per byte write
reg [31:0] dvi_write_addr_o; // 每次写入的字节地址
reg [7:0]  dvi_write_data_o; // 每次写入的8位数据
 
always @(posedge aclk) begin
    if (~aresetn) begin
        write_fsm_state <= S_IDLE;
        current_s_wready <= 1'b0;
        s_bvalid_t <= 1'b0; 
        captured_wdata <= 32'b0;
        captured_awaddr <= 32'b0;
        captured_awid <= {ID_WIDTH{1'b0}};
        captured_wstrb <= 4'b0;
        s_bid_t <= {ID_WIDTH{1'b0}};
        s_bresp_t <= 2'b00;
        dvi_enable_reg <= 1'b0;
 
        dvi_write_en_o <= 1'b0;
        dvi_write_addr_o <= 32'b0;
        dvi_write_data_o <= 8'b0;
 
        s_rdata_reg  <= 'b0;
        s_rvalid_reg <= 1'b0;
        s_rlast_reg  <= 1'b0;
 
    end else begin
        // 默认值，除非在某个状态中明确赋值为1
        dvi_write_en_o <= 1'b0;

        case (write_fsm_state)
            S_IDLE: begin
                current_s_wready <= 1'b0; // 默认不接收WDATA
 
                if (aw_enter) begin
                    captured_awaddr <= s_awaddr;
                    captured_awid   <= s_awid;
                    current_s_wready <= 1'b1;
                    write_fsm_state <= S_CAP_AXI;
                end else if (ar_enter) begin
                    s_rdata_reg  <= (s_araddr == DVI_CTRL_ADDR) ? {31'd0, dvi_enable_reg} : 32'd0;
                    s_rvalid_reg <= 1'b1;
                    s_rlast_reg  <= 1'b1;
                end
            end
            S_CAP_AXI: begin
                current_s_wready <= 1'b1;
                if (s_wvalid && s_wlast) begin
                    captured_wdata <= s_wdata;
                    captured_wstrb <= s_wstrb;
                    current_s_wready <= 1'b0;
                    if (captured_awaddr == DVI_CTRL_ADDR) begin
                        dvi_enable_reg <= s_wdata[0];
                        write_fsm_state <= S_RESP_B;
                    end else if ((captured_awaddr >= DVI_MEM_BASE) && (captured_awaddr < DVI_MEM_LIMIT) && dvi_enable_reg) begin
                        write_fsm_state <= S_WR_BYTE0;
                    end else begin
                        write_fsm_state <= S_RESP_B;
                    end
                end
            end
            S_WR_BYTE0: begin
                dvi_write_en_o   <= captured_wstrb[0];          // 激活DVI_Controller的写入使能
                dvi_write_addr_o <= captured_awaddr + 32'd0;    // 基地址
                dvi_write_data_o <= captured_wdata[7:0];        // LSB字节
                write_fsm_state  <= S_WR_BYTE1;                 // 进入下一个字节写入状态
                current_s_wready <= 1'b0;                       // 在内部处理期间，不再接收新的AXI数据
            end
            S_WR_BYTE1: begin
                dvi_write_en_o   <= captured_wstrb[1];
                dvi_write_addr_o <= captured_awaddr + 32'd1;     // 基地址 + 1
                dvi_write_data_o <= captured_wdata[15:8];
                write_fsm_state  <= S_WR_BYTE2;
            end
            S_WR_BYTE2: begin
                dvi_write_en_o   <= captured_wstrb[2];
                dvi_write_addr_o <= captured_awaddr + 32'd2;     // 基地址 + 2
                dvi_write_data_o <= captured_wdata[23:16];
                write_fsm_state  <= S_WR_BYTE3;
            end
            S_WR_BYTE3: begin
                dvi_write_en_o   <= captured_wstrb[3];
                dvi_write_addr_o <= captured_awaddr + 32'd3;     // 基地址 + 3
                dvi_write_data_o <= captured_wdata[31:24];       // MSB字节
                write_fsm_state  <= S_RESP_B;                    // 所有字节写入完成，准备响应AXI master
            end
            S_RESP_B: begin
                current_s_wready <= 1'b0; // 内部事务完成，不需要再接受WDATA
                s_bvalid_t <= 1'b1;         // 向上游AXI master发送响应
                s_bid_t   <= captured_awid;   // 返回捕获的ID
                s_bresp_t <= 2'b00;         // OKAY 响应
                if (s_bready) begin       // 如果AXI master接收了响应
                    s_bvalid_t <= 1'b0;
                    write_fsm_state <= S_IDLE; // 返回空闲状态
                end
            end
            default: write_fsm_state <= S_IDLE; // 非预期状态，复位到空闲
        endcase

        if (r_retire) begin
            s_rvalid_reg <= 1'b0;
            s_rlast_reg  <= 1'b0;
        end
    end
end
 
//---------------------------{dvi}begin------------------------//

DVI_Controller u_vga(
    .video_clk      (video_clk    ),
    .video_hsync    (video_hsync  ),
    .video_vsync    (video_vsync  ),
    .video_de       (video_de     ),
    .video_red      (video_red    ),
    .video_green    (video_green  ),
    .video_blue     (video_blue   ),
 
    .Control_write_en (dvi_enable_reg & dvi_write_en_o), // 新DVI使能后才写入帧缓存
    .Control_Address  (dvi_write_addr_o),   // 每次写入的字节地址
    .Control_Data     (dvi_write_data_o),   // 每次写入的8位数据
    .clk_50M          (aclk         ),          
    .reset_btn        (aresetn      )
);
//---------------------------{dvi}end------------------------//
endmodule
