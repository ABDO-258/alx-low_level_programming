#include <stdarg.h>
/**
*sum_them_all- function to sum all argument
*@n: number to added
*
*Return:the sum of argument
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list test;

	va_start(test, n);
	int i, sum = 0;

	for (i = 0; i < n; i++)
		sum += va_arg(test, unsigned int);
	va_end(test);

	return (sum);
}
