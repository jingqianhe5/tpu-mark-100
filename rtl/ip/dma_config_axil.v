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
    input  wire        write_cmd_ready
);

    // AXI-Lite 内部握手寄存器
    reg aw_done;
    reg w_done;
    reg axi_bvalid;
    reg axi_arready;
    reg axi_rvalid;
    reg [31:0] axi_rdata;
    reg [31:0] awaddr_reg;
    reg [31:0] wdata_reg;

    assign s_axil_awready = ~aw_done && ~axi_bvalid;
    assign s_axil_wready  = ~w_done  && ~axi_bvalid;
    assign s_axil_bvalid  = axi_bvalid;
    assign s_axil_bresp   = 2'b00; // 始终回复 OKAY

    assign s_axil_arready = axi_arready;
    assign s_axil_rvalid  = axi_rvalid;
    assign s_axil_rdata   = axi_rdata;
    assign s_axil_rresp   = 2'b00;

    // --- 写通道握手逻辑 ---
    always @(posedge aclk) begin
        if (~aresetn) begin
            aw_done     <= 1'b0;
            w_done      <= 1'b0;
            axi_bvalid  <= 1'b0;
            awaddr_reg  <= 32'd0;
            wdata_reg   <= 32'd0;
        end else begin
            if (s_axil_awvalid && s_axil_awready) begin
                aw_done    <= 1'b1;
                awaddr_reg <= s_axil_awaddr;
            end

            if (s_axil_wvalid && s_axil_wready) begin
                w_done    <= 1'b1;
                wdata_reg <= s_axil_wdata;
            end

            if (aw_done && w_done && ~axi_bvalid) begin
                axi_bvalid <= 1'b1;
                aw_done    <= 1'b0;
                w_done     <= 1'b0;
            end else if (s_axil_bready && axi_bvalid) begin
                axi_bvalid <= 1'b0;
            end
        end
    end
    wire slv_reg_wren = aw_done && w_done && ~axi_bvalid;

    // --- 读通道握手逻辑 ---
    always @(posedge aclk) begin
        if (~aresetn) begin
            axi_arready <= 1'b0;
            axi_rvalid  <= 1'b0;
        end else begin
            if (~axi_arready && s_axil_arvalid && ~axi_rvalid) begin
                axi_arready <= 1'b1;
            end else begin
                axi_arready <= 1'b0;
            end

            if (axi_arready && s_axil_arvalid && ~axi_rvalid) begin
                axi_rvalid <= 1'b1;
            end else if (s_axil_rready && axi_rvalid) begin
                axi_rvalid <= 1'b0;
            end
        end
    end
    wire slv_reg_rden = axi_arready & s_axil_arvalid & ~axi_rvalid;

    // --- 寄存器定义与逻辑 ---
    reg [31:0] reg_read_addr;
    reg [19:0] reg_read_len;
    reg [31:0] reg_write_addr;
    reg [19:0] reg_write_len;
    reg        reg_read_cmd_valid;
    reg        reg_write_cmd_valid;

    always @(posedge aclk) begin
        if (~aresetn) begin
            reg_read_addr  <= 32'd0;
            reg_read_len   <= 20'd0;
            reg_write_addr <= 32'd0;
            reg_write_len  <= 20'd0;
            reg_read_cmd_valid  <= 1'b0;
            reg_write_cmd_valid <= 1'b0;
        end else begin
            // 收到 DMA 的 ready 确认后，自动清除 valid 脉冲
            if (reg_read_cmd_valid && read_cmd_ready)   reg_read_cmd_valid  <= 1'b0;
            if (reg_write_cmd_valid && write_cmd_ready) reg_write_cmd_valid <= 1'b0;

            // CPU 写入寄存器
            if (slv_reg_wren) begin
                case (awaddr_reg[7:0])
                    8'h00: reg_read_addr  <= wdata_reg;
                    8'h04: reg_read_len   <= wdata_reg[19:0];
                    8'h08: reg_write_addr <= wdata_reg;
                    8'h0C: reg_write_len  <= wdata_reg[19:0];
                    8'h10: begin // 命令启动寄存器 (自动产生脉冲)
                        if (wdata_reg[0]) reg_read_cmd_valid  <= 1'b1;
                        if (wdata_reg[1]) reg_write_cmd_valid <= 1'b1;
                    end
                endcase
            end
        end
    end

    // 映射到 DMA 输出
    assign read_cmd_addr   = reg_read_addr;
    assign read_cmd_len    = reg_read_len;
    assign read_cmd_valid  = reg_read_cmd_valid;

    assign write_cmd_addr  = reg_write_addr;
    assign write_cmd_len   = reg_write_len;
    assign write_cmd_valid = reg_write_cmd_valid;

    // --- 状态寄存器读取逻辑 ---
    always @(posedge aclk) begin
        if (~aresetn) begin
            axi_rdata <= 32'd0;
        end else if (slv_reg_rden) begin
            case (s_axil_araddr[7:0])
                8'h00: axi_rdata <= reg_read_addr;
                8'h04: axi_rdata <= {12'd0, reg_read_len};
                8'h08: axi_rdata <= reg_write_addr;
                8'h0C: axi_rdata <= {12'd0, reg_write_len};
                8'h10: axi_rdata <= 32'd0; // 命令寄存器读回0
                8'h14: axi_rdata <= {30'd0, write_cmd_ready, read_cmd_ready}; // 状态寄存器
                default: axi_rdata <= 32'd0;
            endcase
        end
    end

endmodule
