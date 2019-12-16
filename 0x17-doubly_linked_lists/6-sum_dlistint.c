#include "lists.h"
/**
 * sum_dlistint - Sum all values list
 * @head: Head node.
 * Return: Result sum.
*/
int sum_dlistint(dlistint_t *head)
{

	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);

}
