#include"main.h"

/**
 * rev_string - reverse a string
 *
 *@s:string
 *
 * Return: no return
*/
void rev_string(char *s)
{
       /* claculer length of the array */
	int length, mid, i = 0;

	for (length = 0; s[length] != '\0'; length++)
	{
	}
	/*reverse string*/
	while (i < (length / 2))
	{
		mid = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = mid;
		i++;
	}
}
