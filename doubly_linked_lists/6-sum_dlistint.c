#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
* sum_dlistint - returns the sum of all the elements in a dlistint list
*
* @head: a pointer to the head of the list.
*
* Return: sum
*/

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *nya = head;

	if (head == NULL)
	{
	return (0);
	}
	while (nya != NULL)
	{
		sum += nya->n;
		nya = nya->next;
	}
	return (sum);
}
