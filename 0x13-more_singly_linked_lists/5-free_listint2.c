#include "lists.h"
#include <stdlib.h>
/**
 *free_listint2 - a function that frees the list
 *and set head to null
 *@head: the list
 */
void free_listint2(listint_t **head)
{
	listint_t *current, *temp;

	if (!head)
		return;
	current = *head;
	while (current)
	{
		temp = current;
		current = current->next;
		free(temp);
	}
	*head = NULL;
}

