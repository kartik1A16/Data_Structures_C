# Data Structures and Algorithms in C

This repository contains implementations of various fundamental data structures and algorithms in C. Each implementation includes detailed comments explaining the concept, time complexity, and space complexity.

## Data Structures

### Linked Lists
- [Singly Linked List](S_linkedList.c) - Implementation of a basic linked list with forward traversal
- [Doubly Linked List](D_linkedList.c) - Linked list with both forward and backward traversal capabilities
- [Circular Linked List](C_linkedList.c) - Linked list where the last node connects back to the first node

### Trees
- [Binary Tree](Binary_Tree.c) - Basic binary tree implementation with creation and traversal
- [Tree Traversals](Tree_traversal.c) - Implementation of Inorder, Preorder, and Postorder traversals

### Stack and Queue
- [Stack using Array](Stack_Array.c) - LIFO data structure implementation using array
- [Queue using Array](Queue_Array.c) - FIFO data structure implementation using array

### Graph
- [Graph using Adjacency Matrix](Graph_AdjMat.c) - Graph representation using 2D matrix

## Algorithms

### Searching
- [Linear Search](Linear_Search.c) - Simple sequential search algorithm
- [Binary Search](Binary_Search.c) - Efficient search algorithm for sorted arrays

### Sorting
- [Bubble Sort](Bubble_Sort.c) - Basic comparison-based sorting algorithm
- [Insertion Sort](Insertion_Sort.c) - Simple sorting algorithm that builds final array one item at a time

## Time Complexities

| Data Structure/Algorithm | Average Time Complexity | Space Complexity |
|-------------------------|------------------------|------------------|
| Linear Search           | O(n)                  | O(1)            |
| Binary Search           | O(log n)              | O(1)            |
| Bubble Sort             | O(n²)                 | O(1)            |
| Insertion Sort          | O(n²)                 | O(1)            |
| Stack Operations        | O(1)                  | O(n)            |
| Queue Operations        | O(1)                  | O(n)            |
| Linked List Traversal   | O(n)                  | O(n)            |
| Binary Tree Traversal   | O(n)                  | O(h)*           |

\* h is the height of the tree

## Usage

Each file is independent and can be compiled and run using a C compiler. For example:

```bash
gcc filename.c -o output
./output
```

## Contributing

Feel free to contribute to this repository by:
1. Adding new data structure implementations
2. Improving existing implementations
3. Adding more algorithms
4. Enhancing documentation

## License

This project is available for educational purposes. Feel free to use and learn from these implementations.