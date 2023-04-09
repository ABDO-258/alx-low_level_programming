#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 *main - program to add positive number
 *
 *@argc: argument counter
 *@argv: pointer to array o argument
 *
 *Return:1 if error
 *
 */
int main(int argc, char *argv[])
{
	int result = 0, i = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if (isdigit(*argv[i]))
		{
			result += atoi(argv[i]);
		}
		else if (!isdigit(*argv[i]))
		{
		printf("Error\n");
		return (1);
		}
	}
	printf("%d\n", result);
	return (0);
}
