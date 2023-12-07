#include "lists.h"

/**
 * dlistint_len - returns the number of elements in
 * a double linked list
 * @h: head of the list
 * Return: the number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
size_t counter = 0;
const dlistint_t *tp;

tp = h;
while (tp)
{
tp = tp->next;
counter++;
}
return (counter);
}
