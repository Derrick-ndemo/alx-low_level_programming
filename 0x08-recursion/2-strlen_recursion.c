#include "main.h"

/**
 * _strlen_recursion - function that prints the length of a string
 *
 * @s: Argument representing string
*/

int _strlen_recursion(char *s)
{
	int i;

	if(*s)
	{
		i = sizeof(*s);
		_strlen_recursion(s + 1);
	}
	return (i);
}
