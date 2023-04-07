#include <stdio.h>
#include <stdlib.h>
/**
 *main - program to multiplies two number
 *
 *@argc: argument counter
 *@argv: pointer to array o argument
 *
 *Return:1 if error
 *
 */
int main(int argc, char *argv[])
{
	int result;

	if (argc == 3)
	{
		result = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", result);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
