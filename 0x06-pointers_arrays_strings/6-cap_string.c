#include "main.h"
#include <stdbool.h>

/**
 * *cap_string - Capitalize all the words in a sentence to
 * @str: pointer referencing the string
 * Return: resulting capitalized string
 */
char *cap_string(char *str)
{
	char str1[] = ",\t;\n; .!?\"(){}";
	bool Isvalid, i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		Isvalid = false;

		if (i == 0)
		{
			Isvalid = true;
		}
		else
		{
			for (j = 0; str1[j] != '\0'; j++)
			{
				if (str[i - 1] == st1[j])
				{
					Isvalid = true;
					break;
				}
			}
		}

		if (Isvalid == true)
		{
			if (str[i] <= 'z' && str[i] >= 'a')
			{
				str[i] -= ('a' - 'A');
			}
		}
	}

	return (str);
}
