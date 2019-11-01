#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <unistd.h>


/**
 * struct list_s - Simple lists
 * @str: string - Malloc
 * @len: length of the string
 * @next: points to the next node
*/
typedef struct list_s
{

	char *str;
	unsigned int len;
	struct list_s *next;

} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
void print(void) __attribute__ ((constructor));


#endif /*Lists_H*/
