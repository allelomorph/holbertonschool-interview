#include <stdio.h>

#include "regex.h"

#define TEST_MATCH(s, p)	do {\
	{\
		int res = regex_match(s, p);\
		printf("\"%s\" -> /%s/ = %d\n", s, p, res);\
	}\
} while(0)

/**
 * main - Entry point
 *
 * Return: EXIT_SUCCESS or EXIT_FAILURE
 */
int main(void)
{
	/* main_2.c */
	TEST_MATCH("", "A");
	printf("[Expected] \"\" -> /A/ = 0\n");

	/* main_5.c */
	TEST_MATCH("A", "AA");
	printf("[Expected] \"A\" -> /AA/ = 0\n");

	/* main_33.c */
	TEST_MATCH("", ".*");
	printf("[Expected] \"\" -> /.*/ = 1\n");

	/* main_40.c */
	TEST_MATCH("ABC", "Z*ABC.*");
	printf("[Expected] \"ABC\" -> /Z*ABC.*/ = 1\n");

	/* main_43.c */
	TEST_MATCH("ABC", ".*.*");
	printf("[Expected] \"ABC\" -> /.*.*/ = 1\n");

	/* main_44.c */
	TEST_MATCH("ABC", ".*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*");
	printf("[Expected] \"ABC\" -> /.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*/ = 1\n");

	/* main_45.c */
	TEST_MATCH("", ".*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*");
	printf("[Expected] \"\" -> /.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*/ = 1\n");

        /* main_50.c */
	TEST_MATCH("Lorem ipsum dolor si amet", "Lorem ipsum dolor si amet.*");
	printf("[Expected] \"Lorem ipsum dolor si amet\" -> /Lorem ipsum dolor si amet.*/ = 1\n");

        /* main_51.c */
	TEST_MATCH("Lorem ipsum dolor si amet", ".*Lorem ipsum dolor si amet.*");
	printf("[Expected] \"Lorem ipsum dolor si amet\" -> /.*Lorem ipsum dolor si amet.*/ = 1\n");

        /* main_52.c */
	TEST_MATCH("Lorem ipsum dolor si amet", ".*Lorem..*ipsum dolor si amet.*");
	printf("[Expected] \"Lorem ipsum dolor si amet\" -> /.*Lorem..*ipsum dolor si amet.*/ = 1\n");

	/* main_53.c */
	TEST_MATCH("Lorem ipsum dolor si amet", ".*Lorem.*ipsum dolor si amet.*");
	printf("[Expected] \"Lorem ipsum dolor si amet\" -> /.*Lorem.*ipsum dolor si amet.*/ = 1\n");

        /* main_54.c */
	TEST_MATCH("Lorem ipsum dolor si amet", ".*Lorem ip*sum *dolor si amet.*");
	printf("[Expected] \"Lorem ipsum dolor si amet\" -> /.*Lorem ip*sum *dolor si amet.*/ = 1\n");

	/* main_55.c */
	TEST_MATCH("Lorem ipsum dolor si amet", ".*Lorem ..... *dolor si amet.*");
	printf("[Expected] \"Lorem ipsum dolor si amet\" -> /.*Lorem ..... *dolor si amet.*/ = 1\n");

	/* main_56.c */
	TEST_MATCH("Lorem ipsum dolor si amet", ".*Lorem ..*... *dolor si amet.*");
	printf("[Expected] \"Lorem ipsum dolor si amet\" -> /.*Lorem ..*... *dolor si amet.*/ = 1\n");

	return (0);
}
