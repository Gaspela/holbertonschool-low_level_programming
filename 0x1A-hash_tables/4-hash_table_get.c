#include "hash_tables.h"
/**
 * hash_table_get - Retrieve a value associated with a key.
 * @ht: Hash table update.
 * @key: The key pointer.
 * Return: The value of element o NULL
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
    unsigned long int index;
    hash_node_t *temp;

    if (!ht || !key)
        return (NULL);

    index = key_index((const unsigned char *)key, ht->size);
    temp = ht->array[index];

    while (temp)
    {
        if (strcmp(temp->key, key) == 0)
            return (temp->value);
        temp = temp->next;
    }

    return (NULL);
}