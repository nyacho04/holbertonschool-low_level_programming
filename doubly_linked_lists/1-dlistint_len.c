#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * dlistint_len - returns the number of elements
 * @h: linked list
 *
 * Return: nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t number = 0;

	while (h)
	{
		number++;
		h = h->next;
	}
	return (number);
}
