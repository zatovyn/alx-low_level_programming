#include "lists.h"

/**
 * free_listint2 - frees a listint_t and sets the head to NULL
 * @head: double pointer to the head of the list
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL || *head == NULL)
		return;

	tmp = *head;
	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
}
