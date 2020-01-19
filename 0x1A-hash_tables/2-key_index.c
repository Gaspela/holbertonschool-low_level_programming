#include "hash_tables.h"
/**
 * key_index - Return index of given key.
 * @key: The key pointer.
 * @size: The size hash table.
 * Return: hash
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{

	unsigned long index;

	index = hash_djb2(key) % size;
	return (index);
}
