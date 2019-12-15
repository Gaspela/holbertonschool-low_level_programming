#include "lists.h"
/**
 * print_dlistint - Print elements.
 * @h: List in.
 * Return: Number nodes.
*/
size_t print_dlistint(const dlistint_t *h)
{

	size_t node = 0;

	while (h)
	{
	printf("%i\n", h->n);
	node++;
	h = h->next;
	}

	return (node);

}
