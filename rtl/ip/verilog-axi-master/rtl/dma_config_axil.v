`timescale 1ns / 1ps

module dma_config_axil (
    input  wire        aclk,
    input  wire        aresetn,

    // --- AXI-Lite Slave Interface ---
    input  wire [31:0] s_axil_awaddr,
    input  wire [ 2:0] s_axil_awprot,
    input  wire        s_axil_awvalid,
    output wire        s_axil_awready,
    input  wire [31:0] s_axil_wdata,
    input  wire [ 3:0] s_axil_wstrb,
    input  wire        s_axil_wvalid,
    output wire        s_axil_wready,
    output wire [ 1:0] s_axil_bresp,
    output wire        s_axil_bvalid,
    input  wire        s_axil_bready,
    
    input  wire [31:0] s_axil_araddr,
    input  wire [ 2:0] s_axil_arprot,
    input  wire        s_axil_arvalid,
    output wire        s_axil_arready,
    output wire [31:0] s_axil_rdata,
    output wire [ 1:0] s_axil_rresp,
    output wire        s_axil_rvalid,
    input  wire        s_axil_rready,

    // --- DMA Descriptor Command Interface ---
    output wire [31:0] read_cmd_addr,
    output wire [19:0] read_cmd_len,
    output wire        read_cmd_valid,
    input  wire        read_cmd_ready,

    output wire [31:0] write_cmd_addr,
    output wire [19:0] write_cmd_len,
    output wire        write_cmd_valid,
    input  wire        write_cmd_ready,
    input  wire        read_desc_status_valid,
    input  wire        write_desc_status_valid
);

    // ==========================================
    // 1. 写通道：分离式握手 (绝生死锁)
    // ==========================================
    reg aw_done;
    reg w_done;
    reg axi_bvalid;
    reg [31:0] awaddr_reg; // 锁存写地址
    reg [31:0] wdata_reg;  // 锁存写数据

    assign s_axil_awready = ~aw_done && ~axi_bvalid;
    assign s_axil_wready  = ~w_done  && ~axi_bvalid;
    assign s_axil_bvalid  = axi_bvalid;
    assign s_axil_bresp   = 2'b00;

    always @(posedge aclk) begin
        if (~aresetn) begin
            aw_done    <= 1'b0;
            w_done     <= 1'b0;
            axi_bvalid <= 1'b0;
            awaddr_reg <= 32'd0;
            wdata_reg  <= 32'd0;
        end else begin
            if (s_axil_awvalid && s_axil_awready) begin
                aw_done    <= 1'b1;
                awaddr_reg <= s_axil_awaddr; // 锁存住地址
            end
            if (s_axil_wvalid && s_axil_wready) begin
                w_done     <= 1'b1;
                wdata_reg  <= s_axil_wdata;
            end
            if (aw_done && w_done) begin
                axi_bvalid <= 1'b1;
                aw_done    <= 1'b0;
                w_done     <= 1'b0;
            end
            if (axi_bvalid && s_axil_bready) begin
                axi_bvalid <= 1'b0;
            end
        end
    end

    // ==========================================
    // 2. 寄存器定义与逻辑 (修复命令触发)
    // ==========================================
    reg [31:0] reg_read_addr;
    reg [19:0] reg_read_len;
    reg [31:0] reg_write_addr;
    reg [19:0] reg_write_len;
    reg        reg_read_cmd_valid;
    reg        reg_write_cmd_valid;
    reg        reg_dma_busy;
    reg        reg_dma_done;
    reg        reg_read_pending;
    reg        reg_write_pending;
    reg        reg_read_desc_seen;
    reg        reg_write_desc_seen;

    always @(posedge aclk) begin
        if (~aresetn) begin
            reg_read_addr       <= 32'd0;
            reg_read_len        <= 20'd0;
            reg_write_addr      <= 32'd0;
            reg_write_len       <= 20'd0;
            reg_read_cmd_valid  <= 1'b0;
            reg_write_cmd_valid <= 1'b0;
            reg_dma_busy        <= 1'b0;
            reg_dma_done        <= 1'b0;
            reg_read_pending    <= 1'b0;
            reg_write_pending   <= 1'b0;
            reg_read_desc_seen  <= 1'b0;
            reg_write_desc_seen <= 1'b0;
        end else begin
            // 先处理清零逻辑：收到 DMA 响应后清零
            if (reg_read_cmd_valid && read_cmd_ready)   reg_read_cmd_valid  <= 1'b0;
            if (reg_write_cmd_valid && write_cmd_ready) reg_write_cmd_valid <= 1'b0;
            if (read_desc_status_valid) begin
                reg_read_pending   <= 1'b0;
                reg_read_desc_seen <= 1'b1;
            end
            if (write_desc_status_valid) begin
                reg_write_pending   <= 1'b0;
                reg_write_desc_seen <= 1'b1;
            end

            if (reg_dma_busy &&
                ((reg_read_pending && read_desc_status_valid) || !reg_read_pending) &&
                ((reg_write_pending && write_desc_status_valid) || !reg_write_pending)) begin
                reg_dma_busy <= 1'b0;
                reg_dma_done <= 1'b1;
            end

            // 再处理 CPU 写入（优先级更高，放在后面）
            // 当地址和数据都收齐的那一拍，执行写入
            if (aw_done && w_done) begin
                case (awaddr_reg[7:0]) // 注意这里用的是锁存后的 awaddr_reg
                    8'h00: reg_read_addr  <= wdata_reg;
                    8'h04: reg_read_len   <= wdata_reg[19:0];
                    8'h08: reg_write_addr <= wdata_reg;
                    8'h0C: reg_write_len  <= wdata_reg[19:0];
                    8'h10: begin // 启动寄存器
                        if (wdata_reg[0]) reg_read_cmd_valid  <= 1'b1;
                        if (wdata_reg[1]) reg_write_cmd_valid <= 1'b1;
                        if (wdata_reg[1:0] != 2'b00) begin
                            reg_dma_busy      <= 1'b1;
                            reg_dma_done      <= 1'b0;
                            reg_read_pending  <= wdata_reg[0];
                            reg_write_pending <= wdata_reg[1];
                            reg_read_desc_seen  <= 1'b0;
                            reg_write_desc_seen <= 1'b0;
                        end
                    end
                    default: begin
                    end
                endcase
            end
        end
    end

    assign read_cmd_addr   = reg_read_addr;
    assign read_cmd_len    = reg_read_len;
    assign read_cmd_valid  = reg_read_cmd_valid;
    assign write_cmd_addr  = reg_write_addr;
    assign write_cmd_len   = reg_write_len;
    assign write_cmd_valid = reg_write_cmd_valid;

    // ==========================================
    // 3. 读通道：防吞包设计
    // ==========================================
    reg axi_rvalid;
    reg [31:0] axi_rdata;
    
    assign s_axil_arready = ~axi_rvalid; // 手里没货时才允许接新订单
    assign s_axil_rvalid  = axi_rvalid;
    assign s_axil_rdata   = axi_rdata;
    assign s_axil_rresp   = 2'b00;

    always @(posedge aclk) begin
        if (~aresetn) begin
            axi_rvalid <= 1'b0;
            axi_rdata  <= 32'd0;
        end else begin
            if (s_axil_arvalid && s_axil_arready) begin
                axi_rvalid <= 1'b1;
                // 当 arvalid 且 arready 有效时，地址是绝对安全的
                case (s_axil_araddr[7:0])
                    8'h00: axi_rdata <= reg_read_addr;
                    8'h04: axi_rdata <= {12'd0, reg_read_len};
                    8'h08: axi_rdata <= reg_write_addr;
                    8'h0C: axi_rdata <= {12'd0, reg_write_len};
                    8'h10: axi_rdata <= 32'd0; 
                    8'h14: axi_rdata <= {
                        22'd0,
                        reg_write_desc_seen,
                        reg_read_desc_seen,
                        reg_write_pending,
                        reg_read_pending,
                        reg_write_cmd_valid,
                        reg_read_cmd_valid,
                        reg_dma_done,
                        reg_dma_busy,
                        write_cmd_ready,
                        read_cmd_ready
                    };
                    default: axi_rdata <= 32'd0;
                endcase
            end else if (s_axil_rready && axi_rvalid) begin
                axi_rvalid <= 1'b0;
            end
        end
    end

endmodule
