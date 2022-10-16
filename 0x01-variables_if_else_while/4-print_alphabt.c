#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: printing lower case letters except for q and e
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch = 'a';

	/* printing a-z excluding e and q */

	while (ch <= 'z')
	{
		if (ch == 'e' || ch == 'q')
			continue;
		putchar(ch);
		++ch;
	}
	putchar('\n');
}
