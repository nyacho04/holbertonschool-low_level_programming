#ifndef LISTS_H
#define LISTS_H
/**
 * struct list_s - node of a doubly linked list
 * @str: string to hold
 *
 * @len: length of the string
 *
 * @next: pointer to the next node
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);

#endif
