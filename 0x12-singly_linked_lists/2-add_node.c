#include "lists.h"
#include <string.h>

/**
 * *add_node - adds node to head
 * @head: linked list head
 * @str: string to be added to the new node
 * Return: address of the new element, or NULL if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (!str)
		return (NULL);

	new_node = (list_t *)malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	new_node->str = (char *)malloc(strlen(str) + 1);
	if (!new_node->str)
	{
		free(new_node);
		return (NULL);
	}

	strcpy(new_node->str, str);
	new_node->len = strlen(str);

	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
