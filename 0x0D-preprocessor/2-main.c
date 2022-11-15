#include <stdio.c>

/**
 * main - prints the name of file it
 *        was compiled from, followed
 *        by a new line
 * Return: Always 0 if success
*/

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
