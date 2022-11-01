

/**
* _memset - function that fills the memory wiht a constant byte
*
* @s: input pointer to charge type
*     reps the pointer to the block of mem to fill
* @b: input variable of char type reps the
*     character to fill s
* @n: unsigned int variable
*    the number of bytes to be filled
*
* Return: A pointer to the filled memory area @s
*/

char *_memset(char *s, char b, unsigned int n)
{
	/**
	* unsigned int consists only of
	* posivie numbers
	*/
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
