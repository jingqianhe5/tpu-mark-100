/******************************************************************************
*
* Module: flash_reader_32bit
* 
* Description: 一个用于异步并行 NOR Flash 的32位页模式读取控制器。
*              - 通过一次页模式操作高效读取两个连续的16位字。
*              - 用户提供对齐的起始地址。
*
* Author: 
*
******************************************************************************/
module flash_reader_async #(
    // -- 参数定义 --
    // 假设系统时钟为 50MHz (周期为 20ns)
    parameter CLK_FREQ_HZ = 50_000_000,
    // Flash 首次访问时间 t_AVQV = 75ns
    parameter T_ACCESS_NS_FIRST = 75,
    // Flash 页内访问时间 t_APA = 25ns
    parameter T_ACCESS_NS_PAGE = 25,
    
    // -- 计算等待周期数 --
    // 首次等待周期
    parameter WAIT_CYCLES_FIRST = 4,
    // 页模式等待周期
    parameter WAIT_CYCLES_PAGE  = 2
) (
    // -- 用户接口 --
    input                           clk,            // 系统时钟
    input                           rst_n,          // 异步复位，低有效

    input                           read_req, // 32位读请求
    input      [22:0]               addr_in,        // 待读取的起始地址 (32位对齐)

    output reg [31:0]               data_out, // 读取出的32位数据
    output reg                      data_valid,     // 数据有效信号
    output reg                      busy,           // 控制器忙信号

    // -- Flash 物理接口 --
    output reg [22:0]                flash_a,
    inout      [15:0]                flash_d,
    output reg                       flash_rp_n,
    output reg                       flash_vpen,
    output reg                       flash_ce_n,
    output reg                       flash_oe_n,
    output reg                       flash_we_n,
    output reg                       flash_byte_n
);

    // FSM 状态定义
    localparam S_IDLE          = 4'b0000;
    localparam S_SETUP_FIRST   = 4'b0001;
    localparam S_WAIT_FIRST    = 4'b0010;
    localparam S_READ_FIRST    = 4'b0011;
    localparam S_WAIT_SECOND   = 4'b0100;
    localparam S_READ_SECOND   = 4'b0101;
    localparam S_HOLD          = 4'b0110;

    // FSM 状态寄存器
    reg [3:0] current_state, next_state;

    // 等待计数器
    reg [$clog2(WAIT_CYCLES_FIRST)-1:0] wait_counter;

    // 内部数据寄存器
    reg [22:0] addr_reg;
    reg [15:0] data_low_16bit;
    reg [15:0] data_high_16bit;

    // --- 状态机组合逻辑 ---
    always @(*) begin
        next_state = current_state;
        case (current_state)
            S_IDLE: begin
                if (read_req) begin
                    next_state = S_SETUP_FIRST;
                end
            end
            S_SETUP_FIRST: begin
                next_state = S_WAIT_FIRST;
            end
            S_WAIT_FIRST: begin
                if (wait_counter == WAIT_CYCLES_FIRST - 1) begin
                    next_state = S_READ_FIRST;
                end
            end
            S_READ_FIRST: begin
                next_state = S_WAIT_SECOND;
            end
            S_WAIT_SECOND: begin
                if (wait_counter == WAIT_CYCLES_PAGE - 1) begin
                    next_state = S_READ_SECOND;
                end
            end
            S_READ_SECOND: begin
                next_state = S_HOLD;
            end
            S_HOLD: begin
                next_state = S_IDLE;
            end
            default: begin
                next_state = S_IDLE;
            end
        endcase
    end

    // --- 状态机时序逻辑与信号控制 ---
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            // 复位状态
            current_state   <= S_IDLE;
            wait_counter    <= 0;
            addr_reg        <= 0;
            data_low_16bit  <= 0;
            data_high_16bit <= 0;

            // 初始化 Flash 控制信号
            flash_a         <= 0;
            flash_ce_n      <= 1'b1; // 非活动
            flash_oe_n      <= 1'b1; // 非活动
            flash_we_n      <= 1'b1; // 读操作，始终为高
            flash_rp_n      <= 1'b1; // 正常工作
            flash_byte_n    <= 1'b1; // 16位模式
            flash_vpen      <= 1'b1; // 禁止写保护
            
            // 初始化用户接口
            data_out  <= 32'h0;
            data_valid      <= 1'b0;
            busy            <= 1'b0;
        end 
        else begin
            current_state <= next_state;
            data_valid <= 1'b0; // 默认清除 data_valid

            case (current_state)
                S_IDLE: begin
                    busy <= 1'b0;
                    flash_ce_n <= 1'b1;
                    flash_oe_n <= 1'b1;
                    if (read_req) begin
                        addr_reg <= addr_in; // 锁存起始地址
                        busy     <= 1'b1;
                    end
                end
                
                S_SETUP_FIRST: begin
                    flash_a    <= addr_reg; // 驱动起始地址
                    flash_ce_n <= 1'b0;     // 拉低片选和读使能，并保持
                    flash_oe_n <= 1'b0;
                    wait_counter <= 0;
                end

                S_WAIT_FIRST: begin
                    if (wait_counter < WAIT_CYCLES_FIRST - 1) begin
                        wait_counter <= wait_counter + 1;
                    end
                end

                S_READ_FIRST: begin
                    data_low_16bit <= flash_d;  // **锁存第一个16位数据**
                    flash_a <= addr_reg + 2;    // **立即更新地址到下一个字**
                    wait_counter <= 0;          // 复位计数器用于下一次等待
                end

                S_WAIT_SECOND: begin
                    if (wait_counter < WAIT_CYCLES_PAGE - 1) begin
                        wait_counter <= wait_counter + 1;
                    end
                end
                
                S_READ_SECOND: begin
                    data_high_16bit <= flash_d; // **锁存第二个16位数据**
                end

                S_HOLD: begin
                    // **拼接数据并输出**
                    data_out <= {data_high_16bit, data_low_16bit};
                    data_valid     <= 1'b1;    // 数据有效脉冲
                    flash_ce_n     <= 1'b1;    // 结束读周期，拉高控制信号
                    flash_oe_n     <= 1'b1;
                end
            endcase
        end
    end
    
    // --- Flash 数据总线控制 ---
    // 读操作，FPGA 永远不驱动数据总线
    //what？the？fack？
    //assign flash_d = 16'hZZZZ;

endmodule

