module flash_axil_wrap
(
    input           aclk,
    input           aresetn,

    // AXI Lite Write Address Channel
    input  [31:0]   s_awaddr,
    input  [2 :0]   s_awprot,
    input           s_awvalid,
    output          s_awready,
    
    // AXI Lite Write Data Channel
    input  [31:0]   s_wdata,
    input  [3 :0]   s_wstrb,
    input           s_wvalid,
    output reg      s_wready,
    
    // AXI Lite Write Response Channel
    output [1 :0]   s_bresp,
    output reg      s_bvalid,
    input           s_bready,
    
    // AXI Lite Read Address Channel
    input  [31:0]   s_araddr,
    input  [2 :0]   s_arprot,
    input           s_arvalid,
    output          s_arready,
    
    // AXI Lite Read Data Channel
    output reg [31:0]   s_rdata,
    output [1 :0]       s_rresp,
    output reg          s_rvalid,
    input               s_rready,

    output  [22:0]               flash_a,
    inout   [15:0]               flash_d,
    output                       flash_rp_n,
    output                       flash_vpen,
    output                       flash_ce_n,
    output                       flash_oe_n,
    output                       flash_we_n,
    output                       flash_byte_n
);

reg busy,write,R_or_W;

wire ar_enter = s_arvalid & s_arready;
wire r_retire = s_rvalid & s_rready;
wire aw_enter = s_awvalid & s_awready;
wire w_enter  = s_wvalid & s_wready;
wire b_retire = s_bvalid & s_bready;

assign s_arready = ~busy & (!R_or_W| !s_awvalid);
assign s_awready = ~busy & ( R_or_W| !s_arvalid);

always@(posedge aclk or negedge aresetn)
    if(~aresetn ) busy <= 1'b0;
    else if(ar_enter|aw_enter) busy <= 1'b1;
    else if(r_retire|b_retire) busy <= 1'b0;

reg [31:0] buf_addr;
reg [2 :0] buf_prot;

always@(posedge aclk or negedge aresetn)
    if(~aresetn) begin
        R_or_W      <= 1'b0;
        buf_addr    <= 'b0;
        buf_prot    <= 'b0;
    end
    else
    if(ar_enter | aw_enter) begin
        R_or_W      <= ar_enter;
        buf_addr    <= ar_enter ? s_araddr : s_awaddr ;
        buf_prot    <= ar_enter ? s_arprot : s_awprot ;
    end

always@(posedge aclk or negedge aresetn)
    if(~aresetn) write <= 1'b0;
    else if(aw_enter) write <= 1'b1;
    else if(ar_enter)  write <= 1'b0;

always@(posedge aclk or negedge aresetn)
    if(~aresetn) s_wready <= 1'b0;
    else if(aw_enter) s_wready <= 1'b1;
    else if(w_enter) s_wready <= 1'b0;

always@(posedge aclk or negedge aresetn)
    if(~aresetn) s_bvalid <= 1'b0;
    else if(w_enter) s_bvalid <= 1'b1;
    else if(b_retire) s_bvalid <= 1'b0;

assign s_bresp = 2'b0;
assign s_rresp = 2'b0;


//--------------------------------axi read-----------------------------//

wire flash_read_req;
wire [22:0] flash_addr_in = buf_addr[22:0];
wire [31:0] flash_data_out; 
wire flash_data_valid;      
wire flash_read_ready;

flash_reader_async flash_reader_inst (
    .clk(aclk),
    .rst_n(aresetn),
    .read_req(flash_read_req_delay),
    .addr_in(flash_addr_in),
    .data_out(flash_data_out),    
    .data_valid(flash_data_valid),
    .busy(flash_read_ready),
    .flash_a(flash_a),
    .flash_d(flash_d),
    .flash_rp_n(flash_rp_n),
    .flash_vpen(flash_vpen),
    .flash_ce_n(flash_ce_n),
    .flash_oe_n(flash_oe_n),
    .flash_we_n(flash_we_n),
    .flash_byte_n(flash_byte_n)
);

localparam R_FSM_IDLE = 2'b00;
localparam R_FSM_WAIT = 2'b01;
localparam R_FSM_SEND = 2'b10;
reg [1:0] read_fsm_state;

assign flash_read_req = ((read_fsm_state == R_FSM_IDLE) && ar_enter);
reg flash_read_req_delay;
always @(posedge aclk or negedge aresetn) begin
    if (~aresetn) begin
        flash_read_req_delay <= 1'b0;
    end else begin
        flash_read_req_delay <= flash_read_req;
    end
end

always @(posedge aclk or negedge aresetn) begin
    if (~aresetn) begin
        read_fsm_state <= R_FSM_IDLE;
    end else begin
        case (read_fsm_state)
            R_FSM_IDLE: begin
                if (ar_enter) begin // 只有读操作才进入等待状态
                    read_fsm_state <= R_FSM_WAIT;
                end
            end
            R_FSM_WAIT: begin
                if (flash_data_valid) begin // 等待 Flash 数据就绪
                    read_fsm_state <= R_FSM_SEND;
                end
            end
            R_FSM_SEND: begin
                if (s_rready) begin // 等待 AXI Master 接收数据
                    read_fsm_state <= R_FSM_IDLE;
                end
            end
            default: read_fsm_state <= R_FSM_IDLE;
        endcase
    end
end

always@(posedge aclk or negedge aresetn)
    if(~aresetn) begin
        s_rdata  <= 'b0;
        s_rvalid <= 1'b0;
    end
    else if(read_fsm_state == R_FSM_WAIT && flash_data_valid)
    begin
        s_rvalid <= 1'b1;
        s_rdata  <= flash_data_out;
    end
    else if(r_retire)
    begin
        s_rvalid <= 1'b0;
    end

endmodule
