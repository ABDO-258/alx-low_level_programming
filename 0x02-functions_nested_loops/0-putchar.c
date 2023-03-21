#include <stdio.h>
#include "main.h"
/**
*main -Entry point
*
*Return: must return 0
*/
int main(void)
{
	char text[] = "_putchar";
	int ch;

	for (ch = 0; ch < 8 ; ch++)
		_putchar(text[ch]);
	_putchar("\n");
	return (0);
}
