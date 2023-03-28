#include"main.h"

/**
 * puts_half - prints half a string
 *
 *@str:string
 *
 * Return: no return
*/
void print_array(int *a, int n)
{
	int i=0;

	while(i < n)
	{
		if (i != (n - 1))
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
		++i;
	}
	printf("\n");
}
