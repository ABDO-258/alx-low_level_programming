#include <stdio.h>
#include "main.h"
/**
 *print_sign - number positive negative or 0
 *
 *@n: input of function
 *
 * Return: 1 or 0
 */
int print_sign(int n)
{
	if (n > 0)
		return (1);
	if (n < 0)
		return (-1);
	return (0);
}
