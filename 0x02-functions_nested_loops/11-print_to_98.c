#include <stdio.h>
#include "main.h"
/**
 *print_to_98 - print from n t 98
 *
 *
 *@n:inbut of fontion
 *
 *
 */
void print_to_98(int n)
{

	while (n > 98)
	{
		printf("%d, ", n);
		n--;
	}
	while (n < 98)
	{
		printf("%d, ", n);
		n++;
	}
	if (n == 98)
	{
		printf("%d", n);
	}
	printf("\n");
}
