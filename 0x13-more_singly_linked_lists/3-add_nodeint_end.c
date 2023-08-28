#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - A function that adds a new node at the end of the list.
 * @head: Pointer to a pointer pointing to the head of the list.
 * @n: Integer to be duplicated and added as the new node's data.
 * Return: Address of the new element, or NULL if it fails.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *current;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	current = *head;
	while (current->next != NULL)
		current = current->next;
	current->next = new_node;

	return (new_node);
}

