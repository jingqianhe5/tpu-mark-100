#include <stdint.h>
#include <stdio.h>

unsigned long UART_BASE = 0xbf000000;

#define UART_RBR 0x0u
#define UART_THR 0x0u
#define UART_LSR 0x5u
#define UART_LSR_DR 0x01u
#define UART_LSR_THRE 0x20u

#ifndef MATMUL_GROUP_NUM
#define MATMUL_GROUP_NUM 5000u
#endif

#ifndef MATMUL_DEBUG
#define MATMUL_DEBUG 0
#endif

#ifndef TPU_STATUS_POLL_LIMIT
#define TPU_STATUS_POLL_LIMIT 200000000u
#endif

#ifndef MATMUL_SRC_BASE
#define MATMUL_SRC_BASE      0x1c400000u
#endif
#ifndef MATMUL_RESULT_BASE
#define MATMUL_RESULT_BASE   (MATMUL_SRC_BASE + (MATMUL_GROUP_NUM * 128u))
#endif
#define MATMUL_RESULT_BYTES  (MATMUL_GROUP_NUM * 192u)

#define MATMUL_TPU_START_PC      0x1c00b000u
#define MATMUL_TPU_START_PC_UC   0xbc00b000u
#define MATMUL_TPU_PROGRAM_WORDS 5u

#define TPU_OP_SET_SRC_BASE 0x1u
#define TPU_OP_SET_DST_BASE 0x2u
#define TPU_OP_SET_GROUPS   0x3u
#define TPU_OP_RUN          0x4u
#define TPU_OP_END          0xfu

#define TPU_PROGRAM_WORD(op, payload) \
    ((((uint32_t)(op) & 0xfu) << 28) | ((uint32_t)(payload) & 0x0fffffffu))

static const uint32_t matmul_tpu_program[MATMUL_TPU_PROGRAM_WORDS] = {
    TPU_PROGRAM_WORD(TPU_OP_SET_SRC_BASE, MATMUL_SRC_BASE),
    TPU_PROGRAM_WORD(TPU_OP_SET_DST_BASE, MATMUL_RESULT_BASE),
    TPU_PROGRAM_WORD(TPU_OP_SET_GROUPS, MATMUL_GROUP_NUM),
    TPU_PROGRAM_WORD(TPU_OP_RUN, 0u),
    TPU_PROGRAM_WORD(TPU_OP_END, 0u),
};

#define TPU_STATUS_BUSY      (1u << 0)
#define TPU_STATUS_DONE      (1u << 1)
#define TPU_STATUS_ERROR     (1u << 2)

#define LACC_START_WORD      "0xC00000A4"
#define LACC_STATUS_WORD     "0xC0400004"
#define LACC_READ_WORD       "0xC08000A4"
#define LACC_CLEAR_WORD      "0xC0C00004"

static inline uint8_t uart_read_reg(uint32_t offset)
{
    return *(volatile uint8_t *)(UART_BASE + offset);
}

static inline void uart_write_reg(uint32_t offset, uint8_t data)
{
    *(volatile uint8_t *)(UART_BASE + offset) = data;
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

static void uart_put_hex32(uint32_t value)
{
    static const char hex[] = "0123456789abcdef";
    for (int shift = 28; shift >= 0; shift -= 4) {
        uart_putc(hex[(value >> shift) & 0xfu]);
    }
}

static char uart_getc_blocking(void)
{
    while ((uart_read_reg(UART_LSR) & UART_LSR_DR) == 0) {
    }
    return (char)uart_read_reg(UART_RBR);
}

void _exit(int code)
{
    (void)code;
    while (1) {
        __asm__ __volatile__("idle 0" ::: "memory");
    }
}

int close(int fd)
{
    (void)fd;
    return -1;
}

int fstat(int fd, void *st)
{
    (void)fd;
    (void)st;
    return 0;
}

int isatty(int fd)
{
    (void)fd;
    return 1;
}

long lseek(int fd, long offset, int whence)
{
    (void)fd;
    (void)offset;
    (void)whence;
    return 0;
}

long long lseek64(int fd, long long offset, int whence)
{
    (void)fd;
    (void)offset;
    (void)whence;
    return 0;
}

int read(int fd, void *buf, unsigned int count)
{
    if (fd != 0 || buf == 0 || count == 0) {
        return -1;
    }

    char *p = (char *)buf;
    for (unsigned int i = 0; i < count; i++) {
        char ch = uart_getc_blocking();
        if (ch == '\r') {
            ch = '\n';
        }
        p[i] = ch;
        if (ch == '\n') {
            return (int)(i + 1);
        }
    }
    return (int)count;
}

int write(int fd, const void *buf, unsigned int count)
{
    (void)fd;
    const char *p = (const char *)buf;
    for (unsigned int i = 0; i < count; i++) {
        uart_putc(p[i]);
    }
    return (int)count;
}

static inline uint32_t tpu_start(uint32_t start_pc)
{
    uint32_t status;
    asm volatile (
        "move $r5, %1\n\t"
        ".word " LACC_START_WORD "\n\t"
        "move %0, $r4\n\t"
        : "=r"(status)
        : "r"(start_pc)
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

static void install_tpu_program(void)
{
    volatile uint32_t *dst = (volatile uint32_t *)MATMUL_TPU_START_PC_UC;
    for (uint32_t i = 0; i < MATMUL_TPU_PROGRAM_WORDS; ++i) {
        dst[i] = matmul_tpu_program[i];
    }

    asm volatile (
        "dbar 0\n\t"
        "ibar 0\n\t"
        :
        :
        : "memory"
    );
}

int main(void)
{
    install_tpu_program();

    uint32_t status = tpu_clear();
#if MATMUL_DEBUG
    printf("DBG_CLEAR=%08x\n", status);
#endif

    uart_puts_raw("MATMUL_START\n");

    if ((status & TPU_STATUS_ERROR) == 0) {
        status = tpu_start(MATMUL_TPU_START_PC);
#if MATMUL_DEBUG
        printf("DBG_START=%08x\n", status);
#endif
    }
    if ((status & TPU_STATUS_ERROR) == 0) {
        int wait_rc = wait_tpu_done(&status);
#if MATMUL_DEBUG
        printf("DBG_WAIT_RC=%08x\n", (uint32_t)wait_rc);
        printf("DBG_STATUS=%08x\n", status);
#endif
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
