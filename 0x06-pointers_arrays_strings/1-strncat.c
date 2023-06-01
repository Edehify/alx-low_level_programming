#include "main.h"

/**
 * *_strncat - Concatenates certain bytes of 2 given strings
 * @dest: pointer referencing the destination string
 * @src: pointer referencing the source string
 * @n: number of bytes to pick
 * Return: void
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	i++;

	while (src[j] != '\0' && j < n)
	{
	dest[i] = src[j];
	i++;
	j++;
	}
	dest[i] = '\0';
	return (dest);
}
