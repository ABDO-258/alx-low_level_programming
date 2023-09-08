#include "hash_tables.h"
/**
 * hash_table_set - add a value to the hash table
 *
 * @key:key to get it's index
 * @value:data to stor in the hash table
 * @ht:hash table
 *
 * Return:0 if error or 1 success
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_element, *current;
	unsigned long int index;

	if (ht == NULL || value == NULL || key == NULL || *key == '\0')
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];
	while (current)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(current->value);
			current->value = strdup(value);
			if (current->value == NULL)
				return (0);
			return (1);
		}
		current = current->next;
	}
	new_element = malloc(sizeof(hash_node_t));
	if (new_element == NULL)
	{
		return (0);
	}
	new_element->key = strdup(key);
	if (new_element->key == NULL)
	{
		free(new_element);
		return (0);
	}
	new_element->value = strdup(value);
	if (new_element->value == NULL)
	{
		free(new_element->key);
		free(new_element);
		return (0);
	}
	new_element->next = ht->array[index];
	ht->array[index] = new_element;
	return (1);
}
