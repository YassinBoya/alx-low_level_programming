#include "lists.h"
#include <stdlib.h>
/**
 *free_listint2 - a function that frees the list
 *and set head to null
 *@head: the list
 */
void free_listint2(listint_t **head)
{
	listint_t *current = *head, *next;

	if (!current)
		return;
	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
	*head = NULL;
}
