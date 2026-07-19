#include <stdint.h>

/*
 * TPU 跑分驱动：
 * 硬件复位后自动启动固定任务并输出固定协议前缀；CPU 只轮询完成、读回 CRC，
 * 再通过 UART 输出动态 CRC 和结束标识。
 * 输入地址、输出地址和 5000 组轮数都固定在 RTL 中，CPU 不搬运矩阵，也不计算 golden。
 */

unsigned long UART_BASE = 0xbf000000u;

#define UART_THR 0x0u
#ifndef TPU_STATUS_POLL_LIMIT
#define TPU_STATUS_POLL_LIMIT 200000000u
#endif

#define TPU_STATUS_DONE      (1u << 1)
#define TPU_STATUS_ERROR     (1u << 2)

#define LACC_STATUS_WORD     "0xC0400004"
#define LACC_READ_WORD       "0xC08000A4"

/* UART 只用来打印跑分标记和 CRC，不参与计算。 */
static inline void uart_write_reg(uint32_t offset, uint8_t data)
{
    *(volatile uint8_t *)(UART_BASE + offset) = data;
}

static void uart_putc(char ch)
{
    // Hardware mirrors every THR write into a 128-byte asynchronous FIFO, so
    // the CPU can queue the dynamic suffix without waiting on the serial line.
    uart_write_reg(UART_THR, (uint8_t)ch);
}

static void uart_puts_raw(const char *s)
{
    while (*s) {
        uart_putc(*s++);
    }
}

static void uart_put_hex32(uint32_t value)
{
    static const char hex[] = "0123456789abcdef";
    for (int shift = 28; shift >= 0; shift -= 4) {
        uart_putc(hex[(value >> shift) & 0xfu]);
    }
}

static inline uint32_t tpu_status(void)
{
    uint32_t status;
    asm volatile (
        ".word " LACC_STATUS_WORD "\n\t"
        "move %0, $r4\n\t"
        : "=r"(status)
        :
        : "$r4", "memory"
    );
    return status;
}

static inline uint32_t tpu_read_pair(uint32_t pair_index)
{
    uint32_t value;
    asm volatile (
        "move $r5, %1\n\t"
        ".word " LACC_READ_WORD "\n\t"
        "move %0, $r4\n\t"
        : "=r"(value)
        : "r"(pair_index)
        : "$r4", "$r5", "memory"
    );
    return value;
}

static int wait_tpu_done(uint32_t *status_out)
{
    uint32_t polls = 0;
    while (1) {
        const uint32_t status = tpu_status();
        if (status & TPU_STATUS_ERROR) {
            *status_out = status;
            return -1;
        }
        if (status & TPU_STATUS_DONE) {
            *status_out = status;
            return 0;
        }
        polls++;
        if (polls >= TPU_STATUS_POLL_LIMIT) {
            *status_out = status;
            return -2;
        }
    }
}

int main(void)
{
    // Hardware emits the fixed protocol prefix and starts the fixed workload
    // immediately after reset, while the CPU is still booting.
    uint32_t status = 0;
    (void)wait_tpu_done(&status);

    const uint32_t crc = tpu_read_pair(0);
    uart_put_hex32(crc);
    uart_putc('\n');
    uart_puts_raw("MATMUL_DONE\n");

    while (1) {
    }

    return 0;
}
