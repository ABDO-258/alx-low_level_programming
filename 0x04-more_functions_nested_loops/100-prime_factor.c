#include <stdio.h>
/**
 * main -  finds and prints the largest prime factor of the number 612852475143
 * * Return: 0
 */

int main(void)
{
	long int n = 612852475143, z, x = 2;

	while (n != 1)
	{
		if (n % x == 0)
		{
			z = n / x;
			n = z;
		}
		else if (n % x != 0)
		{
			x++;
		}
	}
	printf("%li\n", x);
	return (0);
}
