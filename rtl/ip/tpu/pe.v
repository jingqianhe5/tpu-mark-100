module pe #(
    parameter WIDTH = 16,
    parameter F_BITS = 8
)
(
    input clk,
    input rst_n,
    //输入矩阵
    input       signed [WIDTH-1:0]   input_in,
    output  reg signed [WIDTH-1:0]   input_out,
    input                            input_in_valid,  //输入有效信号 
    output  reg                      input_out_valid, //输出有效信号 
    //权重矩阵
    input       signed [WIDTH-1:0]   weight_in,
    output  reg signed [WIDTH-1:0]   weight_out,
    input                            weight_valid,//权重有效信号
    //结果
    input       signed [WIDTH-1:0]   psum_in,
    output  reg signed [WIDTH-1:0]   psum_out,
    //双缓冲切换信号
    input                            switch_in,
    output  reg                      switch_out,
    //全局有效信号（不使用的时候节省功耗）
    input                            pe_enabled,
    //溢出信号
    output  reg                      overflow_out
);
    reg [WIDTH-1:0] weight_in_active;//用来计算的权重寄存器
    reg [WIDTH-1:0] weight_in_buffer; // 权重输入缓冲寄存器(双缓冲)
    
    wire signed [WIDTH-1:0] mul_result;//乘法结果
    wire mul_overflow;//乘法溢出信号
    wire add_overflow;//加法溢出信号

    wire signed [WIDTH-1:0] result;//总体计算结果

    wire signed [WIDTH-1:0] weight_for_compute;

    assign weight_for_compute = switch_in ? weight_in_buffer : weight_in_active;

    fxp_mul #(
        .WIIA   (WIDTH - F_BITS),
        .WIFA   (F_BITS),
        .WIIB   (WIDTH - F_BITS),
        .WIFB   (F_BITS),
        .WOI    (WIDTH - F_BITS),
        .WOF    (F_BITS)
    ) mult (
        .ina(input_in),
        .inb(weight_for_compute),
        .out(mul_result),
        .overflow(mul_overflow)
    );

   fxp_add #(
        .WIIA   (WIDTH - F_BITS),
        .WIFA   (F_BITS),
        .WIIB   (WIDTH - F_BITS),
        .WIFB   (F_BITS),
        .WOI    (WIDTH - F_BITS),
        .WOF    (F_BITS)
    ) adder (
        .ina(mul_result),
        .inb(psum_in),
        .out(result),
        .overflow(add_overflow)
    );

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n||!pe_enabled)begin
            input_out           <= {WIDTH{1'b0}};
            weight_in_buffer    <= {WIDTH{1'b0}};
            weight_in_active    <= {WIDTH{1'b0}};
            input_out_valid     <= 1'b0;
            weight_out          <= {WIDTH{1'b0}};
            switch_out          <= 1'b0;
            psum_out            <= {WIDTH{1'b0}};
            overflow_out        <= 1'b0;
        end
        else begin
            input_out_valid <= input_in_valid;
            switch_out <= switch_in;
            //双缓冲权重切换器
            if(switch_in) begin
                weight_in_active <= weight_in_buffer;
            end
            //权重更新逻辑
            if(weight_valid) begin
                weight_in_buffer <= weight_in;
                weight_out <= weight_in;
            end
            else begin
                weight_out <= 0;
            end
            if(input_in_valid)begin
                input_out <= input_in;
                psum_out <= result;
                overflow_out <= overflow_out | (mul_overflow | add_overflow);
            end
            else begin
                input_out <= 0;
                psum_out <= 0;
            end
        end
    end
endmodule
