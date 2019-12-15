#include "lists.h"
/**
 * free_dlistint - free a dlistint_t list.
 * @head: Head the list.
 * Return: void.
*/
void free_dlistint(dlistint_t *head)
{

	dlistint_t *node;

	while (node)
	{
		node = head->next;
		free(head);
		head = node;
	}

}
