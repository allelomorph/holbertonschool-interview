# (455) 0x0D. Array to AVL
Specializations > Interview Preparation > Algorithms

---

### Project author
Alexandre Gautier (source project by Alexandre Gautier)

### Assignment dates
03-22-2021 to 03-26-2021

### Description
Practice interview question originally appearing as task [34. AVL - From sorted array](https://github.com/allelomorph/binary_trees/blob/master/124-sorted_array_to_avl.c) in [(270) 0x1D. C - Binary trees](https://github.com/allelomorph/binary_trees).

### Provided file(s)
* definitions of `struct binary_tree_s`, `binary_tree_t`, and `avl_t` for [`binary_trees.h`](./binary_trees.h)
* [`binary_tree_print.c`](./binary_tree_print.c), original [here](https://github.com/holbertonschool/0x1C.c/blob/master/binary_tree_print.c)
* [`0-main.c`](./0-main.c)

---

## Mandatory Tasks

### :white_check_mark: 0. AVL - From sorted array
Write a function that builds an AVL tree from an array

* Prototype: `avl_t *sorted_array_to_avl(int *array, size_t size);`
* Where `array` is a pointer to the first element of the array to be converted
* And `size` is the number of element in the array
* Your function must return a pointer to the root node of the created AVL tree, or `NULL` on failure
* You can assume there will be no duplicate value in the array
* You are not allowed to rotate
* You can only have 3 functions in your file

File(s): [`0-sorted_array_to_avl.c`](./0-sorted_array_to_avl.c)\
Compiled: `gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 0-main.c 0-sorted_array_to_avl.c -o 0-sorted_array_to_avl`

---

## Student
* **Samuel Pomeroy** - [allelomorph](github.com/allelomorph)
