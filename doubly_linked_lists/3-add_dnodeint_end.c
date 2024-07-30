#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_dnodeint_end - adds a node at the end of dlistint list
 *
 * @head: head
 * @n: value of the element
 * Return: addres
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *i;
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	i = *head;

	if (i != NULL)
	{
		while (i->next != NULL)
			i = i->next;
		i->next = new_node;
	}
	else
	{
		*head = new_node;
	}
	new_node->prev = i;
	return (new_node);
}
