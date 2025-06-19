# Scientific Calculator

A C program implementing a scientific calculator with both basic arithmetic and advanced mathematical functions.

## Features

- Basic arithmetic operations:
  - Addition (+)
  - Subtraction (-)
  - Multiplication (*)
  - Division (/)

- Scientific functions:
  - Power (^)
  - Square root (q)
  - Trigonometric functions:
    - Cosine (c)
    - Sine (s)
    - Tangent (t)
  - Logarithm (l)
  - Exponential (e)

## Compilation

To compile the calculator:

```bash
gcc main.c -lm
```

The `-lm` flag is required to link the math library.

## Usage

After compilation, run the program:

```bash
./a.out
```

## Compilation and Usage

you can also run the program with:

```bash
gcc main.c -lm && ./a.out
```

The program will display a list of available operations. Enter the desired operation followed by the required numbers:

### Basic Operations

For basic operations (+, -, *, /), enter two numbers:

```bash
Enter the operation: +
Enter the first number: 5
Enter the second number: 3
Result: 8.000000
```

### Scientific Operations

For scientific operations, follow these instructions:

- Power (^): Enter base and exponent
- Square root (q): Enter a non-negative number
- Trigonometric functions (c, s, t): Enter angle in degrees
- Logarithm (l): Enter a positive number
- Exponential (e): Enter the exponent

### Error Handling

The calculator includes error handling for:

- Division by zero
- Square root of negative numbers
- Logarithm of non-positive numbers
- Invalid operations

## Output Precision

Results are displayed with 6 decimal places of precision.

## Requirements

- C compiler (gcc recommended)
- Math library (linked with -lm)
