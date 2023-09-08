#include "hash_tables.h"
/**
 * hash_table_get - get a value to the hash table
 *
 * @key:key to get it's index
 * @ht:hash table
 *
 * Return:0 if error or 1 success
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *current;
	unsigned long int index;

	/*check hash, key and value are null or the key is empty */
	if (ht == NULL || key == NULL || *key == '\0')
		return (0);
	/* get the index by the hash function */
	index = key_index((const unsigned char *)key, ht->size);

	current = ht->array[index];
	while (current)
	{
		if (strcmp(current->key, key) == 0)
		{
			return (current->value);
		}
		current = current->next;
	}
	return (NULL);
}
