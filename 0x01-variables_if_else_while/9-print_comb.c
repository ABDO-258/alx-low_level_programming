#include <stdio.h>
/**
 * main -Entry point
 *
 * Return: must be (0)
 */

int main(void)
{
	int ch, te = 9;

	for (ch = 0 ; ch <= te ; ch++)
	{
		/*change number to ascii */
	putchar(ch + '0');
	if (ch != 9)
		{
		putchar(',');
		putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
