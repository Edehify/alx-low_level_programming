#include "main.h"

/**
 * print_last_digit - Function that prints the last digit of a number
 * @num: The number whose last digit is to be printed
 * @last_digit - int
 *
 * Return: last_digit
 */

int print_last_digit(int num)
{
	int last_digit;

	last_digit = num % 10;

	if (last_digit < 0)
	last_digit = -last_digit;
	_putchar(last_digit + '0');

	return (last_digit);
}
