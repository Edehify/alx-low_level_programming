#include <stdio.h>

/**
 * main - Program to print all possible combinations of single-digit numbers.
 * from 0 to 9 eg 0, 1, 2, 3, 4, ..., followed by new line.
 * @i - char.
 *
 * Return: 0 if successful.
 */

int main(void)
{
	char i;

	i = 48;
	while (i < 58)
	{
		putchar(i);
		if (i <= 56)
		{
			putchar(44);
			putchar(32);
		}
		i++;
	}
	putchar('\n');

	return (0);
}
