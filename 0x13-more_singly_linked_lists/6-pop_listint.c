#include "lists.h"
/**
 * pop_listint - Function that frees a listint_t list.
 * @head: String list.
 * Return: null.
*/
int pop_listint(listint_t **head)
{

	int data;
	listint_t *temp;

	if (!head || !(*head))
		return (0);

	data = (*head)->n;
	temp = *head;
	*head = temp->next;
	free(temp);

		return (data);
}
