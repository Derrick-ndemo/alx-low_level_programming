#include <stdio.h>

/**
 * main - Entry point
 *
 * Printing the lower case followe by a new line
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch = 'a';

	/* loop so long as char has not yet gotten to z */
	/* Prints a-z */

	while (ch <= 'z')
	{
		putchar(ch);
		++ch;
	}
	putchar('\n');
	return (0);
}
