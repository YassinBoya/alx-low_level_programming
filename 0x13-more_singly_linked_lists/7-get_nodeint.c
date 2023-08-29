#include "lists.h"
#include <stdio.h>

/**
 *get_nodeint_at_index - a function that returns the
 *nth node of a listint_t linked list
 *@head: the list
 *@index: the index of the node should be found
 *Return: the node found
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head)
	{
		if (index == i)
			return (head);
		head = head->next;
		i++;
	}
	return (NULL);
}
