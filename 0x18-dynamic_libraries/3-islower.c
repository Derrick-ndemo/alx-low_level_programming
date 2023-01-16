#include "main.h"

/**
 * _islower - checks for lower case characters
 * @c: checks input of a function
 * Return: returns 1 if 'c' is lowrcase otherwise 0 (fail)
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)

		return (1);

	return (0);

}
