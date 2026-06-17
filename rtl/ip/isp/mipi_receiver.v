module mipi_receiver (
    // 时钟和复位
    input  wire         I_clk_70m,
    input  wire         I_rst,

    // 高速接收数据输出
    output wire         O_hs_rx_clk,
    output wire         O_hs_rx_valid,
    output wire [15:0]  O_hs_rx_data,
    
    // RAW8数据输出
    output wire         O_raw8_frame_start,
    output wire         O_raw8_frame_end,
    output wire         O_raw8_valid,
    output wire [31:0]  O_raw8_data,
    
    // 状态输出
    output wire [1:0]   O_lane_error
);

    // 内部信号
    wire        csi_frame_start;
    wire        csi_frame_end;
    wire        csi_valid;
    wire [31:0] csi_data;
    
    wire [7:0]  clk_lane_idelay;
    wire [7:0]  data_lane0_idelay;
    wire [7:0]  data_lane1_idelay;
    wire [7:0]  data_lane2_idelay;
    wire [7:0]  data_lane3_idelay;
    
    // IDELAY配置
    assign clk_lane_idelay   = 8'd0;
    assign data_lane0_idelay = 8'd100;
    assign data_lane1_idelay = 8'd100;
    assign data_lane2_idelay = 8'd0;
    assign data_lane3_idelay = 8'd0;
    
    // MIPI D-PHY接收器
    mipi_dphy_rx_ph1a_mipiio_wrapper #(
        .LANE_NUM ( 2 ),
        .BYTE_NUM ( 1 )
    ) u_mipi_dphy_rx (
        .I_lp_clk              ( I_clk_70m            ),
        .I_rst                 ( I_rst                ),
        
        .I_clk_lane_in_delay   ( clk_lane_idelay      ),
        .I_data_lane0_in_delay ( data_lane0_idelay    ),
        .I_data_lane1_in_delay ( data_lane1_idelay    ),
        .I_data_lane2_in_delay ( data_lane2_idelay    ),
        .I_data_lane3_in_delay ( data_lane3_idelay    ),
        
        .I_lane_invert         ( 4'b0000              ),
        
        .O_hs_rx_clk           ( O_hs_rx_clk          ),
        .O_hs_rx_valid         ( O_hs_rx_valid        ),
        .O_hs_rx_data          ( O_hs_rx_data         ),
        
        .O_lp_rx_lane0_p       (                      ),
        .O_lp_rx_lane0_n       (                      ),
        
        .I_lp_tx_en            ( 1'b0                 ),
        .I_lp_tx_lane0_p       ( 1'b0                 ),
        .I_lp_tx_lane0_n       ( 1'b0                 ),
        
        .O_lane_error          ( O_lane_error         )
    );
    
    // CSI-2解包器（2 lane）
    csi_unpacket_2lane u_csi_unpacket (
        .I_clk             ( O_hs_rx_clk       ),
        .I_rst_n           ( ~I_rst            ),
        
        .I_hs_valid        ( O_hs_rx_valid     ),
        .I_hs_data         ( O_hs_rx_data      ),
        
        .O_csi_frame_start ( csi_frame_start   ),
        .O_csi_frame_end   ( csi_frame_end     ),
        .O_csi_valid       ( csi_valid         ),
        .O_csi_data        ( csi_data          )
    );
    
    // RAW10转RAW8解包器
    raw10_unpacket_2lane u_raw10_unpacket (
        .I_clk              ( O_hs_rx_clk          ),
        .I_rst_n            ( ~I_rst               ),
        
        .I_csi_frame_start  ( csi_frame_start      ),
        .I_csi_frame_end    ( csi_frame_end        ),
        .I_csi_valid        ( csi_valid            ),
        .I_csi_data         ( csi_data             ),
        
        .O_raw8_frame_start ( O_raw8_frame_start   ),
        .O_raw8_frame_end   ( O_raw8_frame_end     ),
        .O_raw8_valid       ( O_raw8_valid         ),
        .O_raw8_data        ( O_raw8_data          )
    );

endmodule
