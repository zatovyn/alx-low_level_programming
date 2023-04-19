#include "function_pointers.h"

/**
 * int_index - searches for an integer.
 * @array: array to be searched.
 * @size: size of the array.
 * @cmp: pointer to the function used to compare values.
 * Return: index of integer, otherwise
 * return -1 if size <= 0 or if array or cmp is NULL.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
