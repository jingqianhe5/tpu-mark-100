module tpu_isa_confreg #(
    parameter SYSTOLIC_ARRAY_WIDTH = 8
) (
    input  wire        clk,
    input  wire        rst_n,

    input  wire        ins_valid,
    input  wire [31:0] ins,

    input  wire        ub_wr_ext_valid,
    input  wire [15:0] ub_wr_ext_addr,
    input  wire [15:0] ub_wr_ext_data,

    input  wire [15:0] learn_rate_in,
    input  wire [15:0] vpu_factor_in,
    input  wire [15:0] two_div_N_in,

    output wire [15:0] vpu_data_out_0,
    output wire [15:0] vpu_data_out_1,
    output wire [15:0] vpu_data_out_2,
    output wire [15:0] vpu_data_out_3,
    output wire [15:0] vpu_data_out_4,
    output wire [15:0] vpu_data_out_5,
    output wire [15:0] vpu_data_out_6,
    output wire [15:0] vpu_data_out_7,
    output wire        vpu_data_valid_out_0,
    output wire        vpu_data_valid_out_1,
    output wire        vpu_data_valid_out_2,
    output wire        vpu_data_valid_out_3,
    output wire        vpu_data_valid_out_4,
    output wire        vpu_data_valid_out_5,
    output wire        vpu_data_valid_out_6,
    output wire        vpu_data_valid_out_7,

    output wire [15:0] sys_data_out_0,
    output wire [15:0] sys_data_out_1,
    output wire [15:0] sys_data_out_2,
    output wire [15:0] sys_data_out_3,
    output wire [15:0] sys_data_out_4,
    output wire [15:0] sys_data_out_5,
    output wire [15:0] sys_data_out_6,
    output wire [15:0] sys_data_out_7,
    output wire        sys_valid_out_0,
    output wire        sys_valid_out_1,
    output wire        sys_valid_out_2,
    output wire        sys_valid_out_3,
    output wire        sys_valid_out_4,
    output wire        sys_valid_out_5,
    output wire        sys_valid_out_6,
    output wire        sys_valid_out_7,

    output wire [15:0] ub_rd_input_data_out_0,
    output wire [15:0] ub_rd_input_data_out_1,
    output wire        ub_rd_input_valid_out_0,
    output wire        ub_rd_input_valid_out_1,

    output wire [15:0] ub_rd_weight_data_out_0,
    output wire [15:0] ub_rd_weight_data_out_1,
    output wire        ub_rd_weight_valid_out_0,
    output wire        ub_rd_weight_valid_out_1,

    output wire [15:0] ub_rd_bias_data_out_0,
    output wire [15:0] ub_rd_bias_data_out_1,
    output wire [15:0] ub_rd_Y_data_out_0,
    output wire [15:0] ub_rd_Y_data_out_1,
    output wire [15:0] ub_rd_H_data_out_0,
    output wire [15:0] ub_rd_H_data_out_1,

    output wire [15:0] ub_rd_col_size_out,
    output wire        ub_rd_col_size_valid_out
);

    wire [15:0] ub_wr_host_data_in_0;
    wire [15:0] ub_wr_host_data_in_1;
    wire [15:0] ub_wr_host_addr_in_0;
    wire [15:0] ub_wr_host_addr_in_1;
    wire        ub_wr_host_valid_in_0;
    wire        ub_wr_host_valid_in_1;
    wire [15:0] ub_wr_host_data_mux_1;
    wire [15:0] ub_wr_host_addr_mux_1;
    wire        ub_wr_host_valid_mux_1;

    wire        ub_wr_addr_start_in;
    wire [15:0] ub_wr_addr_in;
    wire        ub_wr_accumulate_in;
    wire        ub_grad_addr_start_in;
    wire [15:0] ub_grad_addr_in;

    wire        ub_rd_start_in;
    wire        ub_rd_transpose_in;
    wire [8:0]  ub_ptr_select_in;
    wire [15:0] ub_rd_addr_in;
    wire [15:0] ub_rd_row_size_in;
    wire [15:0] ub_rd_col_size_in;

    wire [3:0]  vpu_mode;
    wire        switch_in;

    assign ub_wr_host_data_mux_1 = ub_wr_ext_valid ? ub_wr_ext_data : ub_wr_host_data_in_1;
    assign ub_wr_host_addr_mux_1 = ub_wr_ext_valid ? ub_wr_ext_addr : ub_wr_host_addr_in_1;
    assign ub_wr_host_valid_mux_1 = ub_wr_ext_valid | ub_wr_host_valid_in_1;

    decode u_decode (
        .clk(clk),
        .rst_n(rst_n),

        .ins_valid(ins_valid),
        .ins(ins),

        .ub_wr_host_data_in_0(ub_wr_host_data_in_0),
        .ub_wr_host_data_in_1(ub_wr_host_data_in_1),
        .ub_wr_host_addr_in_0(ub_wr_host_addr_in_0),
        .ub_wr_host_addr_in_1(ub_wr_host_addr_in_1),
        .ub_wr_host_valid_in_0(ub_wr_host_valid_in_0),
        .ub_wr_host_valid_in_1(ub_wr_host_valid_in_1),
        .ub_wr_addr_start_in(ub_wr_addr_start_in),
        .ub_wr_addr_in(ub_wr_addr_in),
        .ub_wr_accumulate_in(ub_wr_accumulate_in),
        .ub_grad_addr_start_in(ub_grad_addr_start_in),
        .ub_grad_addr_in(ub_grad_addr_in),

        .ub_rd_start_in(ub_rd_start_in),
        .ub_rd_transpose_in(ub_rd_transpose_in),
        .ub_ptr_select_in(ub_ptr_select_in),
        .ub_rd_addr_in(ub_rd_addr_in),
        .ub_rd_row_size_in(ub_rd_row_size_in),
        .ub_rd_col_size_in(ub_rd_col_size_in),

        .vpu_mode(vpu_mode),
        .switch_in(switch_in)
    );

    tpu #(
        .SYSTOLIC_ARRAY_WIDTH(SYSTOLIC_ARRAY_WIDTH)
    ) u_tpu (
        .clk(clk),
        .rst_n(rst_n),

        .ub_wr_host_data_in_0(ub_wr_host_data_in_0),
        .ub_wr_host_data_in_1(ub_wr_host_data_mux_1),
        .ub_wr_host_addr_in_0(ub_wr_host_addr_in_0),
        .ub_wr_host_addr_in_1(ub_wr_host_addr_mux_1),
        .ub_wr_host_valid_in_0(ub_wr_host_valid_in_0),
        .ub_wr_host_valid_in_1(ub_wr_host_valid_mux_1),

        .ub_wr_addr_start_in(ub_wr_addr_start_in),
        .ub_wr_addr_in(ub_wr_addr_in),
        .ub_wr_accumulate_in(ub_wr_accumulate_in),
        .ub_grad_addr_start_in(ub_grad_addr_start_in),
        .ub_grad_addr_in(ub_grad_addr_in),

        .ub_rd_start_in(ub_rd_start_in),
        .ub_rd_transpose_in(ub_rd_transpose_in),
        .ub_ptr_select_in(ub_ptr_select_in),
        .ub_rd_addr_in(ub_rd_addr_in),
        .ub_rd_row_size_in(ub_rd_row_size_in),
        .ub_rd_col_size_in(ub_rd_col_size_in),

        .learn_rate_in(learn_rate_in),

        .vpu_mode(vpu_mode),
        .switch_in(switch_in),
        .vpu_factor_in(vpu_factor_in),
        .two_div_N_in(two_div_N_in),

        .vpu_data_out_0(vpu_data_out_0),
        .vpu_data_out_1(vpu_data_out_1),
        .vpu_data_out_2(vpu_data_out_2),
        .vpu_data_out_3(vpu_data_out_3),
        .vpu_data_out_4(vpu_data_out_4),
        .vpu_data_out_5(vpu_data_out_5),
        .vpu_data_out_6(vpu_data_out_6),
        .vpu_data_out_7(vpu_data_out_7),
        .vpu_data_valid_out_0(vpu_data_valid_out_0),
        .vpu_data_valid_out_1(vpu_data_valid_out_1),
        .vpu_data_valid_out_2(vpu_data_valid_out_2),
        .vpu_data_valid_out_3(vpu_data_valid_out_3),
        .vpu_data_valid_out_4(vpu_data_valid_out_4),
        .vpu_data_valid_out_5(vpu_data_valid_out_5),
        .vpu_data_valid_out_6(vpu_data_valid_out_6),
        .vpu_data_valid_out_7(vpu_data_valid_out_7),

        .sys_data_out_0(sys_data_out_0),
        .sys_data_out_1(sys_data_out_1),
        .sys_data_out_2(sys_data_out_2),
        .sys_data_out_3(sys_data_out_3),
        .sys_data_out_4(sys_data_out_4),
        .sys_data_out_5(sys_data_out_5),
        .sys_data_out_6(sys_data_out_6),
        .sys_data_out_7(sys_data_out_7),
        .sys_valid_out_0(sys_valid_out_0),
        .sys_valid_out_1(sys_valid_out_1),
        .sys_valid_out_2(sys_valid_out_2),
        .sys_valid_out_3(sys_valid_out_3),
        .sys_valid_out_4(sys_valid_out_4),
        .sys_valid_out_5(sys_valid_out_5),
        .sys_valid_out_6(sys_valid_out_6),
        .sys_valid_out_7(sys_valid_out_7),

        .ub_rd_input_data_out_0(ub_rd_input_data_out_0),
        .ub_rd_input_data_out_1(ub_rd_input_data_out_1),
        .ub_rd_input_valid_out_0(ub_rd_input_valid_out_0),
        .ub_rd_input_valid_out_1(ub_rd_input_valid_out_1),

        .ub_rd_weight_data_out_0(ub_rd_weight_data_out_0),
        .ub_rd_weight_data_out_1(ub_rd_weight_data_out_1),
        .ub_rd_weight_valid_out_0(ub_rd_weight_valid_out_0),
        .ub_rd_weight_valid_out_1(ub_rd_weight_valid_out_1),

        .ub_rd_bias_data_out_0(ub_rd_bias_data_out_0),
        .ub_rd_bias_data_out_1(ub_rd_bias_data_out_1),
        .ub_rd_Y_data_out_0(ub_rd_Y_data_out_0),
        .ub_rd_Y_data_out_1(ub_rd_Y_data_out_1),
        .ub_rd_H_data_out_0(ub_rd_H_data_out_0),
        .ub_rd_H_data_out_1(ub_rd_H_data_out_1),

        .ub_rd_col_size_out(ub_rd_col_size_out),
        .ub_rd_col_size_valid_out(ub_rd_col_size_valid_out)
    );

endmodule
