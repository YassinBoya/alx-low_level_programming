#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - A function that frees the list and sets head to null.
 * @head: Pointer to a pointer pointing to the head of the list.
 */
void free_listint2(listint_t **head)
{
	listint_t *current = *head, *next;

	if (!current)
		return;
	while (current)
	{
		next = current->next;
		free(current);
		current = next;
	}
	*head = NULL;
}

