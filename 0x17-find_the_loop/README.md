# (472) 0x17. Find the Loop
Specializations > Interview Preparation > Algorithms

---

### Project author
Alexa Orrico (source project by Julien Barbier)

### Assignment dates
03-23-2020 to 03-25-2020

### Description
Practice interview question originally appearing as task **14. Find the loop** in [(230) 0x13. C - More singly linked lists](https://github.com/allelomorph/holbertonschool-low_level_programming/tree/master/0x13-more_singly_linked_lists).

### Provided file(s)
* [`lists.h`](./lists.h)
* [`libloop.a`](./libloop.a) (originally [`here`](https://s3.amazonaws.com/intranet-projects-files/interviews/472/libloop.a))
* [`0-main.c`](./0-main.c)

---

## Mandatory Tasks

### :white_check_mark: 0. Find the loop
Write a function that finds the loop in a linked list.

* Prototype: `listint_t *find_listint_loop(listint_t *head);`
* Returns: The address of the node where the loop starts, or NULL if there is no loop
* You are not allowed to use `malloc`, `free` or arrays
* You can only declare a maximum of two variables in your function

File(s): [`0-find_loop.c`](./0-find_loop.c)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra 0-main.c 0-find_loop.c -L. -lloop -o main`

---

## Student
* **Samuel Pomeroy** - [allelomorph](github.com/allelomorph)
