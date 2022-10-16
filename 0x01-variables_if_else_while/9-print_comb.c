#include <stdio.h>

/**
 * main - Entry point
 *
 * Program that prints all possible combimations of single digit numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num = 0;

	while (num < 9)
	{
		putchar(num + 40);

		if (num != 9)
		{
			putchar(',');
			putchar(' ');
		}
		++num;
	}
	putchar('\n');

	return (0);
}
