#include "lists.h"
/**
 * print_list - Print elements in list.
 * @h: Data list.
 * Return: Conter.
*/
size_t print_list(const list_t *h)
{
/*****************/
	size_t size = 0;
/*****************/
		if (!h)
		return (0);
/*****************/
	while (h)
	{
		if (h->str)
			printf("[%u] %s\n", h->len, h->str);
		else
		printf("[0] (nil)\n");
			h = h->next;
			size++;
	}

	return (size);

}
