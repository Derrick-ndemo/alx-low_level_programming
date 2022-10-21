#include "main.h"

/**
 * print_numbers - prints numbers form 0-9 followed by a new line
 *
 * Return: always 0 (Success)
 */

void print_numbers(void)
{
	int num = 0;
	
	do
	{
		_putchar(num + 48);
		num++;
	} while (num >= 0 && num <= 9);

	_putchar('\n');

}
