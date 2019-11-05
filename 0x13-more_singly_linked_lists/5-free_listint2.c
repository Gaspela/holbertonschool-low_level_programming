#include "lists.h"
/**
 * free_listint2 - Function that frees a listint_t list.
 * @head: String list.
 * Return: 0.
 */
void free_listint2(listint_t *head)
{

	if (head)
	{/*Recursion the funtion*/
		free_listint(head->next);
			free(head);
/*Add NULL*/
			*head = NULL;
	}

}
