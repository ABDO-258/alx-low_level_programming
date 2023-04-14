#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 *_memset - Fill a string with a fixed value
 *
 * @n:number of places to be filled
 * @b: value
 * @s:pointer to string
 *
 *Return: (s) string filled
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
/**
 * _calloc - allocate memory for array
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
	_memset(a, 0, nmemb * size);
	return (a);
}
