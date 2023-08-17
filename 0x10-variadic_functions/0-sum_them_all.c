#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: number of parameters
 * Return: sum if successful
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i,  sum;
	va_list list;

	sum = 0;

	va_start(list, n);
	if (n == 0)
		return (0);
	if (n != 0)

	for (i = 0; i < n; i++)
		sum += va_arg(list, int);

	va_end(list);

	return (sum);
}
