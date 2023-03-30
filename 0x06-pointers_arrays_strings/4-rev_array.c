#include "main.h"

/**
 * reverse_array - reverses an array of integers
 * @a: the array of integers
 * @n: the size of the array
 **/

void reverse_array(int *a, int n)
{
	int i;
	int swap;

	i = 0;
	n = n - 1;

	while (i < n)
	{
		swap = a[i];
		a[i] = a[n];
		a[n] = swap;
		i++;
		n--;
	}
}
