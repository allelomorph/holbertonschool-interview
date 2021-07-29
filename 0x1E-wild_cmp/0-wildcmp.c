#include "holberton.h"
/* true false */
#include <stdbool.h>
/* fprintf */
#include <stdio.h>


/*
 * Special project requirements:
 * - You are not allowed to use loops of any kind.
 * - ltrace allowed functions: write, printf, putchar, puts
 * - static variables are not allowed
 */
/**
 * globMatch - recursive helper to _wildcmp, checks substrings in base and
 *   pattern to see if the local base substring is a valid match to the local
 *   pattern substring following the current wildcard, or if the current
 *   wildcard should continue to skip ahead in the base string
 *
 * @base: current position in base string for comparison
 * @pattern: current postion in pattern string to compare to - can contain the
 *   special character `*`, which can represent any string (including an empty
 *   string)
 *
 * Return: 1 if glob matches base after current wildcard, 0 if not or failure
 */
int globMatch(char *base, char *pattern, int *tested_indicies)
{
	if (!base || !pattern || !tested_indicies)
		return (0);
/*
	printf("\t\tglobMatch: base:'%s' pattern:'%s' *tested_indicies:%i\n", base, pattern, *tested_indicies);
*/
	(*tested_indicies)++;

	/*
	 * If glob is at end of pattern or is bounded by another wildcard,
	 * then it counts as a match beyond the current wildcard.
	 */
	if (*(pattern + 1) == '\0' || *(pattern + 1) == '*')
		return (1);

	if (*base == *pattern)
		return (globMatch(base + 1, pattern + 1, tested_indicies));

	return (0);
}


/**
 * _wildcmp - recursive helper to wildcmp, compares two strings using
 *   UNIX-like asterisk wildcard syntax
 *
 * @base: current position in base string for comparison
 * @pattern: current postion in pattern string to compare to - can contain the
 *   special character `*`, which can represent any string (including an empty
 *   string)
 * @wildcard: flag to indicate if last character read in pattern was a '*'
 *
 * Return: 1 if the strings can be considered identical, 0 if not or failure
 */
int _wildcmp(char *base, char *pattern, bool wildcard)
{
	int offset = 0;
	int retval;

	if (!base || !pattern)
		return (0);
/*
	printf("\t_wildcmp: base:'%s' pattern:'%s' wildcard:%s\n", base, pattern, wildcard ? "true" : "false");
*/
	if (*pattern == '*')
		return (_wildcmp(base, pattern + 1, true));

	if (*pattern == '?')
	{
		if (*base == '\0')
			return (0);

		return (_wildcmp(base + 1, pattern + 1, false));
	}

	if (wildcard)
	{
		if (*base == '\0')
		{
			if (*pattern)
				return (0);
			else
				return (1);
		}

		if (*base == *pattern)
		{
			retval = globMatch(base, pattern, &offset);
/*
			printf("\t\t\tglobMatch:%i offset:%i\n", retval, offset);
*/
			if (retval)
			{
			        return (_wildcmp(base + offset,
						 pattern + offset, false));
			}
			return (_wildcmp(base + offset, pattern, true));
		}

		return (_wildcmp(base + 1, pattern, true));
	}


	if (*base == *pattern)
	{
		if (*base == '\0')
			return (1);

		return (_wildcmp(base + 1, pattern + 1, false));
	}

	return (0);
}


/**
 * wildcmp - compares two strings using UNIX-like asterisk wildcard syntax
 *
 * @s1: base string for comparison
 * @s2: pattern string to compare to - can contain the special character `*`,
 *   which can represent any string (including an empty string)
 *
 * Return: 1 if the strings can be considered identical, 0 if not or failure
 */
int wildcmp(char *s1, char *s2)
{
	if (!s1 || !s2)
	{
		fprintf(stderr, "wildcmp: NULL parameter(s)\n");
		return (0);
	}

	return (_wildcmp(s1, s2, false));
}
