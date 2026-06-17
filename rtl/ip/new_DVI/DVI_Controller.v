`timescale 1ns / 1ps

module DVI_Controller #
	(
        parameter WIDTH = 12,    // hdata and vdata width (in bits)
        parameter HSIZE = 800,   // Horizontal size of visible area
        parameter HFP = 856,     // Horizontal front porch
        parameter HSP = 976,     // Horizontal sync pulse
        parameter HMAX = 1040,   // Horizontal total size
        parameter VSIZE = 600,   // Vertical size of visible area
        parameter VFP = 637,     // Vertical front porch
        parameter VSP = 643,     // Vertical sync pulse
        parameter VMAX = 666,    // Vertical total size
        parameter HSPP = 1,      // Horizontal sync pulse polarity (1 for positive)
        parameter VSPP = 1,       // Vertical sync pulse polarity (1 for positive)
        
        // Ĭ��ͼƬ��С
        parameter H_PIC = 10'd256 ,     //ͼƬ����
        parameter W_PIC = 10'd240 ,     //ͼƬ����
        parameter PIC_SIZE= 19'd61440,   //ͼƬ���ظ���
        
        // ram�Ĵ�С
        parameter RAM_SIZE= 19'd61440   //ͼƬ���ظ���
	)(
        // Users to add ports here
        output wire video_clk,           // Video clock signal
        output wire video_hsync,               // Horizontal sync signal
        output wire video_vsync,               // Vertical sync signal
        output wire video_de,         // Data enable signal
        output wire [2:0] video_red,      // Red color signal (3 bits)
        output wire [2:0] video_green,    // Green color signal (3 bits)
        output wire [1:0] video_blue,      // Blue color signal (2 bits)
		// User ports ends
		// Do not modify the ports beyond this line

		// Global Clock Signal
		input wire  clk_50M,
		// Global Reset Signal. This Signal is Active LOW
		input wire  reset_btn,
        
        // signal control
        input wire        Control_write_en,
        input wire [31:0] Control_Address,
        input wire [7:0]  Control_Data
    );  
    reg [18:0] pic_ram_addr; 
    wire ram_oe_n; 
    wire [7:0] ram_data;
     /*д�����
    always @(posedge video_clk) begin
        if ((Control_write_n == 1'b1) && (Control_Address[18:0] < RAM_SIZE)) begin
            ram[Control_Address] <= Control_Data; // ����Ч��ַ��Χ��д������
        end
    end

    // ������
    always @(*) begin
        if (!ram_oe_n && (pic_ram_addr < RAM_SIZE)) begin
            ram_data = ram[pic_ram_addr]; // VGA SRAM ��ȡ����
        end else begin
            ram_data = 8'b0;
        end
    end
    */
    // color
    localparam RED = 8'b11100000, //��ɫ
    GREEN = 8'b00011100, //��ɫ
    BLUE = 8'b00000011, //��ɫ
    BLACK = 8'b00000000, // ��ɫ
    WHITE = 8'b11111111; // ��ɫ
    
    wire rd_en; // ram ��ʹ��

    reg  [31:0] pix_data;
    wire [31:0] pic_data;
    wire [31:0] pix_data_out;
    
    reg pic_valid; // ͼƬ��Ч�ź�
    
    wire resten;
    
    assign resten = reset_btn;

    reg [WIDTH-1:0] hdata = 0;       // Horizontal position counter
	reg [WIDTH-1:0] vdata = 0;       // Vertical position counter
	
    always @(posedge clk_50M) begin
        if (hdata == (HMAX - 1))      // If horizontal counter reaches max
            hdata <= 0;               // Reset horizontal counter
        else
            hdata <= hdata + 1;       // Increment horizontal counter
    end

    // Vertical counter (vdata) logic
    always @(posedge clk_50M) begin
        if (hdata == (HMAX - 1)) begin
            if (vdata == (VMAX - 1))  // If vertical counter reaches max
                vdata <= 0;           // Reset vertical counter
            else
                vdata <= vdata + 1;   // Increment vertical counter
        end
    end
    
    //pix_data_out:���VGA��ʾͼ������
    assign pix_data_out = (pic_valid == 1'b1) ? pic_data : pix_data;
    
    // Horizontal sync signal generation (video_hsync)
    assign video_clk = clk_50M; // Example: using input clock as video clock
    assign video_hsync = ((hdata >= HFP) && (hdata < HSP)) ? HSPP : !HSPP;
    assign video_vsync = ((vdata >= VFP) && (vdata < VSP)) ? VSPP : !VSPP;
    assign video_de = ((hdata < HSIZE) & (vdata < VSIZE));  
    
    // ��ɫѡ��
    assign video_red = (video_de) ? pix_data_out[7:5] : 3'b0;
    
    assign video_green = (video_de) ? pix_data_out[4:2] : 3'b0;
    
    assign video_blue = (video_de) ? pix_data_out[1:0] : 2'b0;
    
    // pix_data:������ص�ɫ����Ϣ,���ݵ�ǰ���ص�����ָ����ǰ���ص���ɫ����
    // ������ɫ
    always@(posedge clk_50M or negedge resten)
    if(resten == 1'b0)
    pix_data <= 8'd0;
    else if((hdata >= 0) && (hdata < (HSIZE/3)*1))
    pix_data <= WHITE;
    else if((hdata >= (HSIZE/3)*1) && (hdata < (HSIZE/3)*2))
    pix_data <= WHITE;
    else if((hdata >= (HSIZE/3)*2) && (hdata < (HSIZE/3)*3))
    pix_data <= WHITE;
    else
    pix_data <= WHITE;
 
    assign ram_oe_n =  ~((((hdata >= (((HSIZE - H_PIC)/2) - 1'b1))
    && (hdata < (((HSIZE - H_PIC)/2) + H_PIC - 1'b1)))
    &&((vdata >= ((VSIZE - W_PIC)/2))
    && ((vdata < (((VSIZE - W_PIC)/2) + W_PIC))))));
    
    //pic_ram_addr : ��RAM��ַ �����ַ
    always@(posedge clk_50M or negedge resten)
        if(resten == 1'b0)
            pic_ram_addr <= 20'd0;
        else if(pic_ram_addr == (PIC_SIZE - 1'b1))
            pic_ram_addr <= 20'd0;
        else if(ram_oe_n == 1'b0)
            pic_ram_addr <= pic_ram_addr + 1'b1;
    
    //pic_valid:ͼƬ������Ч�ź�
    always@(posedge clk_50M or negedge resten)
    if(resten == 1'b0)
        pic_valid <= 1'b0;
    else
        pic_valid <= ~ram_oe_n;

    //ֱ�Ӷ�ȡ������
    assign pic_data = ram_data;
        
    blk_mem_gen_0 vga_ram (
        .clka(clk_50M),                     // input wire clka (RAM Port A clock)
        .ena(Control_write_en),             // input wire ena (RAM Port A enable, now from Control_write_en)
        .wea(Control_write_en),             // input wire [0 : 0] wea (RAM Port A write enable, same as ena)
        .addra(Control_Address[18:0]),      // input wire [18 : 0] addra (RAM Port A address, full byte address)
        .dina(Control_Data),                // input wire [7 : 0] dina (RAM Port A data input)
 
        .clkb(clk_50M),                     // input wire clkb (RAM Port B clock)
        .enb(pic_valid),                    // input wire enb (RAM Port B enable)
        .addrb(pic_ram_addr),               // input wire [18 : 0] addrb (RAM Port B address for VGA read)
        .doutb(ram_data)                    // output wire [7 : 0] doutb (RAM Port B data output for VGA)
    );
endmodule
