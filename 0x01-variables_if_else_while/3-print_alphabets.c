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
	char ch, CH;

	for (ch = 'a' ; ch <= 'z'; ch++)
	{
	putchar(ch);
	}
	for (CH = 'A' ; CH <= 'Z'; CH++)
	{
	putchar(CH);
	}
	putchar('\n');
	return (0);
}
