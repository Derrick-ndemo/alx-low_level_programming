
/**
 * _isupper - checks if c is uppercase
 *
 * @c: parameter representing ASCII values of upr case letters
 *
 * Return: 1 if c is uppercase otherwise 0
 */

int _isupper(int c)
{
	if (c >= 65 && <= 90)
		return (1);
	else
		return (0);
}
