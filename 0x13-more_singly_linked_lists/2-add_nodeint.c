#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
/**
 *add_nodeint - a function that adds a new node at the beginning
 *of the list.
 * @head: Pointer to a pointer pointing to the head of the list.
 * @n: String to be duplicated and added as the new node's data.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
