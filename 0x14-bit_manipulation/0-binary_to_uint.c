#include <stdio.h>

/**
*binary_to_uint- change a string of 0 and 1 to decimal
*
*@b:pointer to string
*
*Return: decimal number
*/

unsigned int binary_to_uint(const char *b)
{
	size_t dec = 0, op = 1, j, length;

	if (!b)
		return (0);
	for (length = 0; b[length] != '\0'; length++)
		;
	while (length != 0)
	{
		length--;
		if (b[length] == '0')
			j = 0;
		else if (b[length] == '1')
			j = 1;
		else
			return (0);
		j = j * op;
		dec = dec + j;
		op = op * 2;
	}
	return (dec);
}
