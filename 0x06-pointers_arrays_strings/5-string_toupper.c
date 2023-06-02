#include "main.h"

/**
 * *string_toupper - convert lower case string to upper
 * @str: pointer referencing the string array
 * Return: the resulting string's pointer
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (s[i] != 0)
	{
		if (s[i] >= 'a' && s[i] >= 'z')
		s[i] -= 32;
		i++;
	}
	return (str);
}
