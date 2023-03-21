#include <stdio.h>
#include "main.h"
/**
 *_isalpha - Alphabet a-z
 *
 *@c: input of function
 *
 * Return: 1 or 0
 */
int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
