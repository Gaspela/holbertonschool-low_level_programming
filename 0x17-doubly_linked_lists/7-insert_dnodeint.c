#include "lists.h"
/**
 * insert_dnodeint_at_index - Insert new node.
 * @h: Head the list.
 * @idx: Insert the newnode.
 * @n: Number assigned.
 * Return: Node or NULL.
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newnode, *tmp, *nextnew;
	unsigned int i = 0;

	if (h)
	{
	newnode = malloc(sizeof(dlistint_t));
		if (!newnode)
			return (NULL);
	newnode->n = n;
	tmp = *h;
	if (idx == 0)
	{
	newnode->next = tmp;
		if (tmp)
		tmp->prev = newnode;
		*h = newnode;
		return (newnode);
	}
	while (i < idx - 1)
	{
	tmp = tmp->next;
	if (!tmp)
	{
	free(newnode);
	return (NULL);
	}
	i++;
	}
	nextnew = tmp->next;
	newnode->next = nextnew;
	newnode->prev = tmp;
	tmp->next = newnode;
	if (nextnew)
	nextnew->prev = newnode;
	return (newnode);
	}	

	return (NULL);

}
