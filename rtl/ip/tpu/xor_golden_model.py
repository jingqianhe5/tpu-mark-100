#!/usr/bin/env python3

F_BITS = 8
SCALE = 1 << F_BITS
MASK16 = 0xFFFF


def s16(value):
    value &= MASK16
    return value - 0x10000 if value & 0x8000 else value


def fxp(raw):
    return s16(raw)


def to_float(value):
    return value / SCALE


def from_float(value):
    return s16(round(value * SCALE))


def fxp_add(a, b):
    return s16(a + b)


def fxp_mul(a, b):
    return s16((a * b) >> F_BITS)


def leaky_relu(x, leak=0x0003):
    if x >= 0:
        return x
    return fxp_mul(x, fxp(leak))


def matmul_1x2_2x2(x, w):
    return [
        fxp_add(fxp_mul(x[0], w[0][0]), fxp_mul(x[1], w[1][0])),
        fxp_add(fxp_mul(x[0], w[0][1]), fxp_mul(x[1], w[1][1])),
    ]


def matmul_1x2_2x1(x, w):
    return [fxp_add(fxp_mul(x[0], w[0][0]), fxp_mul(x[1], w[1][0]))]


def dump_vec(name, values):
    pretty = ", ".join(f"0x{v & MASK16:04X} ({to_float(v): .6f})" for v in values)
    print(f"{name:<8}: [{pretty}]")


def main():
    # Parameters copied from de1_soc_tiny_tpu_xor_top.v ST_LOAD.
    # Q8.8 fixed-point values.
    w1 = [
    [fxp(0x0100), fxp(0xFF00)],  # x0 -> [z21, z22] = [+1, -1]
    [fxp(0xFF00), fxp(0x0100)],  # x1 -> [z21, z22] = [-1, +1]
    ]
    b1 = [fxp(0x0000), fxp(0x0000)]
    
    w2 = [
        [fxp(0x0100)],
        [fxp(0x0100)],
    ]
    b2 = [fxp(0xFF40)]  # 或 0xFF80
    

    print("Software golden model for current XOR demo parameters")
    print("Format: Q8.8 signed fixed point")
    dump_vec("b1", b1)
    dump_vec("b2", b2)
    print()

    all_ok = True
    for a, b in [(0, 0), (1, 0), (0, 1), (1, 1)]:
        x = [from_float(a), from_float(b)]
        expected = a ^ b

        z1 = matmul_1x2_2x2(x, w1)
        h1_pre = [fxp_add(z1[i], b1[i]) for i in range(2)]
        h1 = [leaky_relu(v) for v in h1_pre]
        z2 = matmul_1x2_2x1(h1, w2)
        y_pre = [fxp_add(z2[0], b2[0])]
        y = [leaky_relu(y_pre[0])]

        pred = int(y[0] > 0)
        ok = pred == expected
        all_ok &= ok

        print(f"XOR({a}, {b}) expected={expected} pred={pred} {'PASS' if ok else 'FAIL'}")
        dump_vec("x", x)
        dump_vec("z1", z1)
        dump_vec("h1_pre", h1_pre)
        dump_vec("h1", h1)
        dump_vec("z2", z2)
        dump_vec("y", y)
        print()

    print(f"Summary: {'PASS' if all_ok else 'FAIL'}")


if __name__ == "__main__":
    main()
