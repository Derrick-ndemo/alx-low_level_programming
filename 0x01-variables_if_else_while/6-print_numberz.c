#include <stdio.h>

/**
 * main - Entry point
 *
 * Description - printing 0-9 using putchar
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num = 0;

	while (num <= 9)
	{
		/* converts num to ASCII rep */
		putchar(num + '0');
		++num;
	}
	putchar('\n');

	return (0);
}
