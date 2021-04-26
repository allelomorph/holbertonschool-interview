#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

/* size_t */
#include <stddef.h>

/* 0-advanced_binary.c */
int binary_search_recursion(int *array, int value,
			    size_t left, size_t right);
int advanced_binary(int *array, size_t size, int value);

#endif /* SEARCH_ALGOS_H */
