#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
* list_len - returns the number of elements in a linked list
*
* @h: pointer to the head of the list
*
* Return: size_t
*/

size_t list_len(const list_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}
		return (len);
}
