#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_dlistint - prints all the elements of a
 * dlistint_t list
 * @h: head of the list
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
const dlistint_t *pt;
size_t counter = 0;

pt = h;

while (pt != NULL)
{
printf("%d\n", pt->n);
pt = pt->next;
counter++;
}
return (counter);
}

/**
* free_dlistint - Frees a doubly linked list.
* @head: A pointer to the head of the list to be freed.
*/

void free_dlistint(dlistint_t *head)
{
dlistint_t *temp;

while (head != NULL)
{
temp = head;
head = head->next;
free(temp);
}
}
