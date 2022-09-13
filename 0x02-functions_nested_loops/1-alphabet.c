#include "main.h"

/**
 * main -Entry point
 *
 * print alphabet in lowercase
 * Return: 0 nothing, return void
 */

void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;

	}
	_putchar('\n');
}
