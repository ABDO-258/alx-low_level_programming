#include"main.h"

/**
 * puts_half - prints half a string
 *
 *@str:string
 *
 * Return: no return
*/
void puts_half(char *str)
{
       /* claculer length of the array */
	int length, n;

	for (length = 0; str[length] != '\0'; length++)
	{
	}
	/*print reverse string*/
	if (length % 2 == 0)
	{
		n = length / 2;
		while (str[n] != '\0')
		{
			_putchar(str[n]);
			n++;
		}
	}
	else
	{
		n = (length - 1) / 2;
		while (str[n] != '\0')
		{
			_putchar(str[n]);
			n++;
		}
	}	
	_putchar('\n');
}
