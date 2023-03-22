#include <stdio.h>
/**
 *main - Entry point 50 fibonacci number
 *
 *Return: return 0
 */
int main(void)
{
	unsigned long  sum, fib1 = 0, fib2 = 1;
	int count;

	for (count = 0; count < 50; count++)
	{
		sum = fib1 + fib2;
		printf("%lu", sum);
		fib1 = fib2;
		fib2 = sum;
		if (count == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
