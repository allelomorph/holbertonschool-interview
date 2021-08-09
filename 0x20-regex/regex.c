#include "regex.h"
/* fprintf */
#include <stdio.h>


/**
 * regex_match - checks whether a given pattern matches a given string
 *
 * @str: string to scan
 *   - can be empty, or contain any ASCII values other than '.' or '*'
 * @pattern: regular expression pattern to match
 *   - can be empty, or contain any ASCII values
 *
 * Return: 1 on successful match, 0 if not or on failure
 */
int regex_match(char const *str, char const *pattern)
{
	if (!str || !pattern)
	{
		fprintf(stderr, "regex_match: NULL parameter(s)\n");
		return (0);
	}
}
