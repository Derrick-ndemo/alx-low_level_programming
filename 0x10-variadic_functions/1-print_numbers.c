#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers followed by a new line
 *
 * @separator: character separator
 * @n: constant representint the nums
 * Return: nothing
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;

	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));

		if (separator == NULL)
		{
			continue;
		}
		else
		{
			printf("%s", separator);
		}
	}
	va_end(args);
	printf("\n");
}
