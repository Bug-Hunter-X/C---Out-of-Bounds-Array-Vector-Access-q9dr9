# C++ Out-of-Bounds Array/Vector Access

This repository demonstrates a common error in C++: accessing elements beyond the valid bounds of a vector or array.

## The Bug
The `bug.cpp` file contains code that attempts to access elements past the end of a vector and array.
Accessing memory outside the allocated space can lead to crashes, unexpected behavior, or security vulnerabilities.

## The Solution
The `bugSolution.cpp` file provides a corrected version of the code, demonstrating how to safely iterate over vectors and arrays using proper bounds checking.

## How to Compile and Run

1.  Save `bug.cpp` and `bugSolution.cpp`.
2.  Compile using a C++ compiler (like g++):
    ```bash
    g++ bug.cpp -o bug
    g++ bugSolution.cpp -o bugSolution
    ```
3.  Run the executables:
    ```bash
    ./bug
    ./bugSolution
    ```

Observe the different outputs; the corrected version prevents the out-of-bounds access.
