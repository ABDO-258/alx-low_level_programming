#include"main.h"

/**
 *print_square - print a square
 *@size: is the number of times the # character should be printed
 */
void print_square(int size)
{
	int side1, side2;

	if (size > 0)
	{
		for (side1 = 1; side1 <= size; side1++)
		{
			for (side2 = 1; side2 <= size; side2++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	_putchar('\n');
}
