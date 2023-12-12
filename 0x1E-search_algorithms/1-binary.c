#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * binary_search - function  searches for a value in a sorted array of integers
 *  using the Binary search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: first index where value is located
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i, min = 0, max = size - 1, midle;

	if (array == NULL)
		return (-1);

	while (min <= max)
	{
		printf("Searching in array: ");
		for (i = min; i <= max; i++)
		{
			printf("%d%s", array[i], (i == max) ? "\n" : ", ");
		}
		midle = (min + max) / 2;
		if (array[midle] == value)
			return (midle);
		else if (array[midle] < value)
		{
			min = midle + 1;
		}
		else
		{
			max = midle - 1;
		}
	}
	return (-1);
}
