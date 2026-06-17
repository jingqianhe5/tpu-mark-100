`timescale 1ns / 1ps

module AXI2Video #(
    // 你需要根据你的 DMA 参数设置这里的位宽
    parameter AXIS_DATA_WIDTH = 32,
    parameter FIFO_DEPTH = 16385
)(
    input  wire        clk,
    input  wire        rst_n,

    input  [15:0]      img_width,//输入图像宽度 (从寄存器接口获取)
    input  [15:0]      img_height,//输入图像高度 (从寄存器接口获取)
    // --- 输入：CPU 触发帧复位 (需要龙芯 CPU 通过寄存器产生一个脉冲) ---
    input  wire        cpu_frame_start_pulse, 

    // --- 输入：连接 DMA 的读通道 (m_axis_read_data_*) ---
    input  wire [AXIS_DATA_WIDTH-1:0] s_axis_tdata,
    input  wire        s_axis_tvalid,
    input  wire        s_axis_tlast, // 这个信号在简易版里暂时不用
    output wire        s_axis_tready, // 反压信号，DMA只有等到ready为高才继续发

    // --- 输出：连接你 ISP 的输入 (per_img_*) ---
    output reg        isp_vsync,
    output reg        isp_href,
    output reg        isp_de,
    output reg [23:0] isp_data
);

    reg        frame_request_r;
    reg        frame_buffer_ready_r;
    reg        frame_active_r;
    reg        line_gap_r;
    reg [15:0] pixel_cnt_r;
    reg [15:0] line_cnt_r;

    wire [23:0] fifo_dout;
    wire        fifo_full;
    wire        fifo_empty;
    wire [clogb2(FIFO_DEPTH-1):0] fifo_data_count;

    wire fifo_wr_en = s_axis_tvalid & s_axis_tready;
    wire fifo_rd_en;

    assign s_axis_tready = ~fifo_full;

    sync_fifo #(
        .C_FIFO_WIDTH(24),
        .C_FIFO_DEPTH(FIFO_DEPTH)
    ) u_frame_fifo (
        .rst       (~rst_n),
        .clk       (clk),
        .wr_en     (fifo_wr_en),
        .din       (s_axis_tdata[23:0]),
        .full      (fifo_full),
        .rd_en     (fifo_rd_en),
        .dout      (fifo_dout),
        .empty     (fifo_empty),
        .data_count(fifo_data_count)
    );

    wire axis_fire = frame_active_r & ~line_gap_r & ~fifo_empty;
    wire last_pixel_in_line = (pixel_cnt_r == img_width - 1'b1);
    wire last_line_in_frame = (line_cnt_r == img_height - 1'b1);
    assign fifo_rd_en = axis_fire;

    always @(posedge clk or negedge rst_n) begin
        if(~rst_n) begin
            frame_request_r <= 1'b0;
            frame_buffer_ready_r <= 1'b0;
            frame_active_r  <= 1'b0;
            line_gap_r      <= 1'b0;
            pixel_cnt_r     <= 16'd0;
            line_cnt_r      <= 16'd0;
        end else if (cpu_frame_start_pulse) begin
            frame_request_r <= 1'b1;
            frame_buffer_ready_r <= 1'b0;
            frame_active_r  <= 1'b0;
            line_gap_r      <= 1'b0;
            pixel_cnt_r     <= 16'd0;
            line_cnt_r      <= 16'd0;
        end else begin
            if (fifo_wr_en && s_axis_tlast) begin
                frame_buffer_ready_r <= 1'b1;
            end

            if (!frame_active_r) begin
                if (frame_request_r && frame_buffer_ready_r) begin
                    frame_request_r <= 1'b0;
                    frame_active_r  <= 1'b1;
                    line_gap_r      <= 1'b0;
                    pixel_cnt_r     <= 16'd0;
                    line_cnt_r      <= 16'd0;
                end
            end else if (line_gap_r) begin
                line_gap_r <= 1'b0;
            end else if (axis_fire) begin
                if (last_pixel_in_line) begin
                    pixel_cnt_r <= 16'd0;

                    if (last_line_in_frame) begin
                        line_cnt_r           <= 16'd0;
                        frame_active_r       <= 1'b0;
                        frame_buffer_ready_r <= 1'b0;
                    end else begin
                        line_cnt_r  <= line_cnt_r + 1'b1;
                        line_gap_r  <= 1'b1;
                    end
                end else begin
                    pixel_cnt_r <= pixel_cnt_r + 1'b1;
                end
            end
        end
    end

    always @(posedge clk or negedge rst_n) begin
        if(~rst_n) begin
            isp_data  <= 24'd0;
            isp_de    <= 1'b0;
            isp_href  <= 1'b0;
            isp_vsync <= 1'b0;
        end else begin
            isp_vsync <= frame_active_r;
            isp_href  <= axis_fire;
            isp_de    <= axis_fire;

            if (axis_fire) begin
                isp_data <= fifo_dout;
            end else begin
                isp_data <= 24'd0;
            end
        end
    end

    function integer clogb2;
        input integer depth;
        begin
            for (clogb2 = 0; depth > 0; clogb2 = clogb2 + 1)
                depth = depth >> 1;
        end
    endfunction

endmodule
