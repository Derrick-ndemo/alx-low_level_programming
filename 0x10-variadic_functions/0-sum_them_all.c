#include "variadic_functions.h"

/**
 * sum_them_all - a function that returns the sum of all parameters
 *
 * @n: number of arguments
 *
 * Return: Sum of all parameters
*/


int sum_them_all(const unsigned int n, ...)
{
	va_list args;

	va_start(args, n);

	int sum = 0;

	for (int i = 0; i < n; i++)
	{
		int x = va_arg(args, int);

		if (n == 0)
			sum = 0;
		else if (n > 0)
			sum += x;
	}

	return (sum);
}
