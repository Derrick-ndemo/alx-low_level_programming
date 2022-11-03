#include "main.h"

/**
 * _strlen_recursion - prints the length of a string
 *
 * @s: Argument representing string
 * Return: Length
*/

int _strlen_recursion(char *s)
{
	int i;

	if (*s == '\0')
	{
		return;
	}

	i = sizeof(*s);
	return (i + _strlen_recursion(s + 1));
}
