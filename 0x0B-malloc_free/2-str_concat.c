#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concatenate two string
 * @s1:string 1
 * @s2:string 2
 *
 * Return: an array
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, leng1, leng2, length;
	char *a;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (leng1 = 0; s1[leng1] != '\0'; leng1++)
	{
		;
	}
	for (leng2 = 0; s2[leng2] != '\0'; leng2++)
	{
		;
	}
	length = leng1  + leng2;
	a = (char *)malloc(sizeof(char) * (length + 1));

	if (a == NULL)
		return (NULL);
	while (i < leng1)
	{
		if (s1[i] == '\0')
		i++;
		else
		a[i] = s1[i];
		i++;
	}
	for (leng2 = 0; i <= length; i++)
	{
		a[i] = s2[leng2];
		leng2++;
	}
	return (a);
}
