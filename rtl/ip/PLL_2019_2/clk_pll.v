`timescale 1ns / 1ps

module clk_pll (
    output cpu_clk,
    output sys_clk,
    output clk_out3,
    input  resetn,
    output locked,
    input  clk_in1
);

    wire clkfb;
    wire clkfb_buf;
    wire cpu_clk_mmcm;
    wire sys_clk_mmcm;
    wire clk_out3_mmcm;

    MMCME2_ADV #(
        .BANDWIDTH            ("OPTIMIZED"),
        .CLKFBOUT_MULT_F      (31.000),
        .CLKFBOUT_PHASE       (0.000),
        .CLKIN1_PERIOD        (20.000),
        .CLKIN2_PERIOD        (10.000),
        .CLKOUT0_DIVIDE_F     (47.000),
        .CLKOUT0_DUTY_CYCLE   (0.500),
        .CLKOUT0_PHASE        (0.000),
        .CLKOUT1_DIVIDE       (31),
        .CLKOUT1_DUTY_CYCLE   (0.500),
        .CLKOUT1_PHASE        (0.000),
        .CLKOUT2_DIVIDE       (31),
        .CLKOUT2_DUTY_CYCLE   (0.500),
        .CLKOUT2_PHASE        (0.000),
        .CLKOUT3_DIVIDE       (1),
        .CLKOUT3_DUTY_CYCLE   (0.500),
        .CLKOUT3_PHASE        (0.000),
        .CLKOUT4_CASCADE      ("FALSE"),
        .CLKOUT4_DIVIDE       (1),
        .CLKOUT4_DUTY_CYCLE   (0.500),
        .CLKOUT4_PHASE        (0.000),
        .CLKOUT5_DIVIDE       (1),
        .CLKOUT5_DUTY_CYCLE   (0.500),
        .CLKOUT5_PHASE        (0.000),
        .CLKOUT6_DIVIDE       (1),
        .CLKOUT6_DUTY_CYCLE   (0.500),
        .CLKOUT6_PHASE        (0.000),
        .COMPENSATION         ("ZHOLD"),
        .DIVCLK_DIVIDE        (1),
        .REF_JITTER1          (0.010),
        .REF_JITTER2          (0.010),
        .STARTUP_WAIT         ("FALSE")
    ) u_mmcm (
        .CLKFBOUT             (clkfb),
        .CLKFBOUTB            (),
        .CLKFBSTOPPED         (),
        .CLKINSTOPPED         (),
        .CLKOUT0              (cpu_clk_mmcm),
        .CLKOUT0B             (),
        .CLKOUT1              (sys_clk_mmcm),
        .CLKOUT1B             (),
        .CLKOUT2              (clk_out3_mmcm),
        .CLKOUT2B             (),
        .CLKOUT3              (),
        .CLKOUT3B             (),
        .CLKOUT4              (),
        .CLKOUT5              (),
        .CLKOUT6              (),
        .DO                   (),
        .DRDY                 (),
        .LOCKED               (locked),
        .CLKFBIN              (clkfb_buf),
        .CLKIN1               (clk_in1),
        .CLKIN2               (1'b0),
        .CLKINSEL             (1'b1),
        .DADDR                (7'd0),
        .DCLK                 (1'b0),
        .DEN                  (1'b0),
        .DI                   (16'd0),
        .DWE                  (1'b0),
        .PSCLK                (1'b0),
        .PSEN                 (1'b0),
        .PSINCDEC             (1'b0),
        .PWRDWN               (1'b0),
        .RST                  (~resetn)
    );

    BUFG u_clkfb_buf (
        .I (clkfb),
        .O (clkfb_buf)
    );

    BUFG u_cpu_clk_buf (
        .I (cpu_clk_mmcm),
        .O (cpu_clk)
    );

    BUFG u_sys_clk_buf (
        .I (sys_clk_mmcm),
        .O (sys_clk)
    );

    BUFG u_clk_out3_buf (
        .I (clk_out3_mmcm),
        .O (clk_out3)
    );

endmodule
