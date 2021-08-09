# (504) 0x20. RegEx
Specializations > Interview Preparation > Algorithms

---

### Project author
Alexandre Gautier

### Assignment dates
08-09-2021 to 08-13-2021

### Description
Practice interview question not appearing elsewhere in the curriculum. Building simple regular expression matching algorithm that only supports `.` and `*` syntax.

### Provided file(s)
* [`main.c`](./main.c)

---

## Mandatory Tasks

### :white_large_square: 0. Simple RegEx
Write a function that checks whether a given pattern matches a given string.

* Prototype: `int regex_match(char const *str, char const *pattern);`, where:
    * `str` is the string to scan
    * `pattern` is the regular expression
* Your function must return 1 if the pattern matches the string, or 0 if it doesn’t
* `str` can be empty, and can contain any ASCII character in the exception of `.` and `*`
* `pattern` can be empty, and can contain any ASCII character, including `.` and `*`
* The regular expression matching must support the characters `.` and `*`
    * `.` matches any single character
    * `*` matches zero or more of the preceding character

File(s): [`regex.c`](./regex.c) [`regex.h`](./regex.h)
Compiled: `gcc -Wall -Wextra -Werror -pedantic main.c regex.c`

---

## Student
* **Samuel Pomeroy** - [allelomorph](github.com/allelomorph)
