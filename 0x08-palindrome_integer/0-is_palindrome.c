#include "palindrome.h"


/**
 * pow10Recursion - recurstively finds power of 10
 *
 * @e: exponent
 * Return: 10 ^ e
 */
unsigned long pow10Recursion(unsigned int e)
{
	if (e == 0)
		return (1);
	else
		return (10 * pow10Recursion(e - 1));
}


/**
 * palindromeRecursion - helper to is_palindrome, recursively compares
 * digits in an unsigned int
 *
 * @n: number to check
 * @upper_p10: power of 10 at first position to compare
 * @lower_p10: power of 10 at second position to compare
 * @mid: power of 10 at midpoint of comparison
 * Return: 1 if n is a palindrome, and 0 otherwise
 */
int palindromeRecursion(unsigned long n,
			unsigned int upper_p10, unsigned int lower_p10,
			unsigned int mid)
{
	unsigned int low, high;

	high = (n / pow10Recursion(upper_p10)) % 10;
	low = (n % pow10Recursion(lower_p10 + 1)) / pow10Recursion(lower_p10);

	if (low == high)
	{
		if (upper_p10 == mid)
			return (1);
		else
			return (palindromeRecursion(n, upper_p10 - 1,
						    lower_p10 + 1, mid));
	}

	return (0);
}

/**
 * is_palindrome - checks whether or not a given unsigned integer is a
 * palindrome
 *
 * @n: number to check
 * Return: 1 if n is a palindrome, and 0 otherwise
 */
int is_palindrome(unsigned long n)
{
	unsigned int upper_p10 = 1, mid;

	if (n < 10)
		return (1);

	/* stops at 10 ^ 20 for ULONG_MAX at 18446744073709551615 */
	while (n / pow10Recursion(upper_p10) > 10)
	{
		upper_p10++;
		if (upper_p10 == 20)
			break;
	}

	if (upper_p10 % 2)
		mid = (upper_p10 + 1) / 2;
	else
		mid = upper_p10 / 2;

	return (palindromeRecursion(n, upper_p10, 0, mid));
}
