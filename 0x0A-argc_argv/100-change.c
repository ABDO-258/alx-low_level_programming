#include <stdio.h>
#include <stdlib.h>
/**
 *main - program to print number of coin for the change
 *
 *@argc: argument counter
 *@argv: pointer to array o argument
 *
 *Return:number of coin for the change
 *
 */
int main(int argc, char *argv[])
{
	int count = 0, arg;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
	arg = atoi(argv[1]);
	if (arg <= 0)
		printf("0\n");
	else
		while (arg > 0)
		{
			if (arg >= 25)
				arg -= 25;
			else if (arg >= 10)
				arg -= 10;
			else if (arg >= 5)
				arg -= 5;
			else if (arg >= 2)
				arg -= 2;
			else if (arg >= 1)
				arg -= 1;
			count++;
		}
	}
	printf("%i\n", count);
	return (0);
}
