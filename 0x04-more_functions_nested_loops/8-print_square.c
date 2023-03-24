#include"main.h"

/**
 *print_square - print a square
 *@size: is the number of times the # character should be printed
 */
void print_square(int size)
{
	int sid1, side2;

	if (n > 0)
	{
		for (side1 = 0; side1 < size; side1++)
		{
			for (side2 = 0; side2 < side1; side2++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	_putchar('\n');
}
