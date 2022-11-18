#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - function that prints strings
 *
 * @separator: separator type used
 * @n: words to be printed
 * Return: Nothing
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list words;

	unsigned int i;

	va_start(words, n);

	for (i = 0; i < n; i++)
	{
		printf("%s", va_arg(words, char[]);
		/* print a separator btwn arguments */
		if (words == NULL)
			printf("(nil)");
		else if (separator && i != n - 1)
			printf("%s", separator);
	}
	va_end(words);
	printf("\n");
}
