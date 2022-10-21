#include "main.h"

/**
 * print_numbers - prints numbers form 0-9 followed by a new line
 *
 * Return: always 0 (Success)
 */

void print_numbers(void)
{
	for (char i = 48; i < 57; i++)
	{
		_putchar(i);
	}

	_putchar('\n');

}
