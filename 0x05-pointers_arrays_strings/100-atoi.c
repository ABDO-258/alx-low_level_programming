#include <stdio.h>
#include"main.h"
/**
 *_atoi - make a  string an int
 *@s: string input
 *Return: int
 */

int _atoi(char *s)
{
	unsigned int result = 0;
	int sign = 1;

	while (*s != '\0')
	{
		/*skip leading white space*/
		while (*s == ' ' || *s == '+' || *s == '\n'
		|| (*s >= 97 && *s <= 122) || (*s >= 65 && *s <= 90))
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
	return (sign * result);
}
