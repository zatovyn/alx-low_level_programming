#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc.
 * @b: Size of the memory to be allocated.
 * Return: the pointer to the memory allocated, or exit(98) is it failed.
 */

void *malloc_checked(unsigned int b)
{
	char *c;

	c = malloc(b);
	if (c == NULL)
		exit(98);
	return (c);
}
