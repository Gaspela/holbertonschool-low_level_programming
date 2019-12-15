#include "lists.h"
/**
 * add_dnodeint_end - Add new node in the last position.
 * @head: Head the list.
 * @n: Values in.
 * Return: Address new element.
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{

	dlistint_t *last;
	dlistint_t *newnode;

	last = *head;

	newnode = malloc(sizeof(dlistint_t));
	if (!newnode)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;
	newnode->prev = NULL;
	/*Head == NULL*/
	if (!*head)
		*head = newnode;
	else
	{
		while (last->next)
		{
			last = last->next;
		}
		last->next = newnode;
		newnode->prev = last;
		last = newnode;
	}

	return (newnode);

}
