# (482) 0x18. Merge Sort
Specializations > Interview Preparation > Algorithms

---

### Project author
Alexa Orrico (source project by Alexandre Gautier)

### Assignment dates
06-07-2021 to 06-11-2021

### Description
Practice interview question originally appearing as task [7. Merge sort](https://github.com/allelomorph/sorting_algorithms/blob/master/103-merge_sort.c) in [(248) 0x1B. C - Sorting algorithms & Big O](https://github.com/allelomorph/sorting_algorithms/).

### Provided file(s)
* [`print_array.c`](./print_array.c)
* [`0-main.c`](./0-main.c)

---

## Mandatory Tasks

### :white_check_mark: 0. Merge sort
Write a function that sorts an array of integers in ascending order using the Merge Sort algorithm:

* Prototype: `void merge_sort(int *array, size_t size);`
* You must implement the top-down merge sort algorithm
    * When you divide an array into two sub-arrays, the size of the left array should always be <= the size of the right array. i.e. `{1, 2, 3, 4, 5}` -> `{1, 2}, {3, 4, 5}`
    * Sort the left array before the right array
* You are allowed to use `printf`
* You are allowed to use `malloc` and `free` only once (only one call)

In the file `0-O`, write the Big O notations of the time complexity of the Merge Sort algorithm, with 1 notation per line:

* in the best case
* in the average case
* in the worst case

File(s): [`0-merge_sort.c`](./0-merge_sort.c) [`0-O`](./0-O)\
Compiled: `gcc -Wall -Wextra -Werror -pedantic 0-main.c 0-merge_sort.c print_array.c -o merge`

---

## Student
* **Samuel Pomeroy** - [allelomorph](github.com/allelomorph)
