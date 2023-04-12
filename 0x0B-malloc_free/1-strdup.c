#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - fonction to copies a string
 * @str:input string
 *
 * Return: an array
 */
char *_strdup(char *str)
{
	int length;

	for (length = 0; str[length] != '\0'; length++)
	{
		;
	}
	if (str == NULL)
	{
		return (NULL);
	}
	char *a = (char *)malloc(sizeof(char) * (length + 1));

	for (length; length != -1; length--)
	{
		a[length] = str[length];
	}
	return (a);
}
