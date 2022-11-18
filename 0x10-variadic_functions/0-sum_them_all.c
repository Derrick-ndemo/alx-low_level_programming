#include <stdarg.h>

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

	unsigned int sum = 0;

	va_start(args, n);

	for (unsigned int i = 0; i < n; i++)
	{
		unsigned int x = va_arg(args, int);

		sum += x;
	}
	va_end(args);

	return (sum);
}
