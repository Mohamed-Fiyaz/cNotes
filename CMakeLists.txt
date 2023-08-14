cmake_minimum_required(VERSION 3.25)
project(cNotes C)

set(CMAKE_C_STANDARD 11)

add_executable(main main.c
        Structures/structures-02.c
        Structures/structures-03.c
        Structures/structures-04.c
        Structures/structures-05.c
        Structures/structures-06.c
        "Dynmaic Memory Allocation/memory_allocation-01.c"
        "Dynmaic Memory Allocation/memory_allocation-02.c"
        "Dynmaic Memory Allocation/memory_allocation-04.c"
        "Dynmaic Memory Allocation/matrix_multiplication.c"
        Basics/fibonacci.c
        Basics/swapping.c)
add_executable(practice Structures/structures-01.c)
