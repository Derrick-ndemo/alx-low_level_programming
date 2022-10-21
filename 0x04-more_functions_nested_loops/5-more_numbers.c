#include "main.h"

/**
 * more_numbers - prints numbers from 0-14 ten times
 *
 * Return: Always 0 (success)
 */

void more_numbers(void)
{
	int i;
	int j = 0;

	for (i = 0; i <= 14; ++i)
	{
		do {
			_putchar(i + 48);
			++j;
		} while (j <= 10);
		_putchar('\n');
	}
	_putchar('\n');
}
