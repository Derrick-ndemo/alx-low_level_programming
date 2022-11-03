#include "main.h"

/**
 * factorial - function that returns factorial
 *
 * @n: Argument representing factorial
 *
 * Return: Always 0 if success
*/

int  factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n -1));
}
