#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - print alphabet a-z 10 time
 *
 * Return: no return
 */
void print_alphabet_x10(void)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
	int ch, n = 0;

	while (n < 10)
	{
	for (ch = 0; ch < 26; ch++)
		_putchar(alphabet[ch]);
	_putchar('\n');
	n++;
	}
}
