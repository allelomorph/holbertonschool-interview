#include "menger.h"

#include <math.h>
/* puts putchar */
#include <stdio.h>
/* malloc free */
#include <stdlib.h>

#include <stdbool.h>


static void testPrintVoidCoords(int level, int **coords)
{
	int i, j, arr_sz;

	if (level < 1 || coords == NULL)
		return;

	arr_sz = (int)pow(3, level - 1);

	for (i = 0; i < level; i++)
	{
		for (j = 0; j < arr_sz; j++)
			printf("%3i ", coords[i][j]);
		putchar('\n');
	}
}


static void print2DMengerSponge(int level, int **coords)
{
	int x, y, i, j, k, sponge_sz, arr_sz;
	bool cell;

	if (level < 1 || coords == NULL)
		return;

	sponge_sz = (int)pow(3, level);
	arr_sz = (int)pow(3, level - 1);

	for (y = 1; y <= sponge_sz; y++)
	{
		for (x = 1; x <= sponge_sz; x++)
		{
			cell = false;
			for (i = 0; i < level && !cell; i++)
			{
				for (j = 0; j < arr_sz && !cell; j++)
				{
					if (y == coords[i][j])
					{
						for (k = 0;
						     k < arr_sz && !cell; k++)
						{
							if (x == coords[i][k])
								cell = true;
						}
					}
				}

			}
			putchar(cell ? ' ' : '#');
		}
		putchar('\n');
	}
}


static void freeVoidCoords(int **void_coords, int stop_i)
{
	int i;

	for (i = 0; i < stop_i; i++)
		free(void_coords[i]);
	free(void_coords);
}


static int *MengerSpongeVoidCoords(int level, int layer)
{
	int *arr = NULL;
	int arr_sz, arr_i, j, k;

	if (level < 1 || layer < 0 ||
	    layer >= level)
		return (NULL);

	arr_sz = (int)pow(3, level - 1);

	arr = malloc(sizeof(int) * arr_sz);
	if (!arr)
	{
		fprintf(stderr, "MengerSpongeVoidCoords: malloc failure\n");
		return (NULL);
	}

	arr_i = 0;
	while (arr_i < arr_sz)
	{
		for (j = 0; j < (int)pow(3, level - (level - layer)); j++)
		{
			for (k = 1; k <= (int)pow(3, level - (layer + 1)); k++)
			{
				arr[arr_i] = (int)pow(3, level - (layer + 1)) +
					((int)pow(3, level - layer) * j) + k;
				arr_i++;
			}
		}
	}

	return (arr);
}


/**
 * menger - draws a 2 dimensional version of a Menger Sponge, in '#' and ' '
 *
 * @level: level of fractal sponge - 0 = 1x1, 1 = 3x3, 2 = 9x9, etc.
 */
void menger(int level)
{
	int **void_coords = NULL;
	int i;

	if (level < 0)
		return;

	if (level == 0)
	{
		puts("#");
		return;
	}

	void_coords = malloc(sizeof(int *) * level);
	if (!void_coords)
	{
		fprintf(stderr, "menger: malloc failure\n");
		return;
	}

	for (i = 0; i < level; i++)
	{
		void_coords[i] = MengerSpongeVoidCoords(level, i);
		if (!void_coords[i])
		{
			freeVoidCoords(void_coords, i);
			return;
		}
	}

	testPrintVoidCoords(level, void_coords);

	print2DMengerSponge(level, void_coords);

	freeVoidCoords(void_coords, level);
}
