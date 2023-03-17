#include <stdio.h>
/**
 * main -Entry point
 *
 * Return: must be (0)
 */

int main(void)
{
	int ch;

	for (ch = 0 ; ch < 10 ; ch++)
	{
		/*change number to ascii */
	putchar(ch + '0');
	}
	for (ch = 10 ; ch < 16 ; ch++)
	{
		putchar(ch - 10 + 'a');
	}
	putchar('\n');
	return (0);
}
