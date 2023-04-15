#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _realloc- reallocates a memory block using malloc and free
 *
 * @ptr:pointer to previous memory allocated with malloc
 * @old_size:size of old memory allocated
 * @new_size:size of new memory to be allocated
 *
 *Return: pointer to new allocated memory if no error
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr = NULL;
	char *p = (char *) ptr;
	char *q = NULL;
	unsigned int i;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		new_ptr = malloc(new_siz);
		return (new_ptr);
	}
	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);
	q = (char *) new_ptr;
	for (i = 0; i < old_size && i < new_size; i++)
	{
		q[i] = p[i];
	}
	free(ptr);
	return (new_ptr);
}
