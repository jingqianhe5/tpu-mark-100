#!/usr/bin/env python3
"""Train a tiny 8x8 digit classifier and export Q8.8 weights.

The model is intentionally simple for the TPU path:

    input:  1 x 64  pixels, normalized to 0..1
    weight: 64 x 10
    bias:   10
    output: 10 logits, argmax is the predicted digit

The training data is synthetic.  Each digit starts from several 8x8 templates
and is augmented with small shifts, stroke thickening/thinning, pixel noise,
and light dropout so handwritten variants are better covered.
"""

from __future__ import annotations

import argparse
import json
import math
import random
from pathlib import Path

import numpy as np

TEMPLATES = {
    0: [
        [
            "01111110",
            "11000011",
            "11000011",
            "11000011",
            "11000011",
            "11000011",
            "11000011",
            "01111110",
        ],
        [
            "00111100",
            "01100110",
            "11000011",
            "11000011",
            "11000011",
            "11000011",
            "01100110",
            "00111100",
        ],
        [
            "00111110",
            "01100011",
            "11000111",
            "11001111",
            "11011111",
            "11100011",
            "01100011",
            "00111110",
        ],
    ],
    1: [
        [
            "00011000",
            "00111000",
            "01111000",
            "00011000",
            "00011000",
            "00011000",
            "00011000",
            "01111110",
        ],
        [
            "00001000",
            "00011000",
            "00111000",
            "00001000",
            "00001000",
            "00001000",
            "00001000",
            "01111110",
        ],
        [
            "00010000",
            "00110000",
            "01010000",
            "00010000",
            "00010000",
            "00010000",
            "00010000",
            "01111110",
        ],
    ],
    2: [
        [
            "01111110",
            "11000011",
            "00000011",
            "00001110",
            "00111000",
            "11100000",
            "11000000",
            "11111111",
        ],
        [
            "01111110",
            "11000011",
            "00000011",
            "00001110",
            "00111100",
            "01100000",
            "11000000",
            "11111111",
        ],
        [
            "01111110",
            "11000011",
            "00000110",
            "00011100",
            "00111000",
            "01100000",
            "11000000",
            "11111111",
        ],
    ],
    3: [
        [
            "01111110",
            "11000011",
            "00000011",
            "00111110",
            "00000011",
            "00000011",
            "11000011",
            "01111110",
        ],
        [
            "01111110",
            "11000011",
            "00000011",
            "00111110",
            "00000011",
            "00000011",
            "00000011",
            "01111110",
        ],
        [
            "01111110",
            "11000011",
            "00000011",
            "00111110",
            "00000111",
            "00000011",
            "11000011",
            "01111110",
        ],
    ],
    4: [
        [
            "00000110",
            "00001110",
            "00011110",
            "00110110",
            "01100110",
            "11111111",
            "00000110",
            "00000110",
        ],
        [
            "00001100",
            "00011100",
            "00101100",
            "01001100",
            "11111111",
            "00001100",
            "00001100",
            "00001100",
        ],
        [
            "00000110",
            "00001110",
            "00011010",
            "00110010",
            "01100010",
            "11111111",
            "00000010",
            "00000010",
        ],
    ],
    5: [
        [
            "11111111",
            "11000000",
            "11000000",
            "11111110",
            "00000011",
            "00000011",
            "11000011",
            "01111110",
        ],
        [
            "11111111",
            "11000000",
            "11000000",
            "11111110",
            "00000011",
            "00000011",
            "00000011",
            "01111110",
        ],
        [
            "11111111",
            "11000000",
            "11000000",
            "11111110",
            "00000111",
            "00000011",
            "11000011",
            "01111110",
        ],
    ],
    6: [
        [
            "00111110",
            "01100000",
            "11000000",
            "11111110",
            "11000011",
            "11000011",
            "11000011",
            "01111110",
        ],
        [
            "00111100",
            "01100000",
            "11000000",
            "11111100",
            "11000011",
            "11000011",
            "11000011",
            "01111110",
        ],
        [
            "00111110",
            "01100000",
            "11000000",
            "11111110",
            "11000011",
            "11000011",
            "01000011",
            "00111110",
        ],
    ],
    7: [
        [
            "11111111",
            "00000011",
            "00000110",
            "00001100",
            "00011000",
            "00110000",
            "00110000",
            "00110000",
        ],
        [
            "11111111",
            "00000110",
            "00001100",
            "00011000",
            "00110000",
            "01100000",
            "01100000",
            "01100000",
        ],
        [
            "11111111",
            "00000011",
            "00000110",
            "00001100",
            "00011000",
            "00110000",
            "00110000",
            "00010000",
        ],
    ],
    8: [
        [
            "01111110",
            "11000011",
            "11000011",
            "01111110",
            "11000011",
            "11000011",
            "11000011",
            "01111110",
        ],
        [
            "00111100",
            "01100110",
            "01100110",
            "00111100",
            "01100110",
            "01100110",
            "01100110",
            "00111100",
        ],
        [
            "01111110",
            "11000011",
            "11000011",
            "01111110",
            "11000011",
            "11000011",
            "10000001",
            "01111110",
        ],
    ],
    9: [
        [
            "01111110",
            "11000011",
            "11000011",
            "11000011",
            "01111111",
            "00000011",
            "00000110",
            "01111100",
        ],
        [
            "01111110",
            "11000011",
            "11000011",
            "11000011",
            "01111110",
            "00000011",
            "00000110",
            "01111100",
        ],
        [
            "01111110",
            "11000011",
            "11000011",
            "11000011",
            "01111111",
            "00000111",
            "00001100",
            "01111000",
        ],
    ],
}

EXTRA_TEMPLATES = {
    # Seven-segment / blocky variants.  These are close to the hand-written
    # text patterns used by digit/num.txt, so the exported weights generalize
    # better to manual 8x8 inputs.
    0: [
        [
            "########",
            "##....##",
            "##....##",
            "##....##",
            "##....##",
            "##....##",
            "##....##",
            "########",
        ],
        [
            ".######.",
            "##....##",
            "##....##",
            "##....##",
            "##....##",
            "##....##",
            "##....##",
            ".######.",
        ],
    ],
    1: [
        [
            "...##...",
            "..###...",
            ".####...",
            "...##...",
            "...##...",
            "...##...",
            "...##...",
            ".######.",
        ],
        [
            "...##...",
            "...##...",
            "...##...",
            "...##...",
            "...##...",
            "...##...",
            "...##...",
            "...##...",
        ],
    ],
    2: [
        [
            "########",
            "......##",
            "......##",
            "########",
            "##......",
            "##......",
            "##......",
            "########",
        ],
        [
            ".######.",
            "##....##",
            ".....##.",
            "...###..",
            "..###...",
            ".##.....",
            "##......",
            "########",
        ],
    ],
    3: [
        [
            "########",
            "......##",
            "......##",
            "########",
            "......##",
            "......##",
            "......##",
            "########",
        ],
        [
            ".######.",
            "##....##",
            "......##",
            "...####.",
            "......##",
            "......##",
            "##....##",
            ".######.",
        ],
    ],
    4: [
        [
            "##....##",
            "##....##",
            "##....##",
            "########",
            "......##",
            "......##",
            "......##",
            "......##",
        ],
        [
            "##...##.",
            "##...##.",
            "##...##.",
            "########",
            ".....##.",
            ".....##.",
            ".....##.",
            ".....##.",
        ],
    ],
    5: [
        [
            "########",
            "##......",
            "##......",
            "########",
            "......##",
            "......##",
            "......##",
            "########",
        ],
        [
            "########",
            "##......",
            "##......",
            "########",
            "......##",
            "......##",
            "##....##",
            ".######.",
        ],
    ],
    6: [
        [
            "########",
            "##......",
            "##......",
            "########",
            "##....##",
            "##....##",
            "##....##",
            "########",
        ],
        [
            ".######.",
            "##......",
            "##......",
            "#######.",
            "##....##",
            "##....##",
            "##....##",
            ".######.",
        ],
    ],
    7: [
        [
            "########",
            "......##",
            ".....##.",
            "....##..",
            "...##...",
            "..##....",
            "..##....",
            "..##....",
        ],
        [
            "########",
            "......##",
            "......##",
            ".....##.",
            "....##..",
            "...##...",
            "..##....",
            "..##....",
        ],
    ],
    8: [
        [
            "########",
            "##....##",
            "##....##",
            "########",
            "##....##",
            "##....##",
            "##....##",
            "########",
        ],
        [
            ".######.",
            "##....##",
            "##....##",
            ".######.",
            "##....##",
            "##....##",
            "##....##",
            ".######.",
        ],
    ],
    9: [
        [
            "########",
            "##....##",
            "##....##",
            "########",
            "......##",
            "......##",
            "......##",
            "########",
        ],
        [
            ".######.",
            "##....##",
            "##....##",
            "##....##",
            ".#######",
            "......##",
            "......##",
            ".######.",
        ],
    ],
}

for _label, _variants in EXTRA_TEMPLATES.items():
    TEMPLATES[_label].extend(_variants)


def template_to_pixels(template: list[str]) -> list[float]:
    return [1.0 if ch in "1#@Xx" else 0.0 for row in template for ch in row]


def at(pixels: list[float], y: int, x: int) -> float:
    if 0 <= y < 8 and 0 <= x < 8:
        return pixels[y * 8 + x]
    return 0.0


def shift_image(pixels: list[float], dy: int, dx: int) -> list[float]:
    return [at(pixels, y - dy, x - dx) for y in range(8) for x in range(8)]


def blur_lightly(pixels: list[float], rng: random.Random) -> list[float]:
    if rng.random() > 0.35:
        return pixels[:]
    out = pixels[:]
    for y in range(8):
        for x in range(8):
            if pixels[y * 8 + x] > 0.7 and rng.random() < 0.12:
                ny = min(7, max(0, y + rng.choice([-1, 0, 1])))
                nx = min(7, max(0, x + rng.choice([-1, 0, 1])))
                out[ny * 8 + nx] = max(out[ny * 8 + nx], 0.55)
    return out


def thicken_or_thin(pixels: list[float], rng: random.Random) -> list[float]:
    out = pixels[:]
    if rng.random() < 0.5:
        for y in range(8):
            for x in range(8):
                if pixels[y * 8 + x] > 0.5:
                    for ny in range(max(0, y - 1), min(8, y + 2)):
                        for nx in range(max(0, x - 1), min(8, x + 2)):
                            out[ny * 8 + nx] = max(out[ny * 8 + nx], 0.78)
    else:
        for y in range(8):
            for x in range(8):
                if pixels[y * 8 + x] > 0.5 and rng.random() < 0.25:
                    out[y * 8 + x] = 0.0
    return out


def augment(base: list[float], rng: random.Random) -> list[float]:
    img = shift_image(base, rng.choice([-1, 0, 0, 0, 1]), rng.choice([-1, 0, 0, 0, 1]))
    img = thicken_or_thin(img, rng)
    img = blur_lightly(img, rng)
    out: list[float] = []
    for value in img:
        v = value
        if v > 0.5 and rng.random() < 0.035:
            v = 0.0
        if v < 0.5 and rng.random() < 0.018:
            v = rng.uniform(0.35, 0.8)
        v += rng.uniform(-0.08, 0.08)
        out.append(min(1.0, max(0.0, v)))
    return out


def make_dataset(samples_per_digit: int, seed: int) -> list[tuple[list[float], int]]:
    rng = random.Random(seed)
    data: list[tuple[list[float], int]] = []
    for label, variants in TEMPLATES.items():
        bases = [template_to_pixels(t) for t in variants]
        for base in bases:
            data.append((base[:], label))
            for _ in range(max(1, samples_per_digit // len(bases)) - 1):
                data.append((augment(base, rng), label))
    rng.shuffle(data)
    return data


def softmax(logits: list[float]) -> list[float]:
    m = max(logits)
    exps = [math.exp(x - m) for x in logits]
    s = sum(exps)
    return [x / s for x in exps]


def predict_logits(x: list[float], weights: list[list[float]], bias: list[float]) -> list[float]:
    return [
        bias[c] + sum(x[i] * weights[i][c] for i in range(64))
        for c in range(10)
    ]


def accuracy(data: list[tuple[list[float], int]], weights: list[list[float]], bias: list[float]) -> float:
    correct = 0
    for x, y in data:
        logits = predict_logits(x, weights, bias)
        pred = max(range(10), key=lambda i: logits[i])
        correct += int(pred == y)
    return correct / len(data)


def train(
    train_data: list[tuple[list[float], int]],
    test_data: list[tuple[list[float], int]],
    epochs: int,
    lr: float,
    seed: int,
) -> tuple[list[list[float]], list[float]]:
    rng = np.random.default_rng(seed)
    weights_np = rng.uniform(-0.02, 0.02, size=(64, 10)).astype(np.float64)
    bias_np = np.zeros(10, dtype=np.float64)
    train_x = np.array([x for x, _ in train_data], dtype=np.float64)
    train_y = np.array([y for _, y in train_data], dtype=np.int64)
    test_x = np.array([x for x, _ in test_data], dtype=np.float64)
    test_y = np.array([y for _, y in test_data], dtype=np.int64)

    best_epoch = 0
    best_test_acc = -1.0
    best_test_loss = float("inf")
    best_weights = weights_np.copy()
    best_bias = bias_np.copy()

    for epoch in range(1, epochs + 1):
        order = rng.permutation(len(train_x))
        train_x = train_x[order]
        train_y = train_y[order]
        total_loss = 0.0
        for x, y in zip(train_x, train_y):
            logits = x @ weights_np + bias_np
            logits -= np.max(logits)
            probs = np.exp(logits)
            probs /= np.sum(probs)
            total_loss += -math.log(max(float(probs[y]), 1e-12))

            probs[y] -= 1.0
            weights_np -= lr * np.outer(x, probs)
            bias_np -= lr * probs

        if epoch == 1 or epoch % 20 == 0 or epoch == epochs:
            train_pred = np.argmax(train_x @ weights_np + bias_np, axis=1)
            test_pred = np.argmax(test_x @ weights_np + bias_np, axis=1)
            train_acc = float(np.mean(train_pred == train_y))
            test_acc = float(np.mean(test_pred == test_y))
            avg_loss = total_loss / len(train_data)
            if test_acc > best_test_acc or (test_acc == best_test_acc and avg_loss < best_test_loss):
                best_epoch = epoch
                best_test_acc = test_acc
                best_test_loss = avg_loss
                best_weights = weights_np.copy()
                best_bias = bias_np.copy()
            print(
                f"epoch {epoch:4d}  loss={avg_loss:.4f}  "
                f"train_acc={train_acc * 100:6.2f}%  test_acc={test_acc * 100:6.2f}%"
            )

    print(
        f"best checkpoint: epoch {best_epoch:4d}  "
        f"test_acc={best_test_acc * 100:6.2f}%  loss={best_test_loss:.4f}"
    )
    return best_weights.tolist(), best_bias.tolist()


def q8_8(value: float) -> int:
    raw = int(round(value * 256.0))
    raw = min(32767, max(-32768, raw))
    return raw & 0xFFFF


def hex16(value: int) -> str:
    return f"0x{value:04X}"


def balanced_examples(
    data: list[tuple[list[float], int]],
    per_label: int,
) -> list[tuple[list[float], int]]:
    picked: list[tuple[list[float], int]] = []
    counts = [0] * 10
    for x, y in data:
        if 0 <= y < 10 and counts[y] < per_label:
            picked.append((x, y))
            counts[y] += 1
    return picked


def make_export_examples(
    data: list[tuple[list[float], int]],
    weights: list[list[float]],
    bias: list[float],
) -> list[dict]:
    examples = []
    for x, y in data:
        logits = predict_logits(x, weights, bias)
        probs = softmax(logits)
        examples.append(
            {
                "label": y,
                "prediction": max(range(10), key=lambda i: logits[i]),
                "pixels_q8_8": [hex16(q8_8(v)) for v in x],
                "pixels_float": x,
                "logits_float": logits,
                "probabilities_float": probs,
            }
        )
    return examples


def export_model(
    path: Path,
    weights: list[list[float]],
    bias: list[float],
    train_data: list[tuple[list[float], int]],
    test_data: list[tuple[list[float], int]],
) -> None:
    q_weights = [[q8_8(weights[i][c]) for c in range(10)] for i in range(64)]
    q_bias = [q8_8(v) for v in bias]
    train_examples = make_export_examples(balanced_examples(train_data, 10), weights, bias)
    test_examples = make_export_examples(test_data[:20], weights, bias)
    payload = {
        "description": "single-layer 8x8 digit classifier: logits = x[1x64] * W[64x10] + b[10]",
        "format": "Q8.8 signed 16-bit, row-major W[input_index][class]",
        "input_shape": [1, 64],
        "weight_shape": [64, 10],
        "bias_shape": [10],
        "weights_float": weights,
        "bias_float": bias,
        "weights_q8_8_hex": [[hex16(v) for v in row] for row in q_weights],
        "bias_q8_8_hex": [hex16(v) for v in q_bias],
        "train_examples": train_examples,
        "test_examples": test_examples,
    }
    path.write_text(json.dumps(payload, indent=2), encoding="utf-8")


def print_digit(x: list[float]) -> None:
    levels = " .:-=+*#%@"
    for y in range(8):
        row = ""
        for xidx in range(8):
            v = x[y * 8 + xidx]
            row += levels[min(len(levels) - 1, int(v * (len(levels) - 1)))]
        print(row)


def main() -> None:
    parser = argparse.ArgumentParser()
    parser.add_argument("--epochs", type=int, default=180)
    parser.add_argument("--lr", type=float, default=0.08)
    parser.add_argument("--samples-per-digit", type=int, default=300)
    parser.add_argument("--seed", type=int, default=7)
    parser.add_argument("--out", type=Path, default=Path("digit8x8_linear_weights.json"))
    args = parser.parse_args()

    data = make_dataset(args.samples_per_digit, args.seed)
    split = int(len(data) * 0.8)
    train_data = data[:split]
    test_data = data[split:]

    print(f"synthetic dataset: train={len(train_data)}, test={len(test_data)}")
    weights, bias = train(train_data, test_data, args.epochs, args.lr, args.seed + 1)

    print("\nfinal evaluation")
    print(f"train_acc={accuracy(train_data, weights, bias) * 100:.2f}%")
    print(f"test_acc ={accuracy(test_data, weights, bias) * 100:.2f}%")

    print("\nsample predictions")
    for x, y in test_data[:5]:
        logits = predict_logits(x, weights, bias)
        probs = softmax(logits)
        pred = max(range(10), key=lambda i: logits[i])
        print(f"label={y}, pred={pred}")
        print("logits:", [round(v, 3) for v in logits])
        print("probabilities:")
        for digit, prob in enumerate(probs):
            print(f"  {digit}: {prob * 100:6.2f}%")
        print_digit(x)
        print()

    export_model(args.out, weights, bias, train_data, test_data)
    print(f"exported: {args.out}")
    print("TPU matrix shapes: X=1x64, W=64x10, B=10, Y=1x10")
    print("For an 8x8 array, pad W to 64x16 and run eight K-tiles of 8.")


if __name__ == "__main__":
    main()
