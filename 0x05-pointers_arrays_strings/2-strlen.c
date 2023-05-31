#include "main.h"

/**
 * _strlen - function that returns the length of a string
 * @s: pointer pointing to the 0th of a strings
 * @length - stores the value of the length of strings
 *
 * Return: length
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
