#include "main.h"

/**
 * _puts - A  function that prints a string,
 * followed by a new line, to stdout.
 * @str: Char pointer pointing to a string
 * the string is stored in form of an array
 * Return: void
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
