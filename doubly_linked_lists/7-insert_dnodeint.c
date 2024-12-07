#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
* insert_dnodeint_at_index - inserts a new node at a given position
*
* @h: the value to be inserted
*
* @idx: the position where the new node will be inserted
*
* @n: the number of nodes in the list
*
* Return: the address of the new node, or NULL if it failed
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *node = *h;
	unsigned int i = 0;

	if (idx == 0)
		return (add_dnodeint(h, n));

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;

	while (node && i < idx - 1)
	{
		node = node->next;
		i++;
	}

	if (!node)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = node->next;
	new_node->prev = node;

	if (node->next)
		node->next->prev = new_node;

	node->next = new_node;

	return (new_node);
}
