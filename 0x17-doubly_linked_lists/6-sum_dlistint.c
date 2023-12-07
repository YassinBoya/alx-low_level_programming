#include "lists.h"

int sum_dlistint(dlistint_t *head)
{
dlistint_t *current;
unsigned int sum = 0;

current = head;

while (current != NULL)
{
sum += current->n;
current = current->next;
}

return (sum);
}
