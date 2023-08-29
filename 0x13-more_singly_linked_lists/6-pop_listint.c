#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *pop_listint - a function that remove the head node of the list
 *@head: the list
 *Return: the data of the node removed (n)
 */
int pop_listint(listint_t **head)
{
	int nodeData = 0;
	listint_t *temp;

	if (head == NULL)
		return (0);
	temp = *head;
	nodeData = temp->n;
	*head = (*head)->next;
	free(temp);
	return (nodeData);
}
