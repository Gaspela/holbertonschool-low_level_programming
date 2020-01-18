#include "hash_tables.h"
/**
 * hash_table_create - Create a hash table.
 * @size: Nodes and collisions.
 * Return: Return the *hash_table pointer direcction.
*/
hash_table_t *hash_table_create(unsigned long int size)
{

	hash_table_t *hash_table;

	hash_table = malloc(sizeof(hash_table_t));
	if (!hash_table || !size)
	{
		return (NULL);
	}
	hash_table->array = calloc(size, sizeof(hash_table_t *));
	if (!hash_table)
	{
		/* code */
		free(hash_table);
		return (NULL);
	}
	hash_table->size = size;
	return (hash_table);
}

