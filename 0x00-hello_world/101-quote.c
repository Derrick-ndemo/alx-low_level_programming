#include <stdio.h>


/**
 * main - Entry point
 *
 * Return: 1 This returns an error message
 */

int main(void)
{

	char qte[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, qte, 59);

	return (1);
}
