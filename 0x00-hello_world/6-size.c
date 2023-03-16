#include <stdio.h>
/**
 *main - Entry point
 *
 *Return:must be (0)
 *
 *
 */
int main(void)
{
	char (i);
	int (j);
	long int (k);
	long long int (l);
	float (m);

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(i));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(j));
	printf("Size of long int %lu byte(s)\n", (unsigned long)sizeof(k));
	printf("Size of long long int %lu byte(s)\n", (unsigned long)sizeof(l));
	printf("Size of float %lu byte(s)\n", (unsigned long)sizeof(m));
	return (0);
}

