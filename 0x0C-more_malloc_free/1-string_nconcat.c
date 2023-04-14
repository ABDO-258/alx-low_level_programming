#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - concatenate two string
 * @s1:string 1
 * @s2:string 2
 * @n:number of place to copie
 *
 * Return: an array
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, leng1, leng2, length;
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
	if (n > leng2)
	length = leng1  + leng2;
	else
	length = leng1  + n;
	a = (char *)malloc(sizeof(char) * (length + 1));
	if (a == NULL)
		return (NULL);
	while (i < leng1)
	{
		if (s1[i] == '\0')
		{
			i++;
		}
		else
		{
			a[i] = s1[i];
			i++;
		}
	}
	for (leng2 = 0; i <= length; i++)
	{
		if (leng2 == n)
		a[i] = '\0';
		else
		a[i] = s2[leng2];
		leng2++;
	}
	return (a);
}
