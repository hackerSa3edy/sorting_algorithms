# Project: 0x1B. C - Sorting algorithms & Big O

This project is a comprehensive study and implementation of various sorting algorithms in C. It aims to provide a deep understanding of different sorting techniques, their time complexities (Big O notation), and how to select the most efficient algorithm for a given input.

## Learning Objectives

- At the end of this project, you are expected to be able to explain to anyone, without the help of Google:
  - What is a sorting algorithm
  - What is the Big O notation, and how to evaluate the time complexity of an algorithm
  - How to select the best sorting algorithm for a given input
  - What is a stable sorting algorithm

## Implemented Sorting Algorithms

1. Bubble Sort - [0-bubble_sort.c](0-bubble_sort.c)
2. Insertion Sort - [1-insertion_sort_list.c](1-insertion_sort_list.c)
3. Selection Sort - [2-selection_sort.c](2-selection_sort.c)
4. Quick Sort - [3-quick_sort.c](3-quick_sort.c)
5. Merge Sort - [103-merge_sort.c](103-merge_sort.c)
6. Heap Sort - [104-heap_sort.c](104-heap_sort.c)

## Future Implementations

1. Shell Sort
2. Cocktail Shaker Sort
3. Counting Sort
4. Radix Sort
5. Bitonic Sort
6. Quick Sort (Hoare partition scheme)
7. Deck of Cards Sort

## Files

- [sort.h](sort.h): Header file containing all function prototypes and the `listint_t` data structure.
- [print_array.c](print_array.c): Function to print an array.
- [print_list.c](print_list.c): Function to print a linked list.
- `*-O`: Files containing the Big O notation for time complexity of each sorting algorithm.

## Compilation

All files should be compiled on Ubuntu 20.04 LTS using gcc with the following flags:

```sh
gcc -Wall -Werror -Wextra -pedantic -std=gnu89
```

## Usage

```sh
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 [MAIN_FILE] [SORT_FILE] print_array.c -o [OUTPUT_NAME]
./[OUTPUT_NAME]
```

For example, to run Bubble Sort:

```sh
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 0-main.c 0-bubble_sort.c print_array.c -o bubble
./bubble
```

## Data Structures

The project uses the following data structure for doubly linked lists:

```c
typedef struct listint_s
{
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;
```

## Big O Notation

Each sorting algorithm includes a file with its time complexity in Big O notation:

- Best case scenario
- Average case scenario
- Worst case scenario

## Author

- [Abdelrahman Mohamed](https://x.com/hackersa3edy/)

## Acknowledgements

This project was completed as part of the ALX Software Engineering curriculum.
