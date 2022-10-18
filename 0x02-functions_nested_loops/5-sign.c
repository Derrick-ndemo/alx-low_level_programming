#include "main.h"

/**
 * print_sign - prints the sign number
 *
 * @n: checks the arguments
 *
 * Return: 1 and prints + if n > 0, returns 0 if n == 0 and ret-1 if <0
 */


int print_sign(int n)
{
	if (n > 0)

	{

		_putchar(43 + 0);

		return (1);

	}

	else if (n == 0)

	{

		_putchar(0 + 48);

		return (0);

	}

	else

	{

		_putchar(45 + 0);

		return (-1);

	}

}
