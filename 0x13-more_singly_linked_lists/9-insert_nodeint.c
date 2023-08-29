#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *insert_nodeint_at_index - a function that inserts
 *a new node at a given position
 *@head: the list
 *@idx: index where the new node hsould be added
 *@n: the data of new node
 *Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode, *current;
	unsigned int i = 0;

	newNode = malloc(sizeof(listint_t));
	if (!head)
		return (NULL);
	if (!newNode)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;
	if (idx == 0)
	{
		newNode->next = *head;
		(*head)->next = newNode;
		return (newNode);
	}
	current = *head;
	while (current != NULL)
	{
		if (i == idx - 1)
		{
			newNode->next = current->next;
			current->next = newNode;
			return (newNode);
		}
		i++;
		current = current->next;
	}
	free(newNode);
	return (NULL);
}
