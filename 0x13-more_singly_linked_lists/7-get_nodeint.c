#include "lists.h"
/**
 * get_nodeint_at_index -function that returns the nth node of a listint_t
 * linked list.
 * @head: The list.
 * @index: index of the node, starting at 0.
 * Return: the node does not exist, return NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (!head)
		return (NULL);

	for (i = 1; i <= index; i++)
	{
		if (head->next)
			head = head->next;
		else
			return (NULL);
	}

	return (head);
}
