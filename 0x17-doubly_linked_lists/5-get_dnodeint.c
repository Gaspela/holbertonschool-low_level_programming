#include "lists.h"
/**
 * get_dnodeint_at_index - Return node of the dlistint.
 * @head: Head the list.
 * @index: index the node.
 * Return: the node.
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{

	unsigned int i;

	if (!head)
		return (NULL);
	for (i = 0; i < index; i++)
		{
		head = head->next;
		if (!head)
			return (NULL);
		}

	return (head);

}
