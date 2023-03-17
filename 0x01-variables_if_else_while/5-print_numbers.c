#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main -Entry point
 *
 * Return: must be (0)
 */

/* betty style doc for function main goes there */
int main(void)
{
	int ch;

	for (ch = 0 ; ch < 10 ; ch++)
	{
		/*change number to ascii */
	putchar(ch + '0');
	}
	putchar('\n');
	return (0);
}
