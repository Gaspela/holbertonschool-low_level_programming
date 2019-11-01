#include "lists.h"
/**
 * add_node_end - Add a new node at the end of a list_t list.
 * @head: head list.
 * @str: String.
 * Return: Retunr address or NULL.
*/
list_t *add_node_end(list_t **head, const char *str)
{

	list_t *node = malloc(sizeof(list_t));
	list_t *temp = *head;
	unsigned int i = 0;
	/***********************************/
		if (str != NULL && node != NULL)
		{
			while (str[i])
			i++;
		/**************************/
		while (temp != NULL && temp->next != NULL)
		{
			temp = temp->next;
		}
		/**************************/
		node->str = strdup(str);
		node->len = i;
		node->next = NULL;

			if (temp != NULL)
				temp->next = node;
			else
				*head = node;
				return (node);
		}

	return (NULL);

}
