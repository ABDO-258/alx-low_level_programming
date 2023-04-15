#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *_isdigit - Chek if c is a digit from 0 to 9
 *
 *@c:input
 *
 *Return:1 if digit 0 if not
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
/**
 *main -multiply two long number
 *
 *@argc:number of argument
 *@argv: array of argument

 *Return:0 secces 98 error
 */
int main (int argc, char *argv[])
{
	unsigned long mul;
	int i, j, e;
	char er[] = "Error\n";

	if (argc != 3)
	{
		for( e = 0; er[e] != '\0';e++)
			_putchar(er[e]);
		exit(98);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!_isdigit(argv[i][j]))
			{
				for( e = 0; er[e] != '\0';e++)
					_putchar(er[e]);
				exit(98);
			}
		}
	}
	mul = atol(argv[1]) * atol(argv[2]);
	printf("%lu\n", mul);
	return (0);
}
