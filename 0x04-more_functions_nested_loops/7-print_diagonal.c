#include"main.h"

/**
 *print_diagonal - print a diagonal line
 *@n: is the number of times the \ character should be printed
 */
void print_diagonal(int n)
{
	int space, slash;

	if (n > 0)
	{
		for (slash = 1; slash < n; slash++)
		{
			for (space = 1; space < slash; space++)
			{
				_putchar(' ');
			}
			_putchar(92); /* 92 is ascii for \*/
			_putchar('\n');
		}
	}
	else
	_putchar('\n');
}
