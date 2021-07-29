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
	if (*pattern == '*')
		return (_wildcmp(base, pattern + 1, true));

	if (*base == *pattern)
	{
		if (*base == '\0')
			return (1);

		return (_wildcmp(base + 1, pattern + 1, false));
	}

	if (wildcard)
		return (_wildcmp(base + 1, pattern, wildcard));

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
