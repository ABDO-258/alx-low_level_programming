#include "hash_tables.h"

/**
 * hash_table_create - create a hash table
 * @size:the size of the hash table
 *
 * Return: pointer to the created hash table or NULL if error
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *first_ht;
	unsigned long int i;

	if (size == 0)
		return (NULL);

	first_ht = malloc(sizeof(hash_table_t));
	if (first_ht == NULL)
		return (NULL);

	first_ht->size = size;
	first_ht->array = malloc(sizeof(hash_node_t *) * size);
	if (first_ht->array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		first_ht->array[i] = NULL;

	return (first_ht);

}
