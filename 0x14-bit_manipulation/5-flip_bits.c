#include <stdio.h>
#include "main.h"

/**
*flip_bits- get the number of bit to flip to go from a number n to another m
*
*@n:number 1
*@m:number 2
*
*Return: number of bit to flip
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_m_n;
	unsigned int count = 0;

	xor_m_n = m ^ n;

	while (xor_m_n != 0)
	{
		count = count + (xor_m_n & 1);
		xor_m_n >>= 1;

	}
	return (count);
}
