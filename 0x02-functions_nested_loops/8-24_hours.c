#include "main.h"

/**
 * jack_bauer - Function that prints every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59.
 * required to use only _putchar function
 * @i - int
 * @j - int
 *
 * Return: void
 */

void jack_bauer(void)
{
	int i = 0;
	int j;

	while (i < 24)
	{
		j = 0;

		while (j < 60)
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			_putchar(':');
			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
			_putchar('\n');

			j++;
		}
		i++;
	}
}

