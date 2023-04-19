#include <stdio.h>

/**
*array_iterator - fonction to print element of an array
*@array:input
*@size: size of array
*@action: pointer to fonction that will perform action on the array element
*
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && size > 0 && action != NULL)
		for (i = 0; i < size; i++)
			action(array[i]);
}
