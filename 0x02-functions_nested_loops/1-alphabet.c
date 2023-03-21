#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - print alphabet a-z
 *
 * Return: no return
 */
void print_alphabet(void)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
	int ch;

	for (ch = 0; ch < 26; ch++)
		_putchar(alphabet[ch]);
	_putchar('\n');
}
