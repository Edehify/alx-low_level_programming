#include <stdio.h>

/**
 * main - Fibonacci Function to execute
 * Description: Process and show output of fibonacci numbers
 * Return: 0
 */
int main(void)
{
	unsigned long int i;
	unsigned long int j = 1;
	unsigned long int k = 2;
	unsigned long int l = 1000000000;
	unsigned long int a;
	unsigned long int b;
	unsigned long int c;
	unsigned long int d;

	printf("%lu", j);

	for (i = 1; i < 91; i++)
	{
		printf(", %lu", k);
		k += j;
		j = k - j;
	}
	a = (j / l);
	b = (j % l);
	c = (k / l);
	d = (k % l);

	for (i = 92; i < 99; ++i)
	{
		printf(", %lu", c + (d / l));
		printf("%lu", d % l);
		c = c + a;
		a = c - a;
		d = d + b;
		b = d - b;
	}
	printf("\n");
	return (0);
}
