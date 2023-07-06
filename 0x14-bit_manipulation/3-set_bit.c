#include <stdio.h>
#include "main.h"

/**
*set_bit(- set a bit value to 1 at index
*
*@n:decimal int
*@index: location of the bit
*
*Return: bit or -1
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);
	*n = *n | (1UL << index);

	return (1);
}
