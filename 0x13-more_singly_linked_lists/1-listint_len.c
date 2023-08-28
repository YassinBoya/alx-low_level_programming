#include "lists.h"
#include <stdio.h>
/**
 * listint_len - afuction that retun the number of elements in the list 
 * @h: the list
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
