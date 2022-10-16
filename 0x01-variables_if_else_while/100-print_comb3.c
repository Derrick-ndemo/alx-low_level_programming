#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num = 0, num1;

	while (num <= 9)
	{
		num1 = 0;
		while (num1 <= 9)
		{
			if (num != num1 && num < num1)
			{
				putchar(num + 48);
				putchar(num1 + 48);

				if (num + num1 != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
			++num1;
		}
		++num;
	}
	putchar('\n');

	return (0);
}
