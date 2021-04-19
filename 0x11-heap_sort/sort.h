#ifndef SORT_H
#define SORT_H

/* size_t */
#include <stddef.h>


/* supplied function */
void print_array(const int *array, size_t size);

/* task 0. Heap sort */
int iParent(int i);
int iLeftChild(int i);
void ConvertToHeap(int *array, size_t size);
void SiftDown(int *array, size_t size, int start, int end);
void heap_sort(int *array, size_t size);


#endif /* SORT_H */
