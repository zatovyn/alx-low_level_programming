#include "lists.h"

/**
 * pop_listint - deletes first node from a linked list
 * and returns its integer value
 * @head: pointer to a pointer to the head of the linked list
 *
 * Return: integer value of the first node on success, or 0 on failure.
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int hn;

	if (*head == NULL)
		return (0);

	hn = (*head)->n;
	tmp = *head;
	*head = (*head)->next;

	free(tmp);

	return (hn);
}
