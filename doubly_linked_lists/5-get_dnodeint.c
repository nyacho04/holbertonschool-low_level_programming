#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
* get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
*
* @head: a pointer to the head of the list.
*
* @index: the index of the node to return.
*
* Return: void
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *nya = head;

	while (nya != NULL)
	{
		if (i == index)
		{
			return (nya);
		}
		i++;
		nya = nya->next;
	}
	return (NULL);
}
