#include <stdio.h>

/**
 * main - Program to print  all single digit numbers of base 10 starting
 * from 0 , followed bz new line.
 * @i - int.
 *
 * Return: 0 if successful.
 */

int main(void)
{
	int i;

	i = 48;
	while (i < 58)
	{
		putchar(i);
		i++;
	}
	putchar('\n');

	return (0);
}
