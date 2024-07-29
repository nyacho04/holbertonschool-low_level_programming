#ifndef LISTS_H
#define LISTS_H
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * struct listint_s - singly linked list node
 * @i: integer
 * @next: pointer to the next node in the list
 *
 * Description: A node in a singly linked list where each node contains
 *		a string and a pointer to the next node.
 */
typedef struct dlistint_s
{
	int i;
	struct dlistint_s *next;
}
dlistint_t;

size_t print_dlistint(const dlistint_t *h);


#endif
