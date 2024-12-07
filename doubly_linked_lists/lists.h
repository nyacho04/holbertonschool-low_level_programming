#ifndef LISTS_H
#define LISTS_H
/**
 * struct dlistint_s - Doubly linked list node
 * @n: Integer data
 * @prev: Pointer to the previous node
 * @next: Pointer to the next node
 */

typedef struct dlistint_s
{
	int n;

	struct dlistint_s *prev;
	struct dlistint_s *next;
} dlistint_t;

size_t print_dlistint(const dlistint_t *h);
size_t dlistint_len(const dlistint_t *h);

#endif
