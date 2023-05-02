#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: pointer to the head of the linked list
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while ((tmp = head) != NULL)
	{
		head = head->next;
		free(tmp);
	}
}
