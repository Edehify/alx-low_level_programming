#include "main.h"

/**
 * print_alphabet - Function that prints the alphabet, in lowercase,
 * followed by new line using only _putchar
 *
 *Return: always 0
 */

void print_alphabet(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');

}
