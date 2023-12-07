#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to the head of the list
 * @idx: index at which the new node should be inserted
 * @n: value for the new node
 * Return: pointer to the new node, or NULL if the operation fails
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *temp, *current;
unsigned int i;

if (h == NULL)
return (NULL);

temp = malloc(sizeof(dlistint_t));
if (temp == NULL)
return (NULL);

temp->n = n;
temp->prev = NULL;
temp->next = NULL;

if (idx == 0)
{
temp->next = *h;
if (*h != NULL)
(*h)->prev = temp;
*h = temp;
return (temp);
}

current = *h;
for (i = 0; i < idx - 1 && current != NULL; i++)
{
current = current->next;
}

if (i != idx - 1 || current == NULL)
{
free(temp);
return (NULL);
}

temp->prev = current;
temp->next = current->next;

if (current->next != NULL)
current->next->prev = temp;

current->next = temp;

    return (temp);
}
