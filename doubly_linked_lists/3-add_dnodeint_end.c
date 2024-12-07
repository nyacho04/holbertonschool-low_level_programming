#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
* add_dnodeint_end - adds a new node at the end of a dlistint_t list.
*
* @head: a pointer to the head of the list.
*
* @n: the value to be added to the new node.
*
* Return: the address of the new node, or NULL if it failed.t
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *last_node = *head;

	if (new_node == NULL)
	{
	return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		new_node->prev = NULL;
		return (new_node);
	}
	while (last_node->next != NULL)
	{
		last_node = last_node->next;
	}

	last_node->next = new_node;
	new_node->prev = last_node;

	return (new_node);
}
