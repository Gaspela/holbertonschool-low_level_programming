#include "lists.h"
/**
 *  delete_nodeint_at_index - function that deletes the node at
 * index of a listint_t linked list.
 * @index: index of the node that should be deleted. Index starts at 0.
 * @head: The list.
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *pos = *head;
	listint_t *delete;

	if (!head || !(*head))
		return (-1);

	for (i = 1; i < index; i++)
	{
		if (pos->next)
			pos = pos->next;
		else
			return (-1);
	}

	if (index == 0)
	{
		delete = pos;
		*head = pos->next;
	}
	else
		delete = pos->next;

	pos->next = delete->next;

	free(delete);

	return (1);
}
