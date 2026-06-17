module systolic #(
    parameter WIDTH = 16,
    parameter F_BITS = 8,
    parameter SYSTOLIC_ARRAY_WIDTH = 8
)
(
    input   clk,
    input   rst_n,

    input   [SYSTOLIC_ARRAY_WIDTH*WIDTH-1:0] x_data_in,
    input   [SYSTOLIC_ARRAY_WIDTH-1:0]       x_valid_in,

    output  reg [SYSTOLIC_ARRAY_WIDTH*WIDTH-1:0] z_data_out,
    output  reg [SYSTOLIC_ARRAY_WIDTH-1:0]       z_valid_out,

    input   [SYSTOLIC_ARRAY_WIDTH*WIDTH-1:0] w_data_in,
    input   [SYSTOLIC_ARRAY_WIDTH-1:0]       weight_valid_col,
    input   switch_in,

    /* verilator lint_off UNUSEDSIGNAL */
    /* verilator lint_off PINCONNECTEMPTY */
    input   [15:0]  col_num,
    input   col_num_valid,
    input   [15:0]  row_num,
    input   row_num_valid
);
    reg [SYSTOLIC_ARRAY_WIDTH-1:0] pe_enabled;
    reg [15:0] active_row_num;
    integer en_i;
    integer out_i;
    integer active_row_idx;

    always @(posedge clk or negedge rst_n) begin
        if(!rst_n) begin
            pe_enabled <= {SYSTOLIC_ARRAY_WIDTH{1'b1}};
            active_row_num <= SYSTOLIC_ARRAY_WIDTH;
        end else begin
            if(col_num_valid) begin
                for (en_i = 0; en_i < SYSTOLIC_ARRAY_WIDTH; en_i = en_i + 1) begin
                    pe_enabled[en_i] <= (en_i < col_num);
                end
            end
            if(row_num_valid) begin
                active_row_num <= row_num;
            end
        end
    end

    wire signed [WIDTH-1:0] input_link [0:SYSTOLIC_ARRAY_WIDTH-1][0:SYSTOLIC_ARRAY_WIDTH-1];
    wire                    input_valid_link [0:SYSTOLIC_ARRAY_WIDTH-1][0:SYSTOLIC_ARRAY_WIDTH-1];
    wire signed [WIDTH-1:0] weight_link [0:SYSTOLIC_ARRAY_WIDTH-1][0:SYSTOLIC_ARRAY_WIDTH-1];
    wire signed [WIDTH-1:0] psum_link [0:SYSTOLIC_ARRAY_WIDTH-1][0:SYSTOLIC_ARRAY_WIDTH-1];
    wire                    switch_link [0:SYSTOLIC_ARRAY_WIDTH-1][0:SYSTOLIC_ARRAY_WIDTH-1];

    genvar row;
    genvar col;
    generate
        for (row = 0; row < SYSTOLIC_ARRAY_WIDTH; row = row + 1) begin : pe_row
            for (col = 0; col < SYSTOLIC_ARRAY_WIDTH; col = col + 1) begin : pe_col
                wire signed [WIDTH-1:0] input_to_pe;
                wire                    input_valid_to_pe;
                wire signed [WIDTH-1:0] weight_to_pe;
                wire signed [WIDTH-1:0] psum_to_pe;
                wire                    switch_to_pe;

                if (col == 0) begin : left_edge
                    assign input_to_pe = x_data_in[row*WIDTH +: WIDTH];
                end else begin : from_left
                    assign input_to_pe = input_link[row][col-1];
                end

                if (row == 0) begin : valid_top_row
                    if (col == 0) begin : valid_origin
                        assign input_valid_to_pe = x_valid_in[0];
                    end else begin : valid_from_left
                        assign input_valid_to_pe = input_valid_link[row][col-1];
                    end
                end else begin : valid_from_top
                    assign input_valid_to_pe = input_valid_link[row-1][col];
                end

                if (row == 0) begin : top_edge
                    assign weight_to_pe = w_data_in[col*WIDTH +: WIDTH];
                end else begin : from_top
                    assign weight_to_pe = weight_link[row-1][col];
                end

                if (row == 0) begin : psum_top
                    assign psum_to_pe = {WIDTH{1'b0}};
                end else begin : psum_from_top
                    assign psum_to_pe = psum_link[row-1][col];
                end

                if (row == 0 && col == 0) begin : switch_origin
                    assign switch_to_pe = switch_in;
                end else if (row == 0) begin : switch_from_left
                    assign switch_to_pe = switch_link[row][col-1];
                end else begin : switch_from_top
                    assign switch_to_pe = switch_link[row-1][col];
                end

                pe #(
                    .WIDTH(WIDTH),
                    .F_BITS(F_BITS)
                ) pe_inst (
                    .clk            (clk),
                    .rst_n          (rst_n),
                    .input_in       (input_to_pe),
                    .input_out      (input_link[row][col]),
                    .input_in_valid (input_valid_to_pe),
                    .input_out_valid(input_valid_link[row][col]),
                    .weight_in      (weight_to_pe),
                    .weight_out     (weight_link[row][col]),
                    .weight_valid   (weight_valid_col[col]),
                    .psum_in        (psum_to_pe),
                    .psum_out       (psum_link[row][col]),
                    .switch_in      (switch_to_pe),
                    .switch_out     (switch_link[row][col]),
                    .pe_enabled     (pe_enabled[col]),
                    .overflow_out   ()
                );
            end
        end

    endgenerate

    always @(*) begin
        z_data_out = {SYSTOLIC_ARRAY_WIDTH*WIDTH{1'b0}};
        z_valid_out = {SYSTOLIC_ARRAY_WIDTH{1'b0}};
        if (active_row_num == 0) begin
            active_row_idx = 0;
        end else if (active_row_num > SYSTOLIC_ARRAY_WIDTH) begin
            active_row_idx = SYSTOLIC_ARRAY_WIDTH - 1;
        end else if (active_row_num == 1 && SYSTOLIC_ARRAY_WIDTH > 1) begin
            active_row_idx = 1;
        end else begin
            active_row_idx = active_row_num - 1;
        end

        for (out_i = 0; out_i < SYSTOLIC_ARRAY_WIDTH; out_i = out_i + 1) begin
            z_data_out[out_i*WIDTH +: WIDTH] = psum_link[active_row_idx][out_i];
            z_valid_out[out_i] = input_valid_link[active_row_idx][out_i];
        end
    end
/* verilator lint_on UNUSEDSIGNAL */
/* verilator lint_on PINCONNECTEMPTY */
endmodule
