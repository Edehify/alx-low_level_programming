#include "main.h"

/**
 * _strcmp - compares 2 strings together
 * @s1: pointer referencing the first string
 * @s2: pointer referencing the second string
 * Return: ns1 - ns2 if flase and 0 if true
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	if (*s1 == *s2)
	return (0);
	else
	return (*s1 - *s2);
}
