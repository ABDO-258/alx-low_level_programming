#include <stdio.h>
#include"main.h"
/**
 *_strcpy - copies a string from one pointer to another
 *@src: source of string parameter input
 *@dest: destination of string
 *Return: pointer to dest input parameter
 */

int _atoi(char *s)
{
	int result = 0;
	int sign =1;

	while (*s != '\0')
	{
		/*skip leading white space*/
		while (*s == ' ' || *s == '+' || *s =='\n' || (*s >= 97 && *s <= 122) || (*s >= 65 && *s <= 90))
		{
			s++;
		}
		if (*s == '-')
		{
			sign = sign * (-1);
			s++;
		}
		/*digit*/
		while (*s >= '0' && *s <= '9')
		{
			result = result * 10 + (*s - '0');
			s++;
		}
		if (result > 0)
		{
			break;
		}
	}
	return sign * result;
}
