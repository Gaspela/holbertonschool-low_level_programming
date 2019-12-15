#include "lists.h"
/**
 * dlistint_len - Print all elements.
 * @h: List in.
 * Return: node.
*/
size_t dlistint_len(const dlistint_t *h)
{

	size_t node = 0;

	while (h)
	{
	node++;
	h = h->next;
	}

	return (node);

}
