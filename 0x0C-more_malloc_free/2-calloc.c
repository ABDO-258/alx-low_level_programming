#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _alloc - allocate memory for array
 * @nmemb: size of array
 * @size:type size
 *
 * Return: pointer of array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;

	if (nmemb == 0 || size == 0)
		return (NULL);
	a = malloc(nmemb * size);
	if (a == NULL)
		return (NULL);
	memset(a, 0, nmemb * size);
	return (a);
}
