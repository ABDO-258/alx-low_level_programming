#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"
#include <math.h>

/**
 * jump_search - function searches for a value in a sorted array
 * of integers using the Jump search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: first index where value is located
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i = 0, min = 0, max = size - 1, jump = sqrt(size);

	if (array == NULL)
		return (-1);

	while (array[jump] < value && jump < size)
	{
		printf("Value checked array[%ld] = [%d]\n", min, array[min]);
		min = jump;
		jump = jump + sqrt(max);
	}
	printf("Value checked array[%ld] = [%d]\n", min, array[min]);
	printf("Value found between indexes [%ld] and [%ld]\n", min , jump);
	for (i = min; i <= jump && i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}


	return (-1);
}
