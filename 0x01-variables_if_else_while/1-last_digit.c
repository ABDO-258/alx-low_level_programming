#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main -Entry point
 *
 * Return: must be (0)
 */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	int ld = n % 10;

	printf("Last digit of %d is ", ld);

	if (ld > 5)
	{
	printf("%d and is greater than five\n", ld);
	}
	if (ld == 0)
	{
	printf("%d and is 0\n", ld);
	}
	if (0 < ld < 6)
	{
	printf("%d and is less than 6 and not 0\n", ld);
	}
	return (0);
}
