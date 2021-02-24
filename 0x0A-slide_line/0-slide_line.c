#include "slide_line.h"

/* fprintf */
#include <stdio.h>


/**
 * slide_line_left - helper to slide_line, reproduces a version of the "2048"
 * game mechanics, on a single horizontal line, sliding left
 *
 * @line: array of integers
 * @size: amount of members in `line`
 * Return: 1 upon success, or 0 upon failure
 */
static void slide_line_left(int *line, size_t size)
{
	int i, j;

	/* first pass: compress all values to left */
	for (i = 0; i < (int)size; i++)
	{
		/* step to next 0 */
		if (line[i] == 0)
		{
			/* step to next non-0 */
			for (j = i; j < (int)size; j++)
			{
				if (line[j] != 0)
				{
					line[i] = line[j];
					line[j] = 0;
					break;
				}
			}
		}
		if (j == (int)size)
			break;
	}

	/* second pass: combine values from left */
	for (i = 0; i < (int)size - 1 && line[i] != 0; i++)
	{
		/* combine adjacent identical values */
		if (line[i + 1] == line[i])
		{
			line[i] *= 2;
			/* slide remaining values into place */
			for (j = i + 1; j < (int)size - 1; j++)
				line[j] = line[j + 1];
			/* add 0 padding to right to replace value */
			line[j] = 0;
		}
	}
}


/**
 * slide_line_right - helper to slide_line, reproduces a version of the "2048"
 * game mechanics, on a single horizontal line, sliding right
 *
 * @line: array of integers
 * @size: amount of members in `line`
 * Return: 1 upon success, or 0 upon failure
 */
static void slide_line_right(int *line, size_t size)
{
	int i, j;

	/* first pass: compress all values to right */
	for (i = (int)size - 1; i > -1; i--)
	{
		/* step to next 0 */
		if (line[i] == 0)
		{
			/* step to next non-0 */
			for (j = i; j > -1; j--)
			{
				if (line[j] != 0)
				{
					line[i] = line[j];
					line[j] = 0;
					break;
				}
			}
		}
		if (j == 0)
			break;
	}

	/* second pass: combine values from right */
	for (i = (int)size - 1; i > 0 && line[i] != 0; i--)
	{
		/* combine adjacent identical values */
		if (line[i - 1] == line[i])
		{
			line[i] *= 2;
			/* slide remaining values into place */
			for (j = i - 1; j > 0; j--)
				line[j] = line[j - 1];
			/* add 0 padding to left to replace value */
			line[j] = 0;
		}
	}
}

/**
 * slide_line - reproduces a version of the "2048" game mechanics, on a single
 * horizontal line
 *
 * @line: array of integers
 * @size: amount of members in `line`
 * @direction: integer indicating left or right movement, expect macros
 * SLIDE_LEFT and SLIDE_RIGHT
 * Return: 1 upon success, or 0 upon failure
 */
int slide_line(int *line, size_t size, int direction)
{
	int i;

	/* screen invalid args */
	if (line == NULL || size == 0 ||
	    (direction != SLIDE_LEFT && direction != SLIDE_RIGHT))
	{
		fprintf(stderr, "slide_line: invalid args\n");
		return (0);
	}

	/* reject arrays with any odd numbers */
	for (i = 0; i < (int)size; i++)
	{
		if (line[i] % 2)
		{
			fprintf(stderr, "slide_line: odd number in array\n");
			return (0);
		}
	}

	/* array of 1 is already solved */
	if ((int)size == 1)
		return (1);

	if (direction == SLIDE_LEFT)
		slide_line_left(line, size);

	if (direction == SLIDE_RIGHT)
		slide_line_right(line, size);

	return (1);
}
