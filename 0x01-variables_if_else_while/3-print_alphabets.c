#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Printing in lowercase then uppercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	/* Declaring variables */
	char ch = 'a';
	char CH = 'A';

	/* printing a-z */
	while (ch <= 'z')
	{
		putchar(ch);
		++ch;
	}
	/* printing A-Z */
	while (CH <= 'Z')
	{
		putchar(CH);
		++CH;
	}
	putchar('\n');

	return (0);
}
