#include <stdio.h>

/**
 * main - Program to print alphabet in lowercase,
 * expcept q and e..
 * @i - int.
 *
 * Return: 0 if successful.
 */

int main(void)
{
	int i;

	i = 'a';
	while (i <= 'z')
	{
		if (i != 'q' && i != 'e')
		{
			putchar(i);
		}
		i++;
	}
	putchar('\n');
	return (0);
}
