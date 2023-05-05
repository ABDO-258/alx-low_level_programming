#include <stdio.h>
#include "main.h"

/**
*print_binary- print a dicimal input as binary
*
*@n:decimal int
*
*/

void print_binary(unsigned long int n)
{
	unsigned long int mask = 1, length = 0;
	unsigned long int m;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	m = n;
	while (m > 0)
	{
		m >>= 1;
		length++;
	}
	length--;

	if (length > 0)
		mask <<= (length);
	while (mask > 0)
	{
		if ((n & mask) == 0)
			_putchar('0');
		else
			_putchar('1');
		mask >>= 1;
	}
}
