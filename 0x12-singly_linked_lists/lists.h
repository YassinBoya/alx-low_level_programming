#ifndef LISTS_H
#define LISTS_H
#include <stddef.h>

/**
 * struct Node_s - a structur for a node of list.
 * @str: atr as a string.
 * @len: atr as len of string.
 * @next: a pointer to structr of type Node_s.
 */
typedef struct Node_s
{
	char *str;
	int len;
	struct Node_s *next;
} list_t;

int _putchar(char c);
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif

