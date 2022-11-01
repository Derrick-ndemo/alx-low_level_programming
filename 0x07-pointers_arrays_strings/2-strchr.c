/**
 * _strchr - function that locates a character in a string
 *
 * @s: pointer representing string
 * @c: represent the character
 *
 * Return: Pointer to the first occurence of char c in sting s
*/

char *_strchr(char *s, char c)
{
	int i;

	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		else
			return ('\0');
		s++;
	}

}
