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
	void *new_ptr = malloc(new_size);
	char *p = (char *) ptr;
	char *q = (char *) new_ptr;
	unsigned int i;

	if (new_ptr == NULL)
		return (NULL);
	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		return (new_ptr);
	}
	if (new_size > old_size)
	{
	for (i = 0; i < new_size && i < old_size; i++)
	{
		q[i] = p[i];
	}
	}
	free(ptr);
	return (new_ptr);
}
