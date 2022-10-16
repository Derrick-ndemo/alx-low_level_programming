#include <stdio.h>

/**
 * main - Entry point
 *
 * Description - printing numbers of base 16 in lowercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	/* 48 is the decimal rep of 0 */
	int num = 48;

	while (num <= 102)/*102 is decimal rep of f */
	{
		putchar(num);
		if (num == 57)
			num += 39;
		++num;
	}
	putchar('\n');

	return (0);
}
