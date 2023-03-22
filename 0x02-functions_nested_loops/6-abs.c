#include <stdio.h>
#include "main.h"
/**
 *_abs - calculer the absolute number
 *
 *@n: input of function
 *
 * Return: n
 */
int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
