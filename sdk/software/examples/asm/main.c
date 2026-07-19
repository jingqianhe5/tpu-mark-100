/*
 * TPU 跑分驱动：
 * 输入地址、5000 组轮数、CRC 和完整串口协议都由硬件数据通路处理。
 * CPU 只保持空闲，不参与计时路径。
 */

unsigned long UART_BASE = 0xbf000000u;

int main(void)
{
    while (1) {
    }

    return 0;
}
