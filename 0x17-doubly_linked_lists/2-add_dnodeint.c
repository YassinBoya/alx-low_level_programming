#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning
 * of a dlistint_t list
 * @head: head of the list
 * @n: value of the element
 * Return: the address of the new element
 */

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
(*head)->prev = temp_list;
}
(*head) = temp_list;

return (*head);
}
