#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
* dlistint_len - returns the number of elements in a linked dlistint_t list.
*
* @h: the head of the doubly linked list
*
* Return: count
*/

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}
