#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int _isdigit(char arg[]);


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
		if (_isdigit(argv[i]) == 0)
		{
			result += atoi(argv[i]);
		}
		else
		{
		printf("Error\n");
		return (1);
		}
	}
	printf("%d\n", result);
	return (0);
}
/**
 *_isdigit - Chek if the argument is a number
 *
 *@arg:the argument
 *
 *Return: 0 if number or 1 if not
 *
 */

int _isdigit(char arg[])
{
	int i, length = strlen(arg);

	for (i = 0; i < length; i++)
	{
		if (!isdigit(arg[i]))
		{
			return (1);
		}
	}
	return (0);
}
