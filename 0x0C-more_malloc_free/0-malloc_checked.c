/**
 * malloc_checked - allocate memmory using malloc
 *
 * @b: size of memmory to allocate
 * return allocated memory or exit 98 if malloc fail
 */ 
void *malloc_checked(unsigned int b)
{
	void *a = malloc(b);
	if (a == NULL)
		exit(98);
	return(a);
}
