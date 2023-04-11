#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - fonction to allocate a memorry for an arra
 * @size:size of array
 * @c:char to put in array
 *
 * Return: a array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *a = malloc(sizeof(char) * (size + 1));

	for (i = 0; i < size; i++)
	{
		a[i] = c;
	}
	if (size == 0)
	{
		return (NULL);
	}
	if (a == NULL)
	{
		return (NULL);
	}
	return (a);
}
