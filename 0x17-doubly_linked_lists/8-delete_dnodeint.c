#include "lists.h"
/**
 * delete_dnodeint_at_index - Delete node.
 * @head: Head the list.
 * @index: Index 0.
 * Return: 1 or -1.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node = *head;
	unsigned int i;

	if (!head || !(*head))
		return (-1);

	for (i = 0; i < index; i++)
	{
		node = node->next;
		if (node == NULL)
			return (-1);
	}

	if (index == 0)
	{
		if (node->next)
			node->next->prev = NULL;
		*head = node->next;
	}
	else
	{
		if (node->next)
			node->next->prev = node->prev;
		if (node->prev)
			node->prev->next = node->next;
	}

	free(node);
	return (1);
}
