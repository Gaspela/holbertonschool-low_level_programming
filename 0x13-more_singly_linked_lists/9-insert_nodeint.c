#include "lists.h"
/** 
 * insert_nodeint_at_index - function that inserts a new node at a given position.
 * @head: the list.
 * @idx: the index of the list where the new node should be added.
 * @n: values.
 * Return: the address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new;
	listint_t *list = *head;

	if (!head)
		return (NULL);

	for (i = 1; i < idx; i++)
	{
		if (list)
			list = list->next;
		else

			return (NULL);
	}

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
	}
	else if (list)
	{
		new->next = list->next;
		list->next = new;
	}
	return (new);
}
