#include "hash_tables.h"
/**
 * hash_table_print - Function that prints a hash table.
 * @ht: Hash table update.
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	unsigned long int point = 0;
	hash_node_t *temp;

	printf("{");
	while (i < ht->size)
	{
		temp = ht->array[i];
		while (temp)
		{
			if (point)
				printf(", ");
			printf("'%s': '%s'", temp->key, temp->value);
			point = 1;
			temp = temp->next;
		}
		i++;
	}
	printf("}\n");
}
