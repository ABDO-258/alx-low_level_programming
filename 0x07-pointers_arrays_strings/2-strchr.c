#include <stddef.h>
/**
 * _strchr - locate a character in a string
 *
 * @c:the charcter to locate
 * @s:pointer to the first ocurrence
 *
 * Return: (adress of the lacted lettre or NULL if not found
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		i++;
	}
	if (s[i] == c)
	{
		return (&s[i]);
	}
	return (NULL);
}
