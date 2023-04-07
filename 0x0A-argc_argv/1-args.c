#include <stdio.h>
/**
 *main - program to print number of argument
 *
 *@argc: argument counter
 *@argv: pointer to array o argument
 *
 *Return:  0
 *
 */
int main(int argc, char *argv[])
{
	if (argv != 0)
		printf("%d\n", argc - 1);
	return (0);
}
