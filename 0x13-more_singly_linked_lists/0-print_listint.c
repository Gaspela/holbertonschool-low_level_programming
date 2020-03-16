#include "lists.h"
/**
 * print_listint - Print list int.
 * @h: head string list.
 * Return: Number nodes.
*/
size_t print_listint(const listint_t *h)
{

	size_t lennodes = 0;

	while (h)
	{

		printf("%d\n", h->n);
		h = h->next;
		lennodes++;
	}

	return (lennodes);
}
