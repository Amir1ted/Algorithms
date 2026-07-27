# Tower of Hanoi using C++ Stacks

A C++ implementation of the Tower of Hanoi problem using the STL `stack` container and recursion.

## Overview

This project demonstrates how recursion can be combined with stack data structures to solve a variation of the classic Tower of Hanoi puzzle.

Unlike the traditional implementation that transfers disks directly from the source peg to the destination peg, this implementation explicitly performs movements through an auxiliary peg according to its recursive logic.

The program prints every disk movement while updating the internal stacks representing the three pegs.

---

## Features

- Recursive implementation
- Uses C++ STL `stack`
- Interactive user input
- Prints every disk movement
- Demonstrates recursive problem decomposition
- Simple educational example for Data Structures and Algorithms courses

---

## Project Structure

```
.
├── main.cpp
└── README.md
```

---

## Requirements

- C++11 or newer
- GCC / Clang / MSVC

---

## Compilation

Using g++:

```bash
g++ main.cpp -o hanoi
```

Run:

```bash
./hanoi
```

---

## Example

Input

```
Please enter number of disks: 3
```

Output (example)

```
Move 1 from A to C
Move 1 from C to B
Move 2 from A to C
...
```

(The exact sequence depends on the recursive execution.)

---

## Algorithm Description

The program models the three pegs using three stacks:

- A → Source peg
- B → Destination peg
- C → Auxiliary peg

Initially, all disks are stored in stack **A**, ordered from largest at the bottom to smallest at the top.

The recursive function

```cpp
Hanoi(int n, stack<int>& A,
              stack<int>& B,
              stack<int>& C)
```

is responsible for moving disks between the stacks.

### Base Case

When only one disk remains:

1. Move the top disk from A to C.
2. Print the movement.
3. Move the same disk from C to B.
4. Print the movement.

### Recursive Case

For more than one disk, the function recursively:

1. Moves the upper n−1 disks.
2. Transfers the largest remaining disk.
3. Recursively rearranges the remaining disks.
4. Moves the auxiliary disk.
5. Completes the remaining recursive transfers.

Each move is immediately reflected in the corresponding stack and printed to the console.

---

## Time Complexity

The recursive algorithm performs an exponential number of recursive calls.

- Time Complexity: **O(2ⁿ)**
- Space Complexity: **O(n)**

where **n** is the number of disks.

---

## Data Structures Used

- `std::stack<int>`
- Recursion

---

## Input Validation

The program checks whether the number of disks is positive.

If the user enters zero or a negative number, an `invalid_argument` exception is thrown.

---

## Educational Purpose

This project is intended for learning:

- Recursion
- Stack data structures
- Function call stack
- Recursive algorithm design
- C++ STL containers

---

## Notes

This implementation represents a recursive stack-based solution for a Tower of Hanoi variant. The sequence of moves follows the recursive logic implemented in the source code and is intended as an educational demonstration of recursion and stack manipulation.

---

## License

This project is released under the MIT License.