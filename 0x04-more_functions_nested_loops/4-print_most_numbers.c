#include "main.h"

/**
 * print_most_numbers - printing numbers excluding 2 and 4
 *
 * Return: Always 0 (Success)
 */

void print_most_numbers(void)
{
	int num = 0;

	do {
		if (num == 2 || num == 4)
			continue;

		_putchar(num + 48);
		num++;
		} while (num >= 0 && num <= 9);

	_putchar('\n');
}
