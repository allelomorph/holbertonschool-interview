# (465) 0x02. Heap Insert
Specializations > Interview Preparation > Algorithms

---

### Project author
Alexa Orrico (source project by Alexandre Gautier)

### Assignment dates
12-18-2020 to 12-24-2020

### Description
Practice interview question originally appearing as tasks [0. New node](https://github.com/allelomorph/binary_trees/0-binary_tree_node.c) and [37. Heap - Insert](https://github.com/allelomorph/binary_trees/131-heap_insert.c) in [(270) 0x1D. C - Binary trees](https://github.com/allelomorph/binary_trees).

### Provided file(s)
* definition of `struct binary_tree_s` and `heap_t` for [`binary_trees.h`](./binary_trees.h)
* [`binary_tree_print.c`](./binary_tree_print.c), originally [here](https://github.com/holbertonschool/0x1C.c/blob/master/binary_tree_print.c)
* [`0-main.c`](./0-main.c)
* [`1-main.c`](./1-main.c)

---

## Mandatory Tasks

### :white_check_mark: 0. New node
Write a function that creates a binary tree node:

* Prototype: `binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);`
* `parent` is a pointer to the parent node of the node to create
* `value` is the value to put in the new node
* When created, a node does not have any children
* Your function must return a pointer to the new node, or `NULL` on failure

File(s): [`0-binary_tree_node.c`](./0-binary_tree_node.c)\
Compiled: `gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 0-main.c 0-binary_tree_node.c -o 0-node`

### :white_check_mark: 1. Heap - Insert
Write a function that inserts a value into a Max Binary Heap:

* Prototype: `heap_t *heap_insert(heap_t **root, int value);`
* `root` is a double pointer to the root node of the Heap
* `value` is the value to store in the node to be inserted
* Your function must return a pointer to the inserted node, or `NULL` on failure
* If the address stored in root is NULL, the created node must become the root node.
* You have to respect a Max Heap ordering
* You are allowed to have up to 6 functions in your file

File(s): [`0-binary_tree_node.c`](./0-binary_tree_node.c) [`1-heap_insert.c`](./1-heap_insert.c)\
Compiled: `gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 1-main.c 1-heap_insert.c 0-binary_tree_node.c -o 1-heap_insert`

---

## Student
* **Samuel Pomeroy** - [allelomorph](github.com/allelomorph)
