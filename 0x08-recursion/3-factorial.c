#include "main.h"
/**
 *factorial- factorial of a number
 *
 * @n:number
 *
 * Return: factorial of n or -1 if n negative or 1 if n is zero
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
		return (n * factorial(n - 1));
}
