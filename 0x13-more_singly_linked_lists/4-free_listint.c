#include "lists.h"
#include <stdlib.h>
/**
 *free_listint - a function that frees a listint_t list.
 *@head: the list
 */
void free_listint(listint_t *head)
{
	listint_t *current = head, *next;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
