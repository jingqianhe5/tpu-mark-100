`timescale 1ns / 1ps

module isp_top #(
    parameter AXIS_DATA_WIDTH = 32,
    parameter INPUT_FIFO_DEPTH = 16385,
    parameter OUTPUT_FIFO_DEPTH = 1024
)(
    input  wire                        clk,
    input  wire                        rst_n,

    input wire           [15:0]            width,  // 图像宽度 (从寄存器接口获取)
    input wire           [15:0]            height, // 图像高度 (从寄存器接口获取)

    // --- 外部控制与状态信号 ---
    // CPU 触发帧复位脉冲 (连接至你的总线寄存器)
    input  wire                        cpu_frame_start_pulse,
    input  wire [8:0]                  isp_selector,
    input  wire signed [7:0]           brightness_thresh,
    input  wire [7:0]                  contrast_thresh,
    input  wire [7:0]                  awb_R_thresh,
    input  wire [7:0]                  awb_G_thresh,
    input  wire [7:0]                  awb_B_thresh,
    // FIFO 溢出警告指示
    output wire                        fifo_overflow,

    // --- AXI-Stream Slave 接口 (接收来自 DMA 读通道的数据) ---
    // 对应 axi_dma.v 中的 m_axis_read_data_*
    input  wire [AXIS_DATA_WIDTH-1:0]  s_axis_tdata,
    input  wire                        s_axis_tvalid,
    input  wire                        s_axis_tlast,
    output wire                        s_axis_tready,

    // --- AXI-Stream Master 接口 (发送处理后的数据给 DMA 写通道) ---
    // 对应 axi_dma.v 中的 s_axis_write_data_*
    output wire [AXIS_DATA_WIDTH-1:0]  m_axis_tdata,
    output wire                        m_axis_tvalid,
    output wire                        m_axis_tlast,
    output wire [0:0]                  m_axis_tuser,   // 帧起始信号 SOF
    input  wire                        m_axis_tready
);

    // ==========================================
    // 内部连线：用于连接 AXI2Video 和 RBG888_to_gray
    // ==========================================
    wire        isp_vsync;
    wire        isp_href;
    wire        isp_de;
    wire [23:0] isp_data;

    // ==========================================
    // 内部连线：用于连接 RBG888_to_gray 和 Video2AXI
    // ==========================================
    wire        post_img_vsync ;
    wire        post_img_href  ;
    wire        post_img_de    ;
    wire [23:0] post_img_data  ;

    // ==========================================
    // 1. 例化 AXI 转视频时序模块 (AXI-Stream -> Video)
    // ==========================================
    AXI2Video #(
        .AXIS_DATA_WIDTH(AXIS_DATA_WIDTH),
        .FIFO_DEPTH(INPUT_FIFO_DEPTH)
    ) u_AXI2Video (
        .clk                   (clk),
        .rst_n                 (rst_n),
        .img_width             (width),  // 从寄存器接口获取
        .img_height            (height), // 从寄存器接口获取
        .cpu_frame_start_pulse (cpu_frame_start_pulse),
        .s_axis_tdata          (s_axis_tdata),
        .s_axis_tvalid         (s_axis_tvalid),
        .s_axis_tlast          (s_axis_tlast),
        .s_axis_tready         (s_axis_tready),
        .isp_vsync             (isp_vsync),
        .isp_href              (isp_href),
        .isp_de                (isp_de),
        .isp_data              (isp_data)
    );

    // ==========================================
    // 2. 例化 图像处理核心算法 (RGB888 -> Gray)
    // ==========================================
    wire [8:0] seletor_data = isp_selector;
    isp_core u_isp_core (
        .clk                   (clk),
        .rst_n                 (rst_n),

        .seletor_data           (seletor_data), // 这里暂时传入全0，后续可以连接到寄存器接口以动态控制算法参数
        .per_img_vsync         (isp_vsync),
        .per_img_href          (isp_href),
        .per_img_de            (isp_de),
        .per_img_data          (isp_data),
        .brightness_thresh      (brightness_thresh),
        .contrast_thresh        (contrast_thresh),
        .post_img_vsync        (post_img_vsync),
        .post_img_href         (post_img_href),
        .post_img_de           (post_img_de),
        .post_img_data         (post_img_data)
    );

    // ==========================================
    // 3. 例化 视频时序转 AXI 模块 (Video -> AXI-Stream)
    // ==========================================
    video_to_axis_bridge #(
        .AXIS_DATA_WIDTH(AXIS_DATA_WIDTH),
        .FIFO_DEPTH(OUTPUT_FIFO_DEPTH)
    ) u_video_to_axis_bridge (
        .clk                   (clk),
        .rst_n                 (rst_n),
        .post_img_vsync        (post_img_vsync),
        .post_img_href         (post_img_href),
        .post_img_de           (post_img_de),
        .post_img_data         (post_img_data),
        .m_axis_tdata          (m_axis_tdata),
        .m_axis_tvalid         (m_axis_tvalid),
        .m_axis_tlast          (m_axis_tlast),
        .m_axis_tuser          (m_axis_tuser),
        .m_axis_tready         (m_axis_tready),
        .fifo_overflow         (fifo_overflow)
    );

endmodule
