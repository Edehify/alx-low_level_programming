#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * infinite_add - adds two numbers
 * @n1: number one.
 * @n2: number two.
 * @r: buffer that the function will use to store the result.
 * @size_r: buffer size
 * Return: the pointer to dest.
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = strlen(n1);
	int len2 = strlen(n2);

	if (len1 > size_r || len2 > size_r)
	return (0);
	int i = len1 - 1;
	int j = len2 - 1;
	int carry = 0;
	int sum;
	int k = 0;

	while (i >= 0 || j >= 0)
	{
	int digit1 = (i >= 0) ? (n1[i] - '0') : 0;
	int digit2 = (j >= 0) ? (n2[j] - '0') : 0;

	sum = digit1 + digit2 + carry;
	carry = sum / 10;
	sum = sum % 10;

	if (k >= size_r - 1)
	return (0);
	r[k] = sum + '0';
	i--;
	j--;
	k++;
	}
	if (carry > 0)
	{
		if (k >= size_r - 1)
			return (0);
	r[k] = carry + '0';
	k++;
	}
	r[k] = '\0';
	int start = 0;
	int end = k - 1;

	while (start < end)
	{
	char temp = r[start];

	r[start] = r[end];
	r[end] = temp;
	start++;
	end--;
	}
	return (r);
}
