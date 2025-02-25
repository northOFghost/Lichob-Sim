# Lichob-Sim

# Numerical Integration in C

This project contains a C program that implements two numerical integration methods: Simpson's rule and the Trapezoidal rule. It calculates the definite integral of the function  `f(x) = x * sqrt(x)` between specified limits.

## Contents

1.  [Introduction](#introduction)
2.  [Files](#files)
3.  [Usage](#usage)
4.  [Functions](#functions)

## Introduction

Numerical integration techniques are used to approximate the value of a definite integral when an analytical solution is difficult or impossible to find. This program demonstrates two common methods for numerical integration.

## Files

*   `main.c`: The main source code file containing the implementation of Simpson's rule, the Trapezoidal rule, and the `main` function to execute the program.

## Usage

### Compilation

To compile the program, use a C compiler (e.g., GCC):

```
cc main.c -o integration -lm
```


The `-lm` flag is necessary to link the math library for the `sqrt` function.

### Execution

To execute the compiled program:

```
./integration
```

The program will output the approximate integral values calculated using both Simpson's rule and the Trapezoidal rule.

## Functions

### `double F(double x)`

*   **Description:** Calculates the value of the function `f(x) = x * sqrt(x)`.
*   **Parameters:**
    *   `x` (double): The input value.
*   **Returns:** The value of `f(x)`.

### `double simson(double a, double b, int n)`

*   **Description:** Approximates the definite integral using Simpson's rule.
*   **Parameters:**
    *   `a` (double): The lower limit of integration.
    *   `b` (double): The upper limit of integration.
    *   `n` (int): The number of subintervals (must be an even number for Simpson's rule to be most accurate).
*   **Returns:** The approximate value of the definite integral.

### `double lichod(double a, double b, int n)`

*   **Description:** Approximates the definite integral using the Trapezoidal rule.
*   **Parameters:**
    *   `a` (double): The lower limit of integration.
    *   `b` (double): The upper limit of integration.
    *   `n` (int): The number of subintervals.
*   **Returns:** The approximate value of the definite integral.

### `int main()`

*   **Description:** The main function of the program. It sets the integration limits, the number of subintervals, calls the `simson` and `lichod` functions, and prints the results.
*   **Parameters:** None
*   **Returns:** 0 on successful execution.

