#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end
 * of a dlistint_t list
 * @head: head of the list
 * @n: value of the element
 * Return: the address of the new element
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *temp, *current;

temp = malloc(sizeof(dlistint_t));

if (temp == NULL)
{
return (NULL);
}

temp->prev = NULL;
temp->n = n;
temp->next = NULL;
current = *head;

if (current == NULL)
{
*head = temp;
}
else
{
while (current->next != NULL)
{
current = current->next;
}
current->next = temp;
temp->prev = current;
}
return (*head);
}
