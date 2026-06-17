TARGET = matmul_tpu

CFLAGS += -O3 -g
CFLAGS += -DSIMU=1

MATMUL_GROUP_NUM ?= 5000
CFLAGS += -DMATMUL_GROUP_NUM=$(MATMUL_GROUP_NUM)

C_SRCS := $(wildcard ./*.c)

OBJDIR = obj
COMMON_DIR = ../../bsp
GCC_DIR=../../../toolchains/loongson-gnu-toolchain-8.3-x86_64-loongarch32r-linux-gnusf-v2.0
PICOLIBC_DIR=../../../toolchains/picolibc
LINKER_SCRIPT = ./matmul_tpu.lds
SEMIHOST_LIB =

include ../../bsp/common.mk
