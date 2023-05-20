#include <stdio.h>

/**
 * main - Program to print lowercase alphabet in reverse,
 * followed bz new line.
 * @i - int.
 *
 * Return: 0 if successful.
 */

int main(void)
{
	int i;

	i = 122;
	while (i > 96)
	{
		putchar(i);
		i--;
	}
	putchar('\n');

	return (0);
}
