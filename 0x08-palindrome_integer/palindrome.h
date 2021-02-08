#ifndef PALINDROME_H
#define PALINDROME_H

int is_palindrome(unsigned long n);
int palindromeRecursion(unsigned long n,
			unsigned int upper_p10, unsigned int lower_p10,
			unsigned int mid);
unsigned long pow10Recursion(unsigned int p);

#endif /* PALINDROME_H */
