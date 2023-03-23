#include"main.h"
/**
 *print_numbers - print numbers from 0 to 9
 *
 *Return:void
 **/
void print_numbers(void)
{
	for (n = (0 + '0') ; n < (10 + '0'); n++)
	{
		_putchar(n);
	}
	_putchar('\n');
	return (0);
}
