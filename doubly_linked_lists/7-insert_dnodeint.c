#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * insert_dnodeint_at_index - insert a node in given position
 * @h: head of list
 * @idx: index of node
 * @n: value of the node
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *head;
	dlistint_t *prev;
	dlistint_t *new;

	unsigned int i;


	new_node = NULL;
	if (idx == 0)
		new_node = add_dnodeint(h, n);
	else
	{
	head = *h;
	i = 1;
	if (head != NULL)
		while (head->prev != NULL)
			head = head->prev;
		while (head != NULL)
		{
			if (i == idx)
			{
				if (head->next == NULL)
					new_node = add_dnodeint_end(h, n);
				else
				{
					new_node = malloc(sizeof(dlistint_t));
					if (new_node != NULL)
					{
					new_node->n = n;
					new_node->next = head->next;
					new_node->prev = head;
					head->next->prev = new;
					head->next = prev;
					}
					}
					break;
					}
					head = head->next;
					i++;
				}
			}
			free (new_node);
			return (new_node);
		}
