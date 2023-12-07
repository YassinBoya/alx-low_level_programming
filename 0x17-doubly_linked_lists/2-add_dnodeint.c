#include "lists.h"

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *temp_list = malloc(sizeof(dlistint_t));

if (temp_list == NULL)
{
return (NULL);
}

temp_list->prev = NULL;
temp_list->n = n;
temp_list->next = NULL;

if (*head  != NULL)
{
temp_list->next = *head;
}
(*head) = temp_list;

return (*head);
}
