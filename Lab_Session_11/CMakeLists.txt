cmake_minimum_required(VERSION 3.16)

project(LabSession11 C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

add_executable(pointer_basics
    examples/01_pointer_basics.c
)

add_executable(null_pointer
    examples/02_null_pointer.c
)

add_executable(value_and_pointer
    examples/03_value_and_pointer.c
)

add_executable(pointer_arithmetic
    examples/04_pointer_arithmetic.c
)

add_executable(pointer_comparison
    examples/05_pointer_comparison.c
)

add_executable(array_of_pointers
    examples/06_array_of_pointers.c
)

add_executable(pointer_to_pointer
    examples/07_pointer_to_pointer.c
)

add_executable(void_pointer
    examples/08_void_pointer.c
)

add_executable(multiple_outputs
    examples/09_multiple_outputs.c
)