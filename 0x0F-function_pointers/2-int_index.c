#include <stdio.h>

/**
*int_index - fonction to searches for an integer
*@array:input
*@size: size of array
*@cmp: pointer to fonction that will perform action on the array element
*
*Return:index of matching element
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && size > 0 && cmp != NULL)
	{
		if (size <= 0)
			return (-1);
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
