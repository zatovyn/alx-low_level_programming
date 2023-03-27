#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: an int pointer.
 * @b: an int pointer.
 */

void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
