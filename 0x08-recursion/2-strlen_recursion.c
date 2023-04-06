
#include <unistd.h>
#include "main.h"
/**
 *_strlen_recursion- print length of a string in recursion
 *
 * @s:pointer to string
 *
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
