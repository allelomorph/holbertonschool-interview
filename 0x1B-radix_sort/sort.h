#ifndef SORT_H
#define SORT_H

/* size_t */
#include <stddef.h>

/* print_array.c */
void print_array(const int *array, size_t size);

/* 0. Radix sort */
int find_max(int *array, size_t size);
void init_bucket_sizes(int *bucket_sizes);
void build_buckets(int *bucket_sizes, int **buckets);
void into_array(int *array, size_t size, int **buckets, int *bucket_sizes);
void radix_sort(int *array, size_t size);

#endif /* SORT_H */
