#include "lists.h"
/**
 * add_node - Adds a new node at the beginning of a list_t list.
 * @head: Pointer the list_t **.
 * @str: String.
 * Return: New element or NULL.
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t  *node = malloc(sizeof(list_t));
	unsigned int i = 0;

	/**********************************/
		if (str != NULL && node != NULL)
			{
	/**********************************/
			while (str[i])
				i++;

			node->str = strdup(str);
			node->len = i;
			node->next = *head;
			*head = node;
			return (node);
	}

	return (NULL);

}
