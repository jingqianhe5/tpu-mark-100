module axi_dvi #
(
    parameter ID_WIDTH = 6,
    parameter WIDTH = 12,    // hdata and vdata width (in bits)
    parameter FB_WIDTH = 256,
    parameter FB_HEIGHT = 240,
    parameter HSIZE = 800,   // Horizontal size of visible area
    parameter HFP = 856,     // Horizontal front porch
    parameter HSP = 976,     // Horizontal sync pulse
    parameter HMAX = 1040,   // Horizontal total size
    parameter VSIZE = 600,   // Vertical size of visible area
    parameter VFP = 637,     // Vertical front porch
    parameter VSP = 643,     // Vertical sync pulse
    parameter VMAX = 666,    // Vertical total size
    parameter HSPP = 1,      // Horizontal sync pulse polarity (1 for positive)
    parameter VSPP = 1       // Vertical sync pulse polarity (1 for positive)
)
(
	input            s_awvalid,
	output           s_awready,
	input   [31:0]   s_awaddr,
	input   [ID_WIDTH-1:0] s_awid,
	input   [7:0]    s_awlen,
	input   [2:0]    s_awsize,
	input   [1:0]    s_awburst,
	input   [0:0]    s_awlock,
	input   [3:0]    s_awcache,
	input   [2:0]    s_awprot,
	input            s_wvalid,
	output reg       s_wready,
	input   [31:0]   s_wdata,
	input   [3:0]    s_wstrb,
	input            s_wlast,
	output reg       s_bvalid,
	input            s_bready,
	output  [ID_WIDTH-1:0] s_bid,
	output  [1:0]    s_bresp,
	input            s_arvalid,
	output           s_arready,
	input   [31:0]   s_araddr,
	input   [ID_WIDTH-1:0] s_arid,
	input   [7:0]    s_arlen,
	input   [2:0]    s_arsize,
	input   [1:0]    s_arburst,
	input   [0:0]    s_arlock,
	input   [3:0]    s_arcache,
	input   [2:0]    s_arprot,
	output reg       s_rvalid,
	input            s_rready,
	output reg [31:0] s_rdata,
	output  [ID_WIDTH-1:0] s_rid,
	output  [1:0]    s_rresp,
	output reg       s_rlast,
	
	output  video_clk,           // Video clock signal
    output  hsync,               // Horizontal sync signal
    output  vsync,               // Vertical sync signal
    output  data_enable,         // Data enable signal
    output  [2:0] video_red,      // Red color signal (3 bits)
    output  [2:0] video_green,    // Green color signal (3 bits)
    output  [1:0] video_blue,      // Blue color signal (2 bits)

	input            aclk,
	input            aresetn
);

    reg [31:0] DVI_RECT_DIR,DVI_RECT_L_W,DVI_SQU_DIR,DVI_SQU_R,DVI_mode,DVI_data,DVI_size,DVI_START,DVI_WH,DVI_CMD;
    localparam integer FB_BANKS = 4;
    localparam integer FB_WORD_WIDTH = FB_WIDTH / FB_BANKS;
    localparam integer FB_BANK_PIXELS = FB_WORD_WIDTH * FB_HEIGHT;
    localparam [15:0] FB_WIDTH_U16 = FB_WIDTH;
    localparam [15:0] FB_HEIGHT_U16 = FB_HEIGHT;

    reg [7:0] fb_mem0 [0:FB_BANK_PIXELS-1];
    reg [7:0] fb_mem1 [0:FB_BANK_PIXELS-1];
    reg [7:0] fb_mem2 [0:FB_BANK_PIXELS-1];
    reg [7:0] fb_mem3 [0:FB_BANK_PIXELS-1];
    reg [15:0] fb_wr_x;
    reg [15:0] fb_wr_y;
    reg [15:0] fb_block_rel_x;
    reg [15:0] fb_block_rel_y;
    reg [7:0] fb_pixel_data;
    integer i;

    initial begin
        for (i = 0; i < FB_BANK_PIXELS; i = i + 1) begin
            fb_mem0[i] = 8'h00;
            fb_mem1[i] = 8'h00;
            fb_mem2[i] = 8'h00;
            fb_mem3[i] = 8'h00;
        end
    end

    reg busy,write,R_or_W;
    wire ar_enter = s_arvalid & s_arready;
    wire r_retire = s_rvalid & s_rready & s_rlast;
    wire aw_enter = s_awvalid & s_awready;
    wire w_enter  = s_wvalid & s_wready;
    wire b_retire = s_bvalid & s_bready;
    wire fb_stream_addr = (wr_addr[15:0] == 16'h14) || (wr_addr[15:0] >= 16'h28);
    wire fb_stream_port = fb_stream_addr && DVI_mode[0];
    wire fb_stream_write_en = w_enter && fb_stream_port;

    assign s_arready = ~busy & (!R_or_W| !s_awvalid);
    assign s_awready = ~busy & ( R_or_W| !s_arvalid);

    always@(posedge aclk)
        if(~aresetn) busy <= 1'b0;
        else if(ar_enter|aw_enter) busy <= 1'b1;
        else if(r_retire|b_retire) busy <= 1'b0;

    reg [ID_WIDTH-1:0] buf_id;
    reg [31:0] buf_addr;
    reg [31:0] wr_addr;
    reg [7 :0] buf_len;
    reg [2 :0] buf_size;
    reg [1 :0] buf_burst;
    reg        buf_lock;
    reg [3 :0] buf_cache;
    reg [2 :0] buf_prot;

    always@(posedge aclk) begin
        if(~aresetn) begin
            R_or_W      <= 1'b0;
            buf_id      <= 'b0;
            buf_addr    <= 'b0;
            wr_addr     <= 'b0;
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
            wr_addr     <= ar_enter ? s_araddr : s_awaddr ;
            buf_len     <= ar_enter ? s_arlen  : s_awlen  ;
            buf_size    <= ar_enter ? s_arsize : s_awsize ;
            buf_burst   <= ar_enter ? s_arburst: s_awburst;
            buf_lock    <= ar_enter ? s_arlock : s_awlock ;
            buf_cache   <= ar_enter ? s_arcache: s_awcache;
            buf_prot    <= ar_enter ? s_arprot : s_awprot ;
        end
        else if (w_enter && !s_wlast) begin
            // Treat DVI_DATA as a streaming port: keep the same decoded address
            // across the whole burst so every beat is consumed as pixel data.
            if (wr_addr[15:0] == 16'h14) begin
                wr_addr <= wr_addr;
            end
            else if (buf_burst == 2'b01) begin
                wr_addr <= wr_addr + (32'd1 << buf_size);
            end
        end
    end

    always@(posedge aclk)
        if(~aresetn) write <= 1'b0;
        else if(aw_enter) write <= 1'b1;
        else if(ar_enter)  write <= 1'b0;

    always@(posedge aclk)
        if(~aresetn) s_wready <= 1'b0;
        else if(aw_enter) s_wready <= 1'b1;
        else if(w_enter & s_wlast) s_wready <= 1'b0;
        else if(write & fb_stream_port) s_wready <= 1'b1;
        else if(w_enter) s_wready <= 1'b0;

    wire [31:0] rdata_d =   buf_addr[15:0] ==  16'h0     ? DVI_RECT_DIR         : 
                            buf_addr[15:0] ==  16'h4     ? DVI_RECT_L_W         : 
                            buf_addr[15:0] ==  16'h8     ? DVI_SQU_DIR          : 
                            buf_addr[15:0] ==  16'hc     ? DVI_SQU_R            : 
                            buf_addr[15:0] ==  16'h10    ? DVI_mode             : 
                            buf_addr[15:0] ==  16'h14    ? DVI_data             : 
                            buf_addr[15:0] ==  16'h18    ? DVI_size             : 
                            buf_addr[15:0] ==  16'h1c    ? DVI_START            : 
                            buf_addr[15:0] ==  16'h20    ? DVI_WH               : 
                            buf_addr[15:0] ==  16'h24    ? DVI_CMD              : 
                            32'd0;

    always@(posedge aclk)begin
        if(~aresetn) begin
            s_rdata  <= 'b0;
            s_rvalid <= 1'b0;
            s_rlast  <= 1'b0;
        end
        else if(busy & !write & !r_retire)
        begin
            s_rdata <= rdata_d;
            s_rvalid <= 1'b1;
            s_rlast <= 1'b1; 
        end
        else if(r_retire)
        begin
            s_rvalid <= 1'b0;
        end
    end
    always@(posedge aclk)   begin
        if(~aresetn) begin
            s_bvalid <= 1'b0;
        end
        else begin
            if(w_enter & s_wlast) begin
                s_bvalid <= 1'b1;
            end

            if(b_retire) begin
                s_bvalid <= 1'b0;
            end
        end
    end
    assign s_rid   = buf_id;
    assign s_bid   = buf_id;
    assign s_bresp = 2'b0;
    assign s_rresp = 2'b0;


//-------------------------------{dvi controller}begin----------------------------//
    wire write_reg_en[9:0];
    assign write_reg_en[0] = w_enter & (wr_addr[15:0]==16'h0);
    assign write_reg_en[1] = w_enter & (wr_addr[15:0]==16'h4);
    assign write_reg_en[2] = w_enter & (wr_addr[15:0]==16'h8);
    assign write_reg_en[3] = w_enter & (wr_addr[15:0]==16'hc);
    assign write_reg_en[4] = w_enter & (wr_addr[15:0]==16'h10);
    assign write_reg_en[5] = w_enter & (wr_addr[15:0]==16'h14);
    assign write_reg_en[6] = w_enter & (wr_addr[15:0]==16'h18);
    assign write_reg_en[7] = w_enter & (wr_addr[15:0]==16'h1c);
    assign write_reg_en[8] = w_enter & (wr_addr[15:0]==16'h20);
    assign write_reg_en[9] = w_enter & (wr_addr[15:0]==16'h24);

    always @(posedge aclk) begin
        if(!aresetn) begin
            DVI_RECT_DIR <= 32'h0;
        end
        else if (write_reg_en[0]) begin
            DVI_RECT_DIR <= s_wdata;
        end
    end

    always @(posedge aclk) begin
        if(!aresetn) begin
            DVI_RECT_L_W <= 32'h0;
        end
        else if (write_reg_en[1]) begin
            DVI_RECT_L_W <= s_wdata;
        end
    end

    always @(posedge aclk) begin
        if(!aresetn) begin
            DVI_SQU_DIR <= 32'h0;
        end
        else if (write_reg_en[2]) begin
            DVI_SQU_DIR <= s_wdata;
        end
    end

    always @(posedge aclk) begin
        if(!aresetn) begin
            DVI_SQU_R <= 32'h0;
        end
        else if (write_reg_en[3]) begin
            DVI_SQU_R <= s_wdata;
        end
    end

    always @(posedge aclk) begin
        if(!aresetn) begin
            DVI_mode <= 32'h0;
        end
        else if (write_reg_en[4]) begin
            DVI_mode <= s_wdata;
        end
    end

    always @(posedge aclk) begin
        if(!aresetn) begin
            DVI_data <= 32'h0;
        end
        else if (write_reg_en[5]) begin
            DVI_data <= s_wdata;
        end
    end

    always @(posedge aclk) begin
        if(!aresetn) begin
            DVI_size <= 32'h0;
        end
        else if (write_reg_en[6]) begin
            DVI_size <= s_wdata;
        end
    end

    always @(posedge aclk) begin
        if(!aresetn) begin
            DVI_START <= 32'h0;
        end
        else if (write_reg_en[7]) begin
            DVI_START <= s_wdata;
        end
    end

    always @(posedge aclk) begin
        if(!aresetn) begin
            DVI_WH <= 32'h0;
        end
        else if (write_reg_en[8]) begin
            DVI_WH <= s_wdata;
        end
    end

    always @(posedge aclk) begin
        if(!aresetn) begin
            DVI_CMD <= 32'h0;
        end
        else if (write_reg_en[9]) begin
            DVI_CMD <= s_wdata;
        end
    end

    always @(posedge aclk) begin
        if (!aresetn) begin
            fb_wr_x <= 16'd0;
            fb_wr_y <= 16'd0;
            fb_block_rel_x <= 16'd0;
            fb_block_rel_y <= 16'd0;
        end
        else if (write_reg_en[7]) begin
            fb_wr_x <= s_wdata[31:16];
            fb_wr_y <= s_wdata[15:0];
            fb_block_rel_x <= 16'd0;
            fb_block_rel_y <= 16'd0;
        end
        else if (write_reg_en[8] || (write_reg_en[9] && s_wdata[0])) begin
            fb_wr_x <= DVI_START[31:16];
            fb_wr_y <= DVI_START[15:0];
            fb_block_rel_x <= 16'd0;
            fb_block_rel_y <= 16'd0;
        end
        else if (fb_stream_write_en) begin
            if (DVI_mode[1]) begin
                if ((fb_wr_y < FB_HEIGHT) && (fb_wr_y < fb_cfg_height)) begin
                    if ((fb_wr_x + 16'd0 < FB_WIDTH) && (fb_wr_x + 16'd0 < fb_cfg_width)) begin
                        fb_mem0[fb_wr_word_addr] <= s_wdata[7:0];
                    end
                    if ((fb_wr_x + 16'd1 < FB_WIDTH) && (fb_wr_x + 16'd1 < fb_cfg_width)) begin
                        fb_mem1[fb_wr_word_addr] <= s_wdata[15:8];
                    end
                    if ((fb_wr_x + 16'd2 < FB_WIDTH) && (fb_wr_x + 16'd2 < fb_cfg_width)) begin
                        fb_mem2[fb_wr_word_addr] <= s_wdata[23:16];
                    end
                    if ((fb_wr_x + 16'd3 < FB_WIDTH) && (fb_wr_x + 16'd3 < fb_cfg_width)) begin
                        fb_mem3[fb_wr_word_addr] <= s_wdata[31:24];
                    end
                end

                if (fb_block_w > 16'd0 && fb_block_h > 16'd0) begin
                    if (fb_block_rel_x + 16'd4 < fb_block_w) begin
                        fb_block_rel_x <= fb_block_rel_x + 16'd4;
                        fb_wr_x <= fb_wr_x + 16'd4;
                    end
                    else if (fb_block_rel_y + 16'd1 < fb_block_h) begin
                        fb_block_rel_x <= 16'd0;
                        fb_block_rel_y <= fb_block_rel_y + 16'd1;
                        fb_wr_x <= fb_block_x0;
                        fb_wr_y <= fb_block_y0 + fb_block_rel_y + 16'd1;
                    end
                end
            end
            else begin
                if ((fb_wr_x < FB_WIDTH) && (fb_wr_y < FB_HEIGHT) &&
                    (fb_wr_x < fb_cfg_width) && (fb_wr_y < fb_cfg_height)) begin
                    case (fb_wr_x[1:0])
                        2'd0: fb_mem0[fb_wr_word_addr] <= s_wdata[7:0];
                        2'd1: fb_mem1[fb_wr_word_addr] <= s_wdata[7:0];
                        2'd2: fb_mem2[fb_wr_word_addr] <= s_wdata[7:0];
                        default: fb_mem3[fb_wr_word_addr] <= s_wdata[7:0];
                    endcase
                end

                if (fb_block_w > 16'd0 && fb_block_h > 16'd0) begin
                    if (fb_block_rel_x + 16'd1 < fb_block_w) begin
                        fb_block_rel_x <= fb_block_rel_x + 16'd1;
                        fb_wr_x <= fb_wr_x + 16'd1;
                    end
                    else if (fb_block_rel_y + 16'd1 < fb_block_h) begin
                        fb_block_rel_x <= 16'd0;
                        fb_block_rel_y <= fb_block_rel_y + 16'd1;
                        fb_wr_x <= fb_block_x0;
                        fb_wr_y <= fb_block_y0 + fb_block_rel_y + 16'd1;
                    end
                end
            end
        end
    end

    reg [WIDTH-1:0] hdata = 0;       // Horizontal position counter
	reg [WIDTH-1:0] vdata = 0;       // Vertical position counter
	
    wire hdata_in_range;
    wire vdata_in_range;
    wire hdata1_in_range;
    wire vdata1_in_range;
    wire legacy_pixel_on;
    wire fb_pixel_on;
    wire [2:0] legacy_red;
    wire [2:0] legacy_green;
    wire [1:0] legacy_blue;
    wire [2:0] fb_red;
    wire [2:0] fb_green;
    wire [1:0] fb_blue;
    wire [15:0] fb_cfg_width;
    wire [15:0] fb_cfg_height;
    wire [15:0] hpos;
    wire [15:0] vpos;
    wire [15:0] fb_disp_x0;
    wire [15:0] fb_disp_y0;
    wire [15:0] fb_disp_x1;
    wire [15:0] fb_disp_y1;
    wire fb_disp_h_in_range;
    wire fb_disp_v_in_range;
    wire [15:0] fb_rd_x;
    wire [15:0] fb_rd_y;
    wire [31:0] fb_rd_word_addr;
    wire [15:0] fb_block_x0;
    wire [15:0] fb_block_y0;
    wire [15:0] fb_block_w;
    wire [15:0] fb_block_h;
    wire [31:0] fb_wr_word_addr;
	
    always @(posedge aclk) begin
        if (hdata == (HMAX - 1))      // If horizontal counter reaches max
            hdata <= 0;               // Reset horizontal counter
        else
            hdata <= hdata + 1;       // Increment horizontal counter
    end

    // Vertical counter (vdata) logic
    always @(posedge aclk) begin
        if (hdata == (HMAX - 1)) begin
            if (vdata == (VMAX - 1))  // If vertical counter reaches max
                vdata <= 0;           // Reset vertical counter
            else
                vdata <= vdata + 1;   // Increment vertical counter
        end
    end

    // Horizontal sync signal generation (hsync)
    assign video_clk = aclk; // Example: using input clock as video clock
    assign hsync = ((hdata >= HFP) && (hdata < HSP)) ? HSPP : !HSPP;
    assign vsync = ((vdata >= VFP) && (vdata < VSP)) ? VSPP : !VSPP;
    assign data_enable = ((hdata < HSIZE) & (vdata < VSIZE));  
    
    assign hpos = {4'd0, hdata};
    assign vpos = {4'd0, vdata};

    assign hdata_in_range = (hpos > (DVI_RECT_DIR[31:16]-DVI_RECT_L_W[31:16])) && (hpos < (DVI_RECT_DIR[31:16]+DVI_RECT_L_W[31:16]));
    // Check if vdata is in the range specified by DVI_RECT_L_W
    assign vdata_in_range = (vpos > DVI_RECT_DIR[15:0]) && (vpos < (DVI_RECT_DIR[15:0]+DVI_RECT_L_W[15:0]));
    
    assign hdata1_in_range = (hpos > (DVI_SQU_DIR[31:16]-DVI_SQU_R[31:16])) && (hpos < (DVI_SQU_DIR[31:16]+DVI_SQU_R[31:16]));
    // Check if vdata is in the range specified by DVI_RECT_L_W
    assign vdata1_in_range = (vpos > (DVI_SQU_DIR[15:0]-DVI_SQU_R[15:0])) && (vpos < (DVI_SQU_DIR[15:0]+DVI_SQU_R[15:0]));

    assign fb_cfg_width = (DVI_size[31:16] == 16'd0 || DVI_size[31:16] > FB_WIDTH_U16) ? FB_WIDTH_U16 : DVI_size[31:16];
    assign fb_cfg_height = (DVI_size[15:0] == 16'd0 || DVI_size[15:0] > FB_HEIGHT_U16) ? FB_HEIGHT_U16 : DVI_size[15:0];
    assign fb_disp_x0 = (HSIZE > fb_cfg_width) ? ((HSIZE - fb_cfg_width) >> 1) : 16'd0;
    assign fb_disp_y0 = (VSIZE > fb_cfg_height) ? ((VSIZE - fb_cfg_height) >> 1) : 16'd0;
    assign fb_disp_x1 = fb_disp_x0 + fb_cfg_width;
    assign fb_disp_y1 = fb_disp_y0 + fb_cfg_height;
    assign fb_disp_h_in_range = (hpos >= fb_disp_x0) && (hpos < fb_disp_x1);
    assign fb_disp_v_in_range = (vpos >= fb_disp_y0) && (vpos < fb_disp_y1);
    assign fb_pixel_on = fb_disp_h_in_range && fb_disp_v_in_range;
    assign fb_rd_x = hpos - fb_disp_x0;
    assign fb_rd_y = vpos - fb_disp_y0;
    assign fb_rd_word_addr = fb_rd_y * FB_WORD_WIDTH + {18'd0, fb_rd_x[15:2]};
    assign fb_block_x0 = DVI_START[31:16];
    assign fb_block_y0 = DVI_START[15:0];
    assign fb_block_w = DVI_WH[31:16];
    assign fb_block_h = DVI_WH[15:0];
    assign fb_wr_word_addr = fb_wr_y * FB_WORD_WIDTH + {18'd0, fb_wr_x[15:2]};

    assign legacy_pixel_on = (hdata_in_range && vdata_in_range) || (hdata1_in_range && vdata1_in_range);

    assign legacy_red = legacy_pixel_on ? 3'b111 : 3'b0;
    assign legacy_green = 3'b0;
    assign legacy_blue = 2'b0;

    always @(*) begin
        if (fb_pixel_on && (fb_rd_x < fb_cfg_width) && (fb_rd_y < fb_cfg_height)) begin
            case (fb_rd_x[1:0])
                2'd0: fb_pixel_data = fb_mem0[fb_rd_word_addr];
                2'd1: fb_pixel_data = fb_mem1[fb_rd_word_addr];
                2'd2: fb_pixel_data = fb_mem2[fb_rd_word_addr];
                default: fb_pixel_data = fb_mem3[fb_rd_word_addr];
            endcase
        end
        else begin
            fb_pixel_data = 8'h00;
        end
    end

    assign fb_red = fb_pixel_on ? fb_pixel_data[7:5] : 3'b0;
    assign fb_green = fb_pixel_on ? fb_pixel_data[4:2] : 3'b0;
    assign fb_blue = fb_pixel_on ? fb_pixel_data[1:0] : 2'b0;

    // mode[0] = 0: legacy shape mode, mode[0] = 1: RGB332 window output mode
    assign video_red = data_enable ? (DVI_mode[0] ? fb_red : legacy_red) : 3'b0;
    assign video_green = data_enable ? (DVI_mode[0] ? fb_green : legacy_green) : 3'b0;
    assign video_blue = data_enable ? (DVI_mode[0] ? fb_blue : legacy_blue) : 2'b0;

//--------------------------------{dvi controller}end-----------------------------//


endmodule
