#include "main.h"

/**
 * reverse_array - reverse an array
 * @a: pointer referencing the integer array
 * @n: the length of the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int j = n - 1;
	int temp;

	while (i < j)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;

		i++;
		j--;
	}
}
