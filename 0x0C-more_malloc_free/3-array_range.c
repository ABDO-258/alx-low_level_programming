#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 *array_range- Filltes an array of integers
 *
 * @min:int min
 * @max:int max
 *
 *Return: (ar) string of int
 */
int *array_range(int min, int max)
{
	int i, *ar;

	if (min > max)
		return (NULL);
	ar = malloc((max - min + 1) * sizeof(int));
	if (ar == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
	{
		ar[i] = min;
		min++;
	}
	return (ar);
}
