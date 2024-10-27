# Sorting Algorithms Project

This repository contains implementations of various sorting algorithms in C.
Each algorithm is implemented with its corresponding time complexity analysis and test files.

## List of Implemented Algorithms

1. **Bubble Sort**

   - Implementation: `0-bubble_sort.c`
   - Time complexity: `0-O`
   - Test file: `0-main.c`

2. **Insertion Sort (Linked List)**

   - Implementation: `1-insertion_sort_list.c`
   - Time complexity: `1-O`
   - Test file: `1-main.c`

3. **Selection Sort**

   - Implementation: `2-selection_sort.c`
   - Time complexity: `2-O`
   - Test file: `2-main.c`

4. **Quick Sort**

   - Implementation: `3-quick_sort.c`
   - Time complexity: `3-O`
   - Test file: `3-main.c`

5. **Shell Sort**

   - Implementation: `100-shell_sort.c`
   - Test file: `100-main.c`

6. **Cocktail Sort (Linked List)**

   - Implementation: `101-cocktail_sort_list.c`
   - Time complexity: `101-O`
   - Test file: `101-main.c`

7. **Counting Sort**

   - Implementation: `102-counting_sort.c`
   - Time complexity: `102-O`
   - Test file: `102-main.c`

8. **Merge Sort**

   - Implementation: `103-merge_sort.c`
   - Time complexity: `103-O`
   - Test file: `103-main.c`

9. **Heap Sort**

   - Implementation: `104-heap_sort.c`
   - Time complexity: `104-O`
   - Test file: `104-main.c`

10. **Radix Sort**

    - Implementation: `105-radix_sort.c`
    - Test file: `105-main.c`

11. **Bitonic Sort**

    - Implementation: `106-bitonic_sort.c`
    - Time complexity: `106-O`
    - Test file: `106-main.c`

12. **Quick Sort (Hoare Partition)**

    - Implementation: `107-quick_sort_hoare.c`
    - Time complexity: `107-O`
    - Test file: `107-main.c`

13. **Deck Sort**
    - Implementation: `1000-sort_deck.c`
    - Header: `deck.h`
    - Test file: `1000-main.c`

## Utility Files

- `print_array.c`: Helper function to print arrays
- `print_list.c`: Helper function to print linked lists
- `sort.h`: Header file containing all function prototypes and data structures

## Directory Structure

- `bubble/`: Bubble sort related files
- `cocktail/`: Cocktail sort related files
- `counting/`: Counting sort related files
- `deck/`: Card deck sorting related files
- `heap/`: Heap sort related files
- `insertion/`: Insertion sort related files
- `merge/`: Merge sort related files
- `quick/`: Quick sort related files
- `radix/`: Radix sort related files
- `select/`: Selection sort related files
- `shell/`: Shell sort related files
- `bitonic/`: Bitonic sort related files

## Usage

To compile and test any sorting algorithm, use:

```bash
gcc -Wall -Wextra -Werror -pedantic <main-file> <sort-implementation> print_array.c print_list.c -o <output-name>
```

Example:

```bash
gcc -Wall -Wextra -Werror -pedantic 0-main.c 0-bubble_sort.c print_array.c -o bubble
```

## Time Complexity Files

Files ending with `-O` contain the time complexity analysis for their respective algorithms in this order:

1. Best case time complexity
2. Average case time complexity
3. Worst case time complexity

## Data Structures

The linked list node structure used in this project:

```c
typedef struct listint_s
{
    int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;
```

For the deck sorting algorithm, the card structures are defined in `deck.h`.

## Requirements

- All files are compiled on Ubuntu 20.04 LTS using gcc
- Code follows the Betty style
- No global variables
- No more than 5 functions per file
- Only allowed to use the C standard library
