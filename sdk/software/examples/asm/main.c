#include <stdint.h>

/*
 * TPU 跑分驱动：
 * CPU 只负责通过 LACC 清状态、启动 TPU、轮询完成、读回硬件 CRC 并通过 UART 打印。
 * 输入地址、输出地址和 5000 组轮数都固定在 RTL 中，CPU 不搬运矩阵，也不计算 golden。
 */

unsigned long UART_BASE = 0xbf000000u;

#define UART_THR 0x0u
#define UART_IER 0x1u
#define UART_FCR 0x2u
#define UART_LCR 0x3u
#define UART_LSR 0x5u
#define UART_LSR_THRE 0x20u
#define UART_LCR_DLAB 0x80u
#define UART_LCR_8N1  0x03u

#ifndef UART_DIVISOR_115200
#define UART_DIVISOR_115200 41u
#endif

#ifndef TPU_STATUS_POLL_LIMIT
#define TPU_STATUS_POLL_LIMIT 200000000u
#endif

#define TPU_STATUS_DONE      (1u << 1)
#define TPU_STATUS_ERROR     (1u << 2)

#define LACC_START_WORD      "0xC00000A4"
#define LACC_STATUS_WORD     "0xC0400004"
#define LACC_READ_WORD       "0xC08000A4"
#define LACC_CLEAR_WORD      "0xC0C00004"

/* UART 只用来打印跑分标记和 CRC，不参与计算。 */
static inline uint8_t uart_read_reg(uint32_t offset)
{
    return *(volatile uint8_t *)(UART_BASE + offset);
}

static inline void uart_write_reg(uint32_t offset, uint8_t data)
{
    *(volatile uint8_t *)(UART_BASE + offset) = data;
}

static void uart_init_115200(void)
{
    uart_write_reg(UART_LCR, UART_LCR_DLAB);
    uart_write_reg(UART_THR, (uint8_t)(UART_DIVISOR_115200 & 0xffu));
    uart_write_reg(UART_IER, (uint8_t)((UART_DIVISOR_115200 >> 8) & 0xffu));
    uart_write_reg(UART_LCR, UART_LCR_8N1);
    uart_write_reg(UART_IER, 0x00u);
    uart_write_reg(UART_FCR, 0x00u);
}

static void uart_putc(char ch)
{
    while ((uart_read_reg(UART_LSR) & UART_LSR_THRE) == 0) {
    }
    uart_write_reg(UART_THR, (uint8_t)ch);
}

static void uart_puts_raw(const char *s)
{
    while (*s) {
        uart_putc(*s++);
    }
}

static void uart_puts_fifo_fit(const char *s)
{
    while (*s) {
        uart_write_reg(UART_THR, (uint8_t)*s++);
    }
}

static void uart_put_hex32(uint32_t value)
{
    static const char hex[] = "0123456789abcdef";
    for (int shift = 28; shift >= 0; shift -= 4) {
        uart_putc(hex[(value >> shift) & 0xfu]);
    }
}

static inline uint32_t tpu_start(void)
{
    uint32_t status;
    asm volatile (
        "move $r5, %1\n\t"
        ".word " LACC_START_WORD "\n\t"
        "move %0, $r4\n\t"
        : "=r"(status)
        : "r"(0u)
        : "$r4", "$r5", "memory"
    );
    return status;
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

static inline uint32_t tpu_clear(void)
{
    uint32_t status;
    asm volatile (
        ".word " LACC_CLEAR_WORD "\n\t"
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
    uart_init_115200();
    uart_puts_fifo_fit("MATMUL_START\n");

    uint32_t status = tpu_clear();

    if ((status & TPU_STATUS_ERROR) == 0) {
        status = tpu_start();
    }
    if ((status & TPU_STATUS_ERROR) == 0) {
        (void)wait_tpu_done(&status);
    }

    const uint32_t crc = tpu_read_pair(0);
    uart_puts_raw("MATMUL_CRC32=");
    uart_put_hex32(crc);
    uart_putc('\n');
    uart_puts_raw("MATMUL_DONE\n");

    while (1) {
    }

    return 0;
}
