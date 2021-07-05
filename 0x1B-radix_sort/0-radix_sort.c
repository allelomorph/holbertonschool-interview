#include "sort.h"

/* fprintf */
#include <stdio.h>
/* memset */
#include <string.h>
/* malloc free EXIT_FAILURE EXIT_SUCCESS */
#include <stdlib.h>


/**
 * init_bucket_sizes - resets bucket_sizes values to 0
 *
 * @bucket_sizes: array containing amounts of members for arrays in `buckets`
 */
void init_bucket_sizes(int *bucket_sizes)
{
	if (!bucket_sizes)
	{
		fprintf(stderr, "init_bucket_sizes: NULL parameters\n");
		exit(EXIT_FAILURE);
	}

	memset(bucket_sizes, 0, sizeof(int) * 10);
}


/**
 * build_buckets - allocates space for arrays to be held in `buckets`
 *
 * @buckets: array of arrays each containing sorted members of original array
 *   passed to radix_sort
 * @bucket_sizes: array containing amounts of members for arrays in `buckets`
 */
void build_buckets(int *bucket_sizes, int **buckets)
{
	int *bucket;
	int i;

	if (!bucket_sizes || !buckets)
	{
		fprintf(stderr, "build_buckets: NULL parameters\n");
		exit(EXIT_FAILURE);
	}

	for (i = 0; i < 10; i++)
	{
		bucket = malloc(sizeof(int) * bucket_sizes[i]);
		if (!bucket)
		{
			for (; i > -1; i--)
				free(buckets[i]);
			free(buckets);
			exit(EXIT_FAILURE);
		}

		buckets[i] = bucket;
	}

	init_bucket_sizes(bucket_sizes);
}


/**
 * find_max - searches array of integers for highest value
 *
 * @array: array of values to be searched
 * @size: number of elements in array
 * Return: largest integer stored in array
 */
int find_max(int *array, size_t size)
{
	int max;
	size_t i;

	max = array[0];
	for (i = 1; i < size; i++)
		if (array[i] > max)
			max = array[i];
	return (max);
}


/**
 * into_array - flattens buckets into array sorted by current digit place,
 * then prints results and frees current buckets for next pass
 *
 * @array: array of values to be printed
 * @size: number of elements in array
 * @buckets: array of arrays each containing sorted members of `array`
 * @bucket_sizes: array containing amounts of members for arrays in `buckets`
 */
void into_array(int *array, size_t size, int **buckets, int *bucket_sizes)
{
	int i, j, k;

	/* flatten bucket members in order into array sorted by place */
	for (i = 0, k = 0; i < 10; i++)
	{
		for (j = 0; j < bucket_sizes[i]; j++, k++)
			array[k] = buckets[i][j];
	}

	/* print results */
	print_array(array, size);

	/* free buckets from current pass */
	for (i = 0; i < 10; i++)
		free(buckets[i]);
}


/**
 * radix_sort - sorts an array of integers in ascending order using the (LSD)
 *   Radix sort algorithm
 *
 * Notes: While taking an array of signed type `int`, assumes that values in
 *   `array` are all >= 0. Size of `bucket_sizes` here determined by max range
 *   of key variance (digits 0-9), may need to set to variable for other
 *   ranges.
 *
 * @array: array of values to be sorted
 * @size: number of elements in array
 */
void radix_sort(int *array, size_t size)
{
	int **buckets;
	int bucket_sizes[10];
	int max, max_digits, pass, divisor, digit;
	size_t i;

	if (!array || size < 2)
		return;
	buckets = malloc(sizeof(int *) * 10);
	if (!buckets)
		exit(EXIT_FAILURE);
	/* find amount of places in largest element */
	max = find_max(array, size);
	for (max_digits = 0; max > 0; max_digits++)
		max /= 10;
	/* one sorting pass for each place in max_digits */
	for (pass = 0, divisor = 1; pass < max_digits; pass++, divisor *= 10)
	{
		init_bucket_sizes(bucket_sizes);
		/* find amount of members in each bucket */
		for (i = 0; i < size; i++)
		{
			digit = (array[i] / divisor) % 10;
			bucket_sizes[digit]++;
		}
		build_buckets(bucket_sizes, buckets);
		/* fill buckets sorting by digit at current power of 10 */
		for (i = 0; i < size; i++)
		{
			/* find digit of source element at that power of 10 */
			digit = (array[i] / divisor) % 10;
			/* place member of source array in digit's bucket */
			buckets[digit][bucket_sizes[digit]] = array[i];
			/* record increase in bucket fill level */
			bucket_sizes[digit]++;
		}
		into_array(array, size, buckets, bucket_sizes);
	}
	free(buckets);
}
