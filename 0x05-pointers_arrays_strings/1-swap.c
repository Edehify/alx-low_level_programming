#include "main.h"

/**
 * swap_int - Function that swaps the values of two intergers.
 * using pointers.
 * @a: first pointer
 * @b: second pointer
 * @temp - temporary storage means
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;

}
