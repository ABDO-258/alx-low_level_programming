#include <stdio.h>
#include "main.h"

/**
*clear_bit(- set a bit value to 0 at index
*
*@n:pointer to number
*@index: location of the bit
*
*Return: 1 or -1
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);
	*n = *n & ~(1UL << index);

	return (1);
}
