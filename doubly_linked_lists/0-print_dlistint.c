#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_dlistint - print the elements of linked listt
 * @h: linked list
 *
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t number = 0;

	while (h)
	{
		printf("%d\n", h->i);
		number++;
		h = h->next;
	}
	return (number);
}
