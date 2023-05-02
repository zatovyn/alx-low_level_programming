#include "lists.h"

/**
 * sum_listint - returns the sum of all the data of
 * a linked list.
 * @head: pointer to the head of the linked list
 * Return: sum of all integer values in the linked list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
