#include "main.h"

/**
 * _isalpha - checks for the alphabetic character
 *
 * @c: checs for upper or lower case
 *
 * Return: returns 1 if c is a letter, lowercase or uppercase
 */


int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);

	return (0);
}
