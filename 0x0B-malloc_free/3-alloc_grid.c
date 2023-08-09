#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2d array
 * @width: width of the resulting array
 * @height: height of the resulting array
 * Return: pointer to the allocated grid
 */

int **alloc_grid(int width, int height)
{
	int **arr, i, j;

	if (width <= 0 || height <= 0)
		return NULL;

	arr = malloc(height * sizeof(int*));
	for (i = 0; i < height; i++) 
	{
	arr[i] = malloc(width * sizeof(int));
		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}
	return arr;
}
