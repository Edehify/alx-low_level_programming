#include "main.h"

/**
 * times_table - function that prints the 9 times table, starting with 0
 * @i - number of rows
 * @j - number of columns
 * @k - product of row and column
 *
 *Return: void
 */

void times_table(void)
{
	int i, j, k;

	i = 0;
	while (i <= 9)
	{
		j = 0;

		while (j <= 9)
		{
			k = i * j;
			if (j == 0)
			{
				_putchar('0' + k);
			}
			else if (k < 10)
			{
				_putchar(' ');
				_putchar('0' + k);
			}

			else
			{
				_putchar('0' + k / 10);
				_putchar('0' + k % 10);
			}


			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
