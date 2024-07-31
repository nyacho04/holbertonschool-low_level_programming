#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * sum_dlistint - return the suma of the data in double linked list
 *
 * @head: head
 * Return: suma data
 */
int sum_dlistint(dlistint_t *head)
{
	int suma;

	suma = 0;

	if (head != NULL)
{
	while (head->prev != NULL)
		head = head->prev;
	while (head != NULL)
{
		suma += head->n;
		head = head->next;
}
}
	return (suma);
}
