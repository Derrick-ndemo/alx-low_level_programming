#include "main.h"

/**
 * _isdigit - checks for a digit through 0-9
 *
 * @c: parameter representing digit
 *
 * Return: 1 if c is digit and 0 if otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)

		return (1);

	else

		return (0);
}
