#include "main.h"

/**
 * _strcat - merges or concatenates 2 strings together
 * @dest: pointer referencing the destination string
 * @src: pointer referencing source string
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = -1;

	while (dest[i] != '\0')
	{
	i++;
	}
	while (src[j] != '\0')
	{
	dest[i] = src[j];
	i++;
	j++;
	}

	return (dest);
}
