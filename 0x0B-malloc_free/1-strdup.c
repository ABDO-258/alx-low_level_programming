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
	int i = 0, length;
	char *a;

	if (str == NULL)
	{
		return (NULL);
	}
	for (length = 0; str[length] != '\0'; length++)
	{
		;
	}
	a = (char *)malloc(sizeof(char) * (length + 1));

	if (a == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		a[i] = str[i];
		i++;
	}
	return (a);
}
