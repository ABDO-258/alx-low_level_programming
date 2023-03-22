#include <stdio.h>
/**
 *main - Entry point sum of even fibonacci number
 *
 *Return: return 0
 */
int main(void)
{
	unsigned long  sum, fib1 = 0, fib2 = 1, sum_of_even = 0;

	do {
		sum = fib1 + fib2;
		fib1 = fib2;
		fib2 = sum;
		if ((sum % 2) == 0)
		{
		sum_of_even += sum;
		}
	} while (sum < 4000000);
		printf("%lu", sum_of_even);
		printf("\n");
	return (0);
}
