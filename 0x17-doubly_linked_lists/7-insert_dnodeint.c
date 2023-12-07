#include "lists.h"

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
add_dnodeint(&current, n);

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
