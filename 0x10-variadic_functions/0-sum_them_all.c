#include "variadic_functions.h"
#include <stdarg.h>

/**
*sum_them_all- function to sum all argument
*@n: number to added
*
*Return:the sum of argument
*/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;

	va_list test;

	va_start(test, n);
		for (i = 0; i < n; i++)
		sum += va_arg(test, unsigned int);
	va_end(test);

	return (sum);
}
