#include "hash_tables.h"
/**
 * key_index - get the index for a key
 *
 * @key:key to get it's index
 * @size:the size of hash table
 *
 * Return:index for the key
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key) % size;

	return (index);

}
