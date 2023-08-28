#include "lists.h"
#include <stdio.h>
/**
 * listint_len -  a function that returns the number
 * of elements in a linked listint_t list.
 * @h: the list
 * Return: the number of nodes in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t sum = 0;

	while (h)
	{
		sum++;
		h = h->next;
	}
	return (sum);
}
