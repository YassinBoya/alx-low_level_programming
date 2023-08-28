#include "lists.h"
#include <stdio.h>

/**
 * print_listint -  a function that prints all the elements of a listint_t list
 * @h: a list to be printed
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t sum = 0;

	while (h)
	{
		printf("%d\n", h->n);
		sum++;
		h = h->next;
	}
	return (sum);
}
