`timescale 1ns / 1ps

module video_to_axis_bridge #(
    parameter AXIS_DATA_WIDTH = 32,
    parameter FIFO_DEPTH = 32'h1F8000 // 当前整帧 64x64x1word，至少要容下 4096 个 word
)(
    input  wire        clk,
    input  wire        rst_n,

    // --- 输入：连接 ISP 的输出 ---
    input  wire        post_img_vsync,
    input  wire        post_img_href,
    input  wire        post_img_de,
    input  wire [23:0] post_img_data,

    // --- 输出：连接 DMA 写通道 (AXI-Stream) ---
    output wire [AXIS_DATA_WIDTH-1:0] m_axis_tdata,
    output wire        m_axis_tvalid,
    output wire        m_axis_tlast,
    output wire [0:0]  m_axis_tuser,   
    input  wire        m_axis_tready,
    
    output wire        fifo_overflow   // 溢出警告
);

    // ==========================================
    // 第一部分：提取视频时序 (你的天才设计，保留！)
    // ==========================================
    reg [23:0] data_r;
    reg        de_r;
    reg        href_r;
    reg        vsync_r;
    reg        sof_armed; 
    
    wire [AXIS_DATA_WIDTH-1:0] gen_tdata;
    wire       gen_tvalid;
    wire       gen_tlast;
    wire       gen_tuser;

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            data_r    <= 24'd0;
            de_r      <= 1'b0;
            href_r    <= 1'b0;
            vsync_r   <= 1'b0;
            sof_armed <= 1'b0;
        end else begin
            data_r  <= post_img_data;
            de_r    <= post_img_de;
            href_r  <= post_img_href;
            vsync_r <= post_img_vsync;

            if (post_img_vsync && !vsync_r)
                sof_armed <= 1'b1;
            else if (post_img_href && !href_r && sof_armed)
                sof_armed <= 1'b0;
        end
    end

    assign gen_tdata  = {8'h00, data_r}; 
    assign gen_tvalid = de_r; 
    // 当前 DMA 写描述符对应的是整帧，因此 TLAST 只能在整帧最后一个像素拉高一次。
    assign gen_tlast  = de_r & href_r & vsync_r & (~post_img_href) & (~post_img_vsync);
    assign gen_tuser  = (post_img_href && !href_r && sof_armed) ? 1'b1 : 1'b0;

    // ==========================================
    // 第二部分：同步 FIFO 缓冲
    // ==========================================
    localparam PACKET_WIDTH = 1 + 1 + AXIS_DATA_WIDTH; // User(1) + Last(1) + Data(32) = 34
    wire [PACKET_WIDTH-1:0] fifo_dout;
    wire fifo_full;
    wire fifo_empty;
    wire [clogb2(FIFO_DEPTH-1):0] fifo_data_count;

    wire wr_en = gen_tvalid;
    wire rd_en = m_axis_tvalid && m_axis_tready;

    sync_fifo #(
        .C_FIFO_WIDTH(PACKET_WIDTH),
        .C_FIFO_DEPTH(FIFO_DEPTH)
    ) u_sync_fifo (
        .rst       (~rst_n),
        .clk       (clk),
        .wr_en     (wr_en),
        .din       ({gen_tuser, gen_tlast, gen_tdata}),
        .full      (fifo_full),
        .rd_en     (rd_en),
        .dout      (fifo_dout),
        .empty     (fifo_empty),
        .data_count(fifo_data_count)
    );

    // ==========================================
    // 第三部分：桥接 AXI-Stream
    // ==========================================
    assign m_axis_tvalid = !fifo_empty;
    assign {m_axis_tuser, m_axis_tlast, m_axis_tdata} = fifo_dout;

    // 溢出监控：FIFO 满时仍然有新像素进来，就把告警锁存住
    reg overflow_r;
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) overflow_r <= 1'b0;
        else if (gen_tvalid && fifo_full) overflow_r <= 1'b1; 
    end
    assign fifo_overflow = overflow_r;

    function integer clogb2;
        input integer depth;
        begin
            for (clogb2 = 0; depth > 0; clogb2 = clogb2 + 1)
                depth = depth >> 1;
        end
    endfunction

endmodule
