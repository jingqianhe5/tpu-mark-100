module blk_mem_gen_0 (
    input  wire        clka,
    input  wire        ena,
    input  wire        wea,
    input  wire [18:0] addra,
    input  wire [7:0]  dina,
    input  wire        clkb,
    input  wire        enb,
    input  wire [18:0] addrb,
    output reg  [7:0]  doutb
);

    reg [7:0] mem [0:524287];

    always @(posedge clka) begin
        if (ena && wea) begin
            mem[addra] <= dina;
        end
    end

    always @(posedge clkb) begin
        if (enb) begin
            doutb <= mem[addrb];
        end
    end

endmodule
