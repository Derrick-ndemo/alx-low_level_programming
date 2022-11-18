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

	unsigned int sum = 0;

	for (unsigned int i = 0; i < n; i++)
	{
		unsigned int x = va_arg(args, int);

		sum += x;
	}
	va_end(args);

	return (sum);
}
