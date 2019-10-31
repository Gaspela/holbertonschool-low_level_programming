#include "lists.h"
/**
 * list_len - Print elements in list.
 * @h: Data list.
 * Return: Size.
*/
size_t list_len(const list_t *h)
{

	size_t size = 0;
/**************/
	if (!h)
	return (0);
/**************/

	while (h)
	{
		h = h->next;
		size++;
	}

	return (size);

}
