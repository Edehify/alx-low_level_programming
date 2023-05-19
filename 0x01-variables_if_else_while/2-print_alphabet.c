#include <stdio.h>

/**
 * main - Program to prints the alphabet in lowercase,
 * followed by a new line.
 * using putchar as required
 * @ch - int
 * Return: 0 if successful
 */

int main(void)
{
	int ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
