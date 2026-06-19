TARGET = user-sample

CFLAGS += -O3 -g
CFLAGS += -DSIMU=1

MATMUL_GROUP_NUM ?= 5000
CFLAGS += -DMATMUL_GROUP_NUM=$(MATMUL_GROUP_NUM)

MATMUL_SRC_BASE ?= 0x1c400000u
CFLAGS += -DMATMUL_SRC_BASE=$(MATMUL_SRC_BASE)

MATMUL_DEBUG ?= 0
CFLAGS += -DMATMUL_DEBUG=$(MATMUL_DEBUG)

C_SRCS := ./main.c

OBJDIR = obj
COMMON_DIR = ../../bsp
GCC_DIR=../../../toolchains/loongson-gnu-toolchain-8.3-x86_64-loongarch32r-linux-gnusf-v2.0
PICOLIBC_DIR=../../../toolchains/picolibc
SEMIHOST_LIB =

include ../../bsp/common.mk
