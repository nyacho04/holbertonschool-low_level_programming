#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index of a linked list
 * @head: head
 * @index: index of the new node
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i;

	if (head == NULL || *head == NULL)
	return (-1);

	current = *head;
	for (i = 0; current != NULL && i < index; i++)
	current = current->next;

	if (current == NULL)
	return (-1);

	if (current == *head)
	{
	*head = current->next;
	if (*head != NULL)
		(*head)->prev = NULL;
}
	else
{
	current->prev->next = current->next;
	if (current->next != NULL)
	current->next->prev = current->prev;
}

	free(current);
	return (1);
}
