#include "hash_tables.h"
/**
 * hash_table_delete - Function that deletes a hash table.
 * @ht: The hash table.
*/
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *Point;
	hash_node_t *temp;

	while (i < ht->size)
	{
		Point = ht->array[i];
		while (Point)
		{
			temp = Point;
			Point = Point->next;
			free(temp->key);
			free(temp->value);
			free(temp);
		}
		i++;
	}

	free(ht->array);
	free(ht);
}
