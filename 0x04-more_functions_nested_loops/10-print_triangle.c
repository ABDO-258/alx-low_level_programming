#include "main.h"
/**
 * print_triangle - print triangle with #
 *
 *@size:size of triangle
 *
 */

void print_triangle(int size)
{
	int side, base;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (side = 1; side <= size; side++)
		{
			for (base = 1; base <= size; base++)
			{
				if ((side + base) <= size)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
}
