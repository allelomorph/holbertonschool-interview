# (461) 0x0E. Linear search in skip list
Specializations > Interview Preparation > Algorithms

---

### Project author
Alexandre Gautier (source project by Alexandre Gautier)

### Assignment dates
03-29-2021 to 04-02-2021

### Description
Practice interview question originally appearing as task [13. Linear search in a skip list](https://github.com/allelomorph/holbertonschool-low_level_programming/blob/master/0x1E-search_algorithms/106-linear_skip.c) in [(295) 0x1E. C - Search Algorithms](https://github.com/allelomorph/holbertonschool-low_level_programming/tree/master/0x1E-search_algorithms).

### Provided file(s)
* [`search.h`](./search.h)
* [create_skiplist.c](./skiplist/create_skiplist.c), original [here](https://github.com/holbertonschool/0x0E.Linear_search-in_skip_list/blob/main/create_skiplist.c)
* [free_skiplist.c](./skiplist/free_skiplist.c), original [here](https://github.com/holbertonschool/0x0E.Linear_search-in_skip_list/blob/main/free_skiplist.c)
* [print_skiplist.c](./skiplist/print_skiplist.c), original [here](https://github.com/holbertonschool/0x0E.Linear_search-in_skip_list/blob/main/print_skiplist.c)
* [`0-main.c`](./0-main.c)

---

## Mandatory Tasks

### :white_check_mark: 0. Linear search in a skip list
Looking for a specific value in a singly linked list always leads to browse every element of the list. A common way to optimize the time complexity of a search in a singly linked list is to modify the list itself by adding an “express lane” to browse it. A linked list with an express lane is called a skip list.

Write a function that searches for a value in a sorted skip list of integers.

* Prototype : `skiplist_t *linear_skip(skiplist_t *list, int value);`
* Where `list` is a pointer to the head of the skip list to search in
* A node of the express lane is placed every index which is a multiple of the square root of the size of the list
* And `value` is the value to search for
* You can assume that `list` will be sorted in ascending order
* Your function must return a pointer on the first node where `value` is located
* If `value` is not present in `list` or if `head` is `NULL`, your function must return `NULL`
* Every time you compare a value in the list to the value you are searching, you have to print this value

File(s): [`0-linear_skip.c`](./0-linear_skip.c) [`search.h`](./search.h)\
Compiled: `gcc -Wall -Wextra -Werror -pedantic 0-main.c 0-linear_skip.c skiplist/*.c -lm -o 0-linear_skip`

---

## Student
* **Samuel Pomeroy** - [allelomorph](github.com/allelomorph)
