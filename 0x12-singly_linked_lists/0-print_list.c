#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints a linked list elements
 * @h: pointer to the first of the list
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count_nodes = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		count_nodes++;
		h = h->next;
	}
	return (count_nodes);
}
