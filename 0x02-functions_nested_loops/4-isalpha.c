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
	if (c >= 97 || c <= 122 || c >= 65 || c >= 90)

		return (1);

	return (0);
}
