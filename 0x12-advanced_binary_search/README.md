# (464) 0x12. Advanced Binary Search
Specializations > Interview Preparation > Algorithms

---

### Project author
Alexa Orrico (source project by Wilfried Hennuyer)

### Assignment dates
04-26-2021 to 04-30-2021

### Description
Practice interview question originally appearing as task [11. Advanced binary search](https://github.com/allelomorph/holbertonschool-low_level_programming/blob/master/0x1E-search_algorithms/104-advanced_binary.c) in [(295) 0x1E. C - Search Algorithms](https://github.com/allelomorph/holbertonschool-low_level_programming/tree/master/0x1E-search_algorithms).

### Provided file(s)
* [`0-main.c`](./0-main.c)

---

## Mandatory Tasks

### :white_check_mark: 0. Advanced Binary Search
You may have noticed that basic binary search does not necessarily return the index of the *first* value in the array (if this value appears more than once in the array). In this exercise, you’ll have to solve this problem.

Write a function that searches for a value in a sorted array of integers.

* Prototype : `int advanced_binary(int *array, size_t size, int value);`
* `array` is a pointer to the first element of the array to search in
* `size` is the number of elements in `array`
* `value` is the value to search for
* Your function must return the index where `value` is located
* You can assume that `array` will be sorted in ascending order
* If `value` is not present in `array` or if `array` is `NULL`, your function must return -1
* Every time you split the array, you have to print the new array (or subarray) you’re searching in
* You have to use recursion. You may only use one loop (`while`, `for`, `do while`, etc.) in order to print the array

File(s): [`0-advanced_binary.c`](./0-advanced_binary.c) [`search_algos.h`](./search_algos.h)\
Compiled: `gcc -Wall -Wextra -Werror -pedantic 0-main.c 0-advanced_binary.c -o 0-advanced_binary`

---

## Student
* **Samuel Pomeroy** - [allelomorph](github.com/allelomorph)
