(* use_dsp = "no" *)
module fxp_mul # (
    parameter WIIA = 8,
    parameter WIFA = 8,
    parameter WIIB = 8,
    parameter WIFB = 8,
    parameter WOI  = 8,
    parameter WOF  = 8,
    parameter ROUND= 1
)(
    input  wire [WIIA+WIFA-1:0] ina,
    input  wire [WIIB+WIFB-1:0] inb,
    output wire [WOI +WOF -1:0] out,
    output wire                 overflow
);

localparam WRI = WIIA + WIIB;
localparam WRF = WIFA + WIFB;

function automatic [WRI+WRF-1:0] mul_u;
    input [WIIA+WIFA-1:0] a;
    input [WIIB+WIFB-1:0] b;
    integer i;
    reg [WRI+WRF-1:0] acc;
    reg [WRI+WRF-1:0] ext_a;
    begin
        acc = { (WRI+WRF){1'b0} };
        ext_a = {{(WRI+WRF-(WIIA+WIFA)){1'b0}}, a};
        for (i = 0; i < WIIB+WIFB; i = i + 1) begin
            if (b[i]) begin
                acc = acc + (ext_a << i);
            end
        end
        mul_u = acc;
    end
endfunction

wire a_neg = ina[WIIA+WIFA-1];
wire b_neg = inb[WIIB+WIFB-1];
wire [WIIA+WIFA-1:0] a_mag = a_neg ? (~ina + {{(WIIA+WIFA-1){1'b0}},1'b1}) : ina;
wire [WIIB+WIFB-1:0] b_mag = b_neg ? (~inb + {{(WIIB+WIFB-1){1'b0}},1'b1}) : inb;
wire signed [WRI+WRF-1:0] res_u = $signed(mul_u(a_mag, b_mag));
wire signed [WRI+WRF-1:0] res = (a_neg ^ b_neg) ? -res_u : res_u;

fxp_zoom # (
    .WII      ( WRI            ),
    .WIF      ( WRF            ),
    .WOI      ( WOI            ),
    .WOF      ( WOF            ),
    .ROUND    ( ROUND          )
) res_zoom (
    .in       ( $unsigned(res) ),
    .out      ( out            ),
    .overflow ( overflow       )
);

endmodule
