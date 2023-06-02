#include "main.h"

/**
 * *string_toupper - convert lower case string to upper
 * @str: pointer referencing the string array
 * Return: the resulting string's pointer
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != 0)
	{
		if (str[i] >= 'a' && str[i] >= 'z')
		str[i] -= 32;
		i++;
	}
	return (str);
}
