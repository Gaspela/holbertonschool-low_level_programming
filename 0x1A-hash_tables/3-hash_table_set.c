#include "hash_tables.h"
/**
 * hash_table_set - Adds an element to the hash table.
 * @ht: Hash table update.
 * @key: The key pointer.
 * @value: The value.
 * Return: 1 sucss and 0 failure
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *newnode;
	hash_node_t *temp;

	if (!ht || !key || !value)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index])
	{
		temp = ht->array[index];
		while (temp)
		{
			/* Strcmp Strdup */
			if (strcmp(temp->key, key) == 0)
			{
				free(temp->value);
				temp->value = strdup(value);
				return (1);
			}
			temp = temp->next;
		}
	}
	newnode = malloc(sizeof(hash_table_t));
	/*Conditions*/
	newnode->key = strdup(key);
	if (!newnode->key)
	{
		free(newnode);
		return (0);
	}
	newnode->value = strdup(value);
	if (!newnode->value)
	{
		free(newnode->key);
		free(newnode);
		return (0);
	} /*Add node*/
	newnode->next = ht->array[index];
	ht->array[index] = newnode;
	return (1);
}
