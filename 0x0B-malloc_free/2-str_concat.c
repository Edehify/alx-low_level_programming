#include "main.h"

/**
 * str_concat - function that concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: resulting string
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, len = 0, k = 0;
	char *memory;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[i])
		i++;

	while (s2[j])
		j++;

	len = i + j;

	memory = (char *)malloc(len * sizeof(char) + 1);

	if (memory == NULL)
		return (NULL);

	j = 0;

	while (k < len)
	{
		if (k < i)
			memory[k] = s1[k];

		if (k >= i)
		{
			memory[k]  = s2[j];
			j++;
		}
		k++;
	}
	memory[k] = '\0';

	return (memory);
}
