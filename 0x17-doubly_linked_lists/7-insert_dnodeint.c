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
dlistint_t *temp = malloc(sizeof(dlistint_t));
dlistint_t *current;
unsigned int i = 0;

current = *h;

temp->prev = NULL;
temp->n = n;
temp->next = NULL;

if (idx == 0)
{
temp->next = *h;
if (current != NULL)
current->prev = temp;
current = temp;
return (temp);
}

if (current == NULL || temp == NULL)
return (NULL);

while (i < idx - 1 && current != NULL)
{
current = current->next;
i++;
}

temp->prev = current;
temp->next = current->next;
current->next = temp;
current->next->prev = temp;

return (temp);
}
