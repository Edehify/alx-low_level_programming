#include "main.h"

/**
 * *_strncpy - copies a string just like strncpy
 * @dest: pointer referencing the destination
 * @src: pointer referencing the source
 * @n: the integer input
 * Return: destination
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\n' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\n';
	return (dest);
}
