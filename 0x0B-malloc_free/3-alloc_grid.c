#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - 2D array of integers.
 * @width: The width of the array.
 * @height: The height of the array.
 * Return: pointer to the 2D array.
 */

int **alloc_grid(int width, int height)
{
	int **array;
	int i;
	int j;

	if (width == 0 && height == 0)
		return (NULL);
	array = malloc(sizeof(int *) * height);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		array[i] = malloc(sizeof(int) * width);
		if (array[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(array[j]);
			}
			free(array);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			array[i][j] = 0;
	}
	return (array);
}
