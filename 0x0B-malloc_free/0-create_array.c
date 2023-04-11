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
	char *a = (char *)malloc(sizeof(char) * size);

	if (size == 0)
	{
		return (NULL);
	}
	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= size; i++)
	{
		a[i] = c;
	}
	return (a);
}
