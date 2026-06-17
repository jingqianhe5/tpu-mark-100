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
INCLUDES += -I$(OBJDIR)
CLEAN_OBJS += $(OBJDIR)/matmul_tpu_program.h

include ../../bsp/common.mk

$(OBJDIR)/matmul_tpu_program.h: FORCE ./make_matmul_tpu_program.py
	mkdir -p $(OBJDIR)
	python3 ./make_matmul_tpu_program.py \
		--out $@ \
		--group-num $(MATMUL_GROUP_NUM) \
		--src-base 0x1c400000

./main.o: $(OBJDIR)/matmul_tpu_program.h

.PHONY: FORCE
FORCE:
