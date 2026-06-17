# Tiny TPU XOR RTL Training Demo

这个工程是一个用于 XOR 小网络训练/推理验证的 RTL TPU demo。当前主要入口是 `tpu_isa_confreg`，通过 Verilator testbench 手工发 ISA 指令，驱动 RTL 完成：

- XOR batch 数据加载
- 两层网络 forward
- loss / delta 反向传播
- `grad_W` / `grad_B` 生成
- RTL `gradient_descent` 更新权重
- 训练前/训练后推理结果对比

数据格式主要使用 signed Q8.8 定点数，例如：

```text
0x0100 =  1.0
0x0080 =  0.5
0xFF80 = -0.5
```

## 目录结构

```text
.
├── Makefile                    # Verilator 构建入口
├── tpu_isa_confreg.v           # ISA/confreg 顶层
├── decode.v                    # 32-bit 指令 decode
├── tpu.v                       # TPU 核心连接层
├── unified_buffer.sv           # UB 存储、读写、累加写回、GD 参数/梯度读取
├── gradient_descent.sv         # 参数更新单元
├── vpu.v                       # VPU 路径选择
├── systolic.v / pe.v           # 2x2 systolic array
├── bias_*                      # bias + activation 前向路径
├── loss_*                      # loss 导数路径
├── leaky_relu_*                # leaky ReLU 前向/导数路径
├── fxp_*                       # 定点运算模块
├── tpu_isa_confreg_sim.cpp     # 当前主要 Verilator testbench
├── de1_soc_tiny_tpu_xor_top.v  # 旧/板级风格顶层
├── main.cpp                    # 旧顶层对应 testbench
└── xor_golden_model.py         # Python 参考模型
```

## 依赖

需要本机安装：

```text
verilator
g++
make
gtkwave    # 可选，用于看波形
```

## 快速运行

当前推荐运行 ISA/confreg 训练仿真：

```bash
make isa
```

它会完成：

```text
1. Verilator 编译 RTL + tpu_isa_confreg_sim.cpp
2. 运行 ./obj_dir/Vtpu_isa_confreg
3. 生成 tpu_isa_confreg_sim.vcd
```

单独构建或运行：

```bash
make isa-build
make isa-run
```

查看波形：

```bash
make isa-wave
```

清理生成文件：

```bash
make clean
```

## 当前默认测试

`tpu_isa_confreg_sim.cpp` 的 `main()` 默认运行：

```cpp
test_full_network_training_multi_step();
```

它会先做训练前推理，然后执行多步 RTL 训练，最后再做训练后推理。

典型输出类似：

```text
[推理-训练前] 分类正确 = 2/4
...
[FULL-MULTI] err initial = 1.5391
[FULL-MULTI] err final   = 0.0586
...
[推理-训练后] 分类正确 = 4/4，全对
[推理] err 对比 = 1.5391 -> 0.0586，分类正确 2/4 -> 4/4
[结果] PASS：full-network 多步训练误差下降
```

训练前推理不是默认判失败；它只是用初始权重跑一次 forward。训练前如果刚好已经分类全对，也会打印：

```text
[推理-训练前] 分类正确 = 4/4，全对
```

## 修改训练轮数

训练轮数在 `tpu_isa_confreg_sim.cpp` 中修改：

```cpp
// 修改这里可以调整 full-network RTL 训练 step 数。
constexpr int FULL_NETWORK_TRAIN_STEPS = 20;
```

改完后重新运行：

```bash
make isa
```

## XOR 网络结构

当前训练的是一个 2 层小网络：

```text
X(4x2) -> W1(2x2), B1(2) -> H1(4x2)
H1(4x2) -> W2(2x1), B2(1) -> Y_pred(4x1)
```

XOR batch：

```text
X = [[0,0],
     [1,0],
     [0,1],
     [1,1]]

Y_true = [0, 1, 1, 0]
```

训练 step 的 RTL 数据流：

```text
forward layer1 -> H1
forward layer2 -> Y_pred
loss / derivative -> delta2
delta1 = (delta2 * W2^T) * leaky_relu_derivative(H1)
grad_W2 = H1^T * delta2
grad_B2 = sum(delta2)
grad_W1 = X^T * delta1
grad_B1 = sum(delta1)
gradient_descent 更新 W2/B2
gradient_descent 更新 W1/B1
```

所有梯度生成和权重更新都走 RTL 路径，C++ testbench 只负责初始化、发指令、等待完成、打印日志和计算误差。

## UB 地址划分

`tpu_isa_confreg_sim.cpp` 中固定使用以下 UB 地址表：

```text
0..15      X
16..31     W
32..39     B
40..47     H1
48..51     Y_true
52..55     Y_pred
56..59     DY
60..63     delta2
64..71     delta1
72..75     grad_W1
76..77     grad_W2
78..79     grad_B1
80         grad_B2
96..127    TMP / scratch
```

具体别名：

```text
W1_BASE = 16
W2_BASE = 20
B1_BASE = 32
B2_BASE = 34
```

## ISA 简表

当前 testbench 使用的主要指令：

```text
OP_LOAD
    UB[addr] = data

OP_SET_WR
    设置 VPU/systolic 输出写回 UB 的起始地址
    支持 normal write 和 accumulate write

OP_SET_GRAD_ADDR
    设置 gradient_descent 从 UB 哪个地址读取 gradient

OP_UB_READ
    从 UB 读取矩阵，送入 INPUT / WEIGHT / BIAS / Y / H / GD 路径

OP_SWITCH
    切换 systolic 权重双缓冲
```

常用 `ptr_select`：

```text
0 = INPUT
1 = WEIGHT
2 = BIAS
3 = Y_true / loss label
4 = H / derivative activation input
5 = gradient_descent bias update
6 = gradient_descent weight update
```

常用 VPU mode：

```text
0x0 = systolic 输出直通
0xC = forward: bias + leaky_relu
0x2 = loss path
0x1 = leaky_relu_derivative path
```

## 两个仿真入口

推荐入口：

```bash
make isa
```

对应：

```text
tpu_isa_confreg.v
tpu_isa_confreg_sim.cpp
```

旧顶层入口：

```bash
make
```

对应：

```text
de1_soc_tiny_tpu_xor_top.v
main.cpp
```

当前训练闭环主要维护在 ISA/confreg 路径里。

