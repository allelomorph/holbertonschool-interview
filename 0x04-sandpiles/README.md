# (460) 0x04. Sandpiles
Specializations > Interview Preparation > Algorithms

---

### Project author
Alexandre Gautier

### Assignment dates
01-11-2021 to 01-15-2021

### Description
Practice interview question not appearing elsewhere in the curriculum. Logic puzzle involving tracking the values of integers in a grid as they "overflow" into their neighboring cells.

### Provided file(s)
* [`0-main.c`](./0-main.c) [`1-main.c`](./1-main.c)

---

## Mandatory Tasks

### :white_check_mark: 0. Sandpiles sum
Write a function that computes the sum of two sandpiles

* Prototype: `void sandpiles_sum(int grid1[3][3], int grid2[3][3]);`
* You can assume that both `grid1` and `grid2` are individually stable
* A sandpile is considered stable when none of its cells contains more than 3 grains
* When your function is done, `grid1` must be stable
* `grid1` must be printed before each toppling round, only if it is unstable
* You’re not allowed to allocate memory dynamically

File(s): [`0-sandpiles.c`](./0-sandpiles.c)\
Compiled: `gcc -Wall -Wextra -Werror -pedantic 0-main.c 0-sandpiles.c -o 0-sandpiles`\
`gcc -Wall -Wextra -Werror -pedantic 1-main.c 0-sandpiles.c -o 0-sandpiles`

---

## Student
* **Samuel Pomeroy** - [allelomorph](github.com/allelomorph)
