# (478) 0x1A. Double Circular Linked List
Specializations > Interview Preparation > Algorithms

---

### Project author
Alexa Orrico

### Assignment dates
06-28-2021 to 07-02-2021

### Description
Practice interview question not appearing elsewhere in the original curriculum, but similar to task **8. Part 3 (Double circular linked lists) - Add nodes** in project **(176) Advanced Linked Lists** in the revised curriculum. Write subroutines to add a node to the beginning and end of a double circular linked list.

### Provided file(s)
* definition of `List` for [`list.h`](./list.h)
* [`0-main.c`](./0-main.c)

---

## Mandatory Tasks

### :white_check_mark: 0. Add Nodes
Create the source file `0-add_node.c` that contains the following functions:

* Add a new node to **the end** of a double circular linked list:
    * Prototype: `List *add_node_end(List **list, char *str);`
    * `List`: the list to modify
        * `str`: the string to copy into the new node
        * Returns: Address of the new node, or `NULL` on failure
* Add a new node to **the beginning** of a double circular linked list:
    * Prototype: `List *add_node_begin(List **list, char *str);`
    * `List`: the list to modify
        * `str`: the string to copy into the new node
        * Returns: Address of the new node, or `NULL` on failure

File(s): [`0-add_node.c`](./0-add_node.c)\
Compiled: `gcc -Wall -Wextra -Werror -pedantic 0-main.c 0-add_node.c`

---

## Student
* **Samuel Pomeroy** - [allelomorph](github.com/allelomorph)
