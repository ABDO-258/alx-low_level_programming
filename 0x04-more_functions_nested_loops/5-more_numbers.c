#include"main.h"
/**
 *more_numbers - print numbers from 0 to 14
 *
 *Return:void
 **/
void more_numbers(void)
{
	int n = 0, row;

	for (row = 0 ; row < 10; row++)
	{
		for (n = 0 ; n < 15; n++)
		{
			if (n / 10 > 0)
			{
				_putchar(n / 10 + '0');
			}
			_putchar(n % 10 + '0');
		}
		_putchar('\n');
	}
}
