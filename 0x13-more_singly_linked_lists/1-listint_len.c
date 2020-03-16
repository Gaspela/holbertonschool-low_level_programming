#include "lists.h"
/**
 * listint_len - Print list int.
 * @h: head string list.
 * Return: Number nodes.
*/
size_t listint_len(const listint_t *h)
{
/*unsigned int len = 0*/
	size_t lennodes = 0;

	while (h)
	{
/*Print value h*/
		/*printf("%d\n", h->n);*/
		h = h->next;
		lennodes++;

	}

	return (lennodes);
}
