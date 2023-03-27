#include"main.h"

/**
 * print_rev - prints a string in reverse, followed by a new line, to stdout
 *
 *@s:string
 *
 * Return: no return
*/
void print_rev(char *s)
{
       /* claculer length of the array */
	int length;

	for (length = 0; s[length] != '\0'; length++)
	{
	}
	/*print reverse string*/
	for (length--; length != 0; length--)
	{
		_putchar(s[length]);
	}
	_putchar('\n');
}
