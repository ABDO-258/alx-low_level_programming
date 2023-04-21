#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
* print_strings - print number separated by a separator
* @separator: The string to be printed between strings.
* @n:The string be printed
*
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *ptrstr;

	va_list test;

	va_start(test, n);
	for (i = 0; i < n; i++)
	{
	ptrstr = va_arg(test, char *);
	if (ptrstr == NULL)
		printf("(nil)");
	else
		printf("%s", ptrstr);

	if (i != (n - 1) && separator != NULL)
		printf("%s", separator);
	}
	printf("\n");
	va_end(test);
}
