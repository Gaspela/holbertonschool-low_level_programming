#include "lists.h"
/**
 * add_dnodeint - asdasd
 * @head: Head list.
 * @n: new node.
 * Return: address the new node.
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{

	dlistint_t *newnode;

	newnode = malloc(sizeof(dlistint_t));
	if (!newnode)
		return (NULL);

	newnode->n = n;
	newnode->next = *head;
	newnode->prev = NULL;

	if (*head)
		(*head)->prev = newnode;
	*head = newnode;

	return (newnode);

}
