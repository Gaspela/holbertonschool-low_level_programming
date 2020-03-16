#include "lists.h"
/**
 * add_nodeint_end - Adds a new node at the end of a listint_t.
 * @head: head string list.
 * @n: int.
 * Return: Number nodes.
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{

	listint_t *p;

	/**/
	if (!head)
		return (NULL);
	/**/
	if (*head)
		return (add_nodeint_end(&(*head)->next, n));

	p = malloc(sizeof(listint_t));

	if (!p)
		return (NULL);

	p->n = n;
	p->next = *head;
	*head = p;

	return (p);
}
