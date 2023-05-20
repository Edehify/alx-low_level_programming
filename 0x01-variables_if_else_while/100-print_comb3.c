#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Program to prints all possible different combinations of
 * two digits without repeating reverse
 * Return: 0 if (successful)
*/
int main(void)
{
	int i, j;

	j = 48;

	while (j < 58)
	{
		i = 48;
		while (i < 58)
		{
			if (j != i && j < i)
			{
				putchar(j);
				putchar(i);

				if (i == 57 && j == 56)
				{
					break;
				}

				putchar(44);
				putchar(32);
			}

			i++;
		}

		j++;

	}

	putchar('\n');
	return (0);
}
