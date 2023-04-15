#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated
 * @old_size: size in bytes of the allocated space for ptr
 * @new_size: size of new memory block
 * Return: pointer to new memory, NULL otherwise.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr, *clone_ptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr != NULL)
		clone_ptr = ptr;
	else
		return (malloc(new_size));

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
		return (NULL);

	for (i = 0; i < old_size && i < new_size; i++)
	{
		new_ptr[i] = clone_ptr[i];
	}
	free(ptr);

	return (new_ptr);
}
