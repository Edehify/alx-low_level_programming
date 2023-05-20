#include <stdio.h>

/**
 * main - Program to print hexadecimal(base 16) numbers
 * from 0 to e , followed by new line.
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
		i++;
	}
	i = 97;
	while (i <= 102)
	{
		putchar(i);
		i++;
	}
	putchar('\n');

	return (0);
}
