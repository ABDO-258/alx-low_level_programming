#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * malloc_checked - allocate memmory using malloc
 *
 * @b: size of memmory to allocate
 * Return allocated memory or exit 98 if malloc fail
 */
void *malloc_checked(unsigned int b)
{
	void *adr;
	
	adr = malloc(b);

	if (!adr)
	{
		exit(98);
	}
	return (adr);
}
