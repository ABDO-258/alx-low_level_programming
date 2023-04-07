#include <stdio.h>
/**
 *main - program to print all argument it receives
 *
 *@argc: argument counter
 *@argv: pointer to array o argument
 *
 *Return:  0
 *
 */
int main(int argc, char *argv[])
{
	int i = 0;

	for (i = 1; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
