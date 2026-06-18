TARGET = user-sample

CFLAGS += -O3 -g
CFLAGS += -DSIMU=1

MATMUL_GROUP_NUM ?= 5000
CFLAGS += -DMATMUL_GROUP_NUM=$(MATMUL_GROUP_NUM)

C_SRCS := ./main.c

OBJDIR = obj
COMMON_DIR = ../../bsp
GCC_DIR=../../../toolchains/loongson-gnu-toolchain-8.3-x86_64-loongarch32r-linux-gnusf-v2.0
PICOLIBC_DIR=../../../toolchains/picolibc
LINKER_SCRIPT = ./matmul_tpu.lds
SEMIHOST_LIB =

include ../../bsp/common.mk

LDFLAGS := $(filter-out -T,$(LDFLAGS))
LDFLAGS := $(filter-out ../../bsp/env/script.lds ../../bsp/env/separate.lds ./matmul_tpu.lds,$(LDFLAGS))
LDFLAGS += -T ./matmul_tpu.lds
LINK_DEPS += ./matmul_tpu.lds

.PHONY: image-check
all: image-check

image-check: $(TARGET)
	@size=$$(wc -c < $(OBJDIR)/$(TARGET).bin); \
	if [ "$$size" -lt 45076 ]; then \
		echo "ERROR: $(OBJDIR)/$(TARGET).bin is too small ($$size bytes); TPU program was not emitted to 0x1c00b000"; \
		exit 1; \
	fi; \
	bytes=$$(od -An -tx1 -j 45056 -N 20 $(OBJDIR)/$(TARGET).bin | tr -d ' \n'); \
	if [ "$$bytes" != "0000401c00c4492c8813003000000040000000f0" ]; then \
		echo "ERROR: unexpected TPU program bytes at file offset 0xb000: $$bytes"; \
		exit 1; \
	fi
