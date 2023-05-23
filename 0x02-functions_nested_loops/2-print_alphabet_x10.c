#include "main.h"

/**
 * print_alphabet_x10 - Function that prints 10 times the alphabet,
 * in lowercase, followed by a new line.
 * using only _putchar twice.
 * @ch - char
 * @i - int
 *
 *Return: void
 */

void print_alphabet_x10(void)
{
	int i = 0;
	char ch;

	while (i < 10)
	{
		ch = 'a';

		while (ch <= 'z')
		{
			_putchar(ch);

			ch++;
		}
		_putchar('\n');
		i++;
	}
}
