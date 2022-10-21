#include "main.h"

/**
 * print_line - prints _ depending on the input
 *
 * @n: Represents number of times n should be printed
 *
 * Return: Always 0 (Success)
 */


void print_line(int n)
{
	int i = 0;

	while (i <= n)
	{
		if (n == 0)
			break;
		_putchar('_');
		++i;
	}
	putchar('\n');
}
