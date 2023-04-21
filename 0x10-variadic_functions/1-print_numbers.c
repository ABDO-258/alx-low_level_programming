#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
* print_numbers - print number separated by a separator
* @separator: The string to be printed between numbers.
* @n:The numbers to be printed
*
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list test;

	va_start(test, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(test, unsigned int));
		if (i != (n - 1) && separator != NULL)
		printf("%s", separator);
	}
	printf("\n");
	va_end(test);
}
