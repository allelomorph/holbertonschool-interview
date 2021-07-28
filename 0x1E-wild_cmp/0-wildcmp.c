#include "holberton.h"
/* true false */
#include <stdbool.h>
/* strrchr */
#include <string.h>
/* fprintf */
#include <stdio.h>


/* Special project requirement - no looping of any kind not allowed. */
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
	switch (*pattern)
	{
	case '*':
		if (*base == '*')
			return (_wildcmp(base + 1, pattern + 1, false));
		return (_wildcmp(base, pattern + 1, true));
	case '?':
		if (!*base)
			return (0);
		return (_wildcmp(base + 1, pattern + 1, false));
	default:
		if (wildcard)
		{
			/* advance base until last occurance of *pattern */
			base = strrchr(base, *pattern);
			if (!base)
				return (0);
		}

		if (*base == *pattern)
		{
			if (*pattern == '\0')
				return (1);
			return (_wildcmp(base + 1, pattern + 1, false));
		}
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
