#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Entry Point
 *
 * Working with loops
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));

	/*my code*/
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);

	return (0);
}

