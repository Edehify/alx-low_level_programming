#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Program to print find if a random number is zero, postive
 * or negavtive using if else statement.
 * @n - A random interger
 *
 * Return: 0 if successful
 */


int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}

	return (0);
}
