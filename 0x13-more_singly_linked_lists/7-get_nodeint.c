#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: pointer to the head of the linked list
 * @index: The index of the node
 *
 * Return: pointer to the node at the specified index
 * or NULL if node does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	while (index-- && head)
		head = head->next;
	return (head);
}
