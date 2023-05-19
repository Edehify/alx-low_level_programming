#include <stdio.h>

/**
 * main - Program to print alphabet in lowercase,
 * and then in uppercase , followed bz new line.
 * @i - int.
 * @j - int.
 * Return: 0 if successful.
 */

int main(void)
{
	int i, j;

	i = 'a';
	while (i <= 'z')
	{
		putchar(i);
		i++;
	}
	j = 'A';
	while (j <= 'Z')
	{
	putchar(j);
	j++;
	}
	putchar('\n');
	return (0);
}
