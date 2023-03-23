#include"main.h"
/**
 *print_numbers - print numbers from 0 to 9 exclude 2 & 4
 *
 *Return:void
 **/
void print_most_numbers(void)
{
	int n = 0;

	while ( n < 10 ;)
	{
		_putchar(n + '0');
		n++
		if (n = 2 || n = 4)
			n++;
	}
	_putchar('\n');
}
