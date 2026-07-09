`timescale 1ps / 1ps

module clk_pll (
    output cpu_clk,
    output sys_clk,
    input  resetn,
    output locked,
    input  clk_in1
);

    clk_pll_clk_wiz inst (
        .cpu_clk  (cpu_clk),
        .sys_clk  (sys_clk),
        .resetn   (resetn),
        .locked   (locked),
        .clk_in1  (clk_in1)
    );

endmodule

module clk_pll_clk_wiz (
    output cpu_clk,
    output sys_clk,
    input  resetn,
    output locked,
    input  clk_in1
);

    wire clkfbout;
    wire clkfbout_buf;
    wire cpu_clk_unbuf;
    wire sys_clk_unbuf;
    MMCME2_ADV #(
        .BANDWIDTH            ("OPTIMIZED"),
        .CLKOUT4_CASCADE      ("FALSE"),
        .COMPENSATION         ("ZHOLD"),
        .STARTUP_WAIT         ("FALSE"),
        .DIVCLK_DIVIDE        (1),
        .CLKFBOUT_MULT_F      (15.000),
        .CLKFBOUT_PHASE       (0.000),
        .CLKFBOUT_USE_FINE_PS ("FALSE"),
        .CLKIN1_PERIOD        (20.000),
        .CLKIN2_PERIOD        (10.000),
        .CLKOUT0_DIVIDE_F     (22.500),
        .CLKOUT0_PHASE        (0.000),
        .CLKOUT0_DUTY_CYCLE   (0.500),
        .CLKOUT0_USE_FINE_PS  ("FALSE"),
        .CLKOUT1_DIVIDE       (10),
        .CLKOUT1_PHASE        (0.000),
        .CLKOUT1_DUTY_CYCLE   (0.500),
        .CLKOUT1_USE_FINE_PS  ("FALSE"),
        .CLKOUT2_DIVIDE       (10),
        .CLKOUT2_PHASE        (0.000),
        .CLKOUT2_DUTY_CYCLE   (0.500),
        .CLKOUT2_USE_FINE_PS  ("FALSE"),
        .CLKOUT3_DIVIDE       (1),
        .CLKOUT3_PHASE        (0.000),
        .CLKOUT3_DUTY_CYCLE   (0.500),
        .CLKOUT3_USE_FINE_PS  ("FALSE"),
        .CLKOUT4_DIVIDE       (1),
        .CLKOUT4_PHASE        (0.000),
        .CLKOUT4_DUTY_CYCLE   (0.500),
        .CLKOUT4_USE_FINE_PS  ("FALSE"),
        .CLKOUT5_DIVIDE       (1),
        .CLKOUT5_PHASE        (0.000),
        .CLKOUT5_DUTY_CYCLE   (0.500),
        .CLKOUT5_USE_FINE_PS  ("FALSE"),
        .CLKOUT6_DIVIDE       (1),
        .CLKOUT6_PHASE        (0.000),
        .CLKOUT6_DUTY_CYCLE   (0.500),
        .CLKOUT6_USE_FINE_PS  ("FALSE"),
        .REF_JITTER1          (0.010),
        .REF_JITTER2          (0.010)
    ) plle2_adv_inst (
        .CLKFBOUT             (clkfbout),
        .CLKFBOUTB            (),
        .CLKOUT0              (cpu_clk_unbuf),
        .CLKOUT0B             (),
        .CLKOUT1              (sys_clk_unbuf),
        .CLKOUT1B             (),
        .CLKOUT2              (),
        .CLKOUT2B             (),
        .CLKOUT3              (),
        .CLKOUT3B             (),
        .CLKOUT4              (),
        .CLKOUT5              (),
        .CLKOUT6              (),
        .CLKFBIN              (clkfbout_buf),
        .CLKIN1               (clk_in1),
        .CLKIN2               (1'b0),
        .CLKINSEL             (1'b1),
        .DADDR                (7'd0),
        .DCLK                 (1'b0),
        .DEN                  (1'b0),
        .DI                   (16'd0),
        .DWE                  (1'b0),
        .DO                   (),
        .DRDY                 (),
        .LOCKED               (locked),
        .CLKINSTOPPED         (),
        .CLKFBSTOPPED         (),
        .PSCLK                (1'b0),
        .PSEN                 (1'b0),
        .PSINCDEC             (1'b0),
        .PSDONE               (),
        .PWRDWN               (1'b0),
        .RST                  (~resetn)
    );

    BUFG clkf_buf (
        .I (clkfbout),
        .O (clkfbout_buf)
    );

    BUFG clkout1_buf (
        .I (cpu_clk_unbuf),
        .O (cpu_clk)
    );

    BUFG clkout2_buf (
        .I (sys_clk_unbuf),
        .O (sys_clk)
    );

endmodule
