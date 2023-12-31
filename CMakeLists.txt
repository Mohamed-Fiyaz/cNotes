cmake_minimum_required(VERSION 3.25)
project(cNotes C)

set(CMAKE_C_STANDARD 11)

add_executable(array_manager Basics/array_manager.c)

add_executable(binaryTree "Binary Tree/binaryTree.c")
add_executable(binarySearchTree "Binary Tree/BinarySearchTree.c")        
add_executable(order "Binary Tree/order.c")

add_executable(queue Queue/queue.c)
add_executable(circularQueue Queue/circularQueue.c)

add_executable(sparseMatrix "Sparse Matrix/sparseMatrix.c")

add_executable(fibonacci Basics/fibonacci.c)
add_executable(matrix_addition Basics/matrix_addition.c)
add_executable(matrix_multiplication Basics/matrix_multiplication.c)
add_executable(matrix_transpose Basics/matrix_transpose.c)
add_executable(swapping Basics/swapping.c)

add_executable(structures-01 Structures/structures-01.c)
add_executable(structures-02 Structures/structures-02.c)
add_executable(structures-03 Structures/structures-03.c)
add_executable(structures-04 Structures/structures-04.c)
add_executable(structures-05 Structures/structures-05.c)
add_executable(structures-06 Structures/structures-06.c)

add_executable(matrix_multiplication_using_malloc "Dynamic Memory Allocation/matrix_multiplication_using_malloc.c")
add_executable(memory_allocation-01 "Dynamic Memory Allocation/memory_allocation-01.c")
add_executable(memory_allocation-02 "Dynamic Memory Allocation/memory_allocation-02.c")
add_executable(memory_allocation-03 "Dynamic Memory Allocation/memory_allocation-03.c")

add_executable(singlyLinkedListInsertion "Linked List/singlyLinkedListInsertion.c")
add_executable(singlyLinkedListDeletion "Linked List/singlyLinkedListDeletion.c")
add_executable(doublyLinkedListInsertion "Linked List/doublyLinkedListInsertion.c")
add_executable(doublyLinkedListDeletion "Linked List/doublyLinkedListDeletion.c")
add_executable(circularLinkedList "Linked List/circularLinkedList.c")
add_executable(cursorBasedImplementaion "Linked List/cursorBasedImplementation.c")

add_executable(stack_using_array Stack/stack_using_array.c)



