#include"main.h"

/**
 * puts2 - prints a string, followed by a new line, to stdout
 *
 *@str:string
 *
 * Return: no return
*/
void puts2(char *str)
{
	for (; *str != '\0'; str += 2)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
