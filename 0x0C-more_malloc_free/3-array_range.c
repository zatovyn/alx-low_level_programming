#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers from min to max.
 * @min: minimum value in the array.
 * @max: maximum value in the array.
 * Return: pointer to the new array, NULL otherwise.
 */

int *array_range(int min, int max)
{
	int *p;
	int i;

	if (min > max)
		return (NULL);

	p = malloc(sizeof(int) * (max - min + 1));

	if (p == NULL)
		return (NULL);
	for (i = 0; i <= max - min; i++)
	{
		p[i] = min + i;
	}
	return (p);
}
