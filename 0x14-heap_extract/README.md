# (466) 0x14. Heap Extract
Specializations > Interview Preparation > Algorithms

---

### Project author
Alexa Orrico (source project by Alexandre Gautier)

### Assignment dates
05-10-2021 to 05-14-2021

### Description
Practice interview question originally appearing as task [39. Heap - Extract](https://github.com/allelomorph/binary_trees/blob/master/133-heap_extract.c) in [(270) 0x1D. C - Binary trees](https://github.com/allelomorph/binary_trees).

### Provided file(s)
* definitions of `binary_tree_t` and `heap_t` for [`binary_trees.h`](./binary_trees.h)
* [`binary_tree_print.c`](./binary_tree_print.c) (originally [`here`](https://github.com/holbertonschool/0x1C.c/blob/master/binary_tree_print.c))
* [`libheap.a`](./libheap.a) (originally [`here`](https://s3.amazonaws.com/intranet-projects-files/holbertonschool-low_level_programming/466/libheap.a))
* [`0-main.c`](./0-main.c)

---

## Mandatory Tasks

### :white_check_mark: 0. Heap - Extract
Write a function that extracts the root node of a Max Binary Heap:

* Prototype: `int heap_extract(heap_t **root);`
* `root` is a double pointer to the root node of the heap
* Your function must return the value stored in the root node
* The root node must be freed and replace with the last level-order node of the heap
* Once replaced, the heap must be rebuilt if necessary
* If your function fails, return 0

File(s): [`0-heap_extract.c`](./0-heap_extract.c)\
Compiled: `gcc -Wall -Wextra -Werror -pedantic -o 0-heap_extract 0-main.c 0-heap_extract.c binary_tree_print.c -L. -lheap`

---

## Student
* **Samuel Pomeroy** - [allelomorph](github.com/allelomorph)
