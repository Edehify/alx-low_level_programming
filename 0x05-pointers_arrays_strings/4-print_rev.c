#include "main.h"

/**
 * print_rev - A function that prints a string, in reverse,
 * followed by a new line.
 * @s: char pointer pointing to the 0th of string
 * @len - int
 *
 * Return: void
 */

void print_rev(char *s)
{
	int len = 0;

	while (s[len])
	{
		len++;
	}
	while (len--)
	{
		_putchar(s[len]);

	}
	_putchar('\n');
}

