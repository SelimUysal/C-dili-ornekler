# C Programming Exercises

A collection of **89 numbered C programming exercises**, additional string-processing examples, and a small C++ example. This repository is intended for students who want to strengthen their problem-solving skills by reading, running, and experimenting with code.

> **Who is this for?** Learners who already know basic C syntax and want hands-on practice with functions, strings, arrays, pointers, and structures. This is an exercise collection, **not a step-by-step C course**.

## 📌 What You'll Find

- **89 standalone C exercises:** `C ornek  (1).c` through `C ornek  (89).c`.
- **String exercises:** `String_change_order_Sec01.c` and `String_reverse_sec01.c`.
- **One C++ example:** `ornek.cpp` (a number-guessing game; compile it separately as C++).

Most programs take input in the terminal and display their results in the terminal. Exercises are kept as individual files, so you can focus on one problem at a time.

## 🚀 Quick Start

### 1. Requirements

- A C compiler such as **GCC** or **Clang**.
- A terminal or an IDE with C compiler support (for example, VS Code with a configured compiler).

### 2. Get the files

Download the repository using **Code → Download ZIP** on GitHub, or clone it:

```bash
git clone https://github.com/SelimUysal/C-dili-ornekler.git
cd C-dili-ornekler
```

### 3. Compile and run an exercise

For example, to try the first exercise:

```bash
gcc "C ornek  (1).c" -o example
./example
```

On Windows, run `example.exe` (or `.\example.exe` in PowerShell) instead of `./example`.

**Tip:** Keep filenames inside quotation marks; the original filenames contain spaces and parentheses. For exercises using mathematical library functions (such as `sqrt`), some GCC configurations require linking with `-lm`:

```bash
gcc "C ornek  (10).c" -o example -lm
./example
```

For `ornek.cpp`, use a C++ compiler such as `g++`, not `gcc` in C mode.

## 🧭 Find an Exercise

The examples below are **starting points**, not a claim that the numbered files are arranged by difficulty.

| Topic | Example file | What it demonstrates |
| --- | --- | --- |
| String processing / word lengths | [C ornek  (1).c](C%20ornek%20%20(1).c) | Count two-, three-, and four-letter words in a line |
| Character replacement | [C ornek  (2).c](C%20ornek%20%20(2).c) | Replace spaces in a string |
| Math and arrays | [C ornek  (10).c](C%20ornek%20%20(10).c) | Calculate the distance between two numerical vectors |
| Array operations | [C ornek  (17).c](C%20ornek%20%20(17).c) | Perform arithmetic on two arrays |
| Structures | [C ornek  (30).c](C%20ornek%20%20(30).c) | Calculate salesperson commissions with a structure |
| Pointers | [C ornek  (40).c](C%20ornek%20%20(40).c) | Read and assign values through pointers |
| Functions | [C ornek  (50).c](C%20ornek%20%20(50).c) | Calculate the sum of an integer's digits using an output parameter |
| Arrays | [C ornek  (60).c](C%20ornek%20%20(60).c) | Interleave the contents of two arrays |
| Nested structures | [C ornek  (70).c](C%20ornek%20%20(70).c) | Calculate a student's weighted grade |
| Loops and functions | [C ornek  (80).c](C%20ornek%20%20(80).c) | Calculate factorials using a function |
| Text analysis | [C ornek  (89).c](C%20ornek%20%20(89).c) | Count words of selected lengths using character checks |
 
Additional string exercises: [String_change_order_Sec01.c](String_change_order_Sec01.c) (compare and order strings) and [String_reverse_sec01.c](String_reverse_sec01.c) (reverse a string).

**[Browse all source files](https://github.com/SelimUysal/C-dili-ornekler)** to explore the remaining exercises.

## 📚 Suggested Practice Workflow

1. **Pick a topic:** Start with strings, arrays, functions, or pointers—whichever you are learning.
2. **Read the code:** Predict its output before compiling it.
3. **Run the program:** Enter test values and compare the result with your prediction.
4. **Experiment:** Change the input, try boundary cases, and improve the implementation.
5. **Reflect:** Check for input validation, memory safety, and readable variable names.

### Important Notes

- These are **educational exercises**, including older coding styles. Some files may require adjustments to compile cleanly with modern compilers.
- A few legacy examples use `gets()`, which is **unsafe and removed from modern C standards**. Prefer `fgets()` and validate buffer sizes when adapting the code.
- Check division by zero, invalid input, and fixed-size array bounds before reusing an exercise in a real application.
- Code has **not been validated as a production-ready library**; use it for learning and experimentation.

---

**Purpose:** Practice core C concepts through small, approachable programming problems.
