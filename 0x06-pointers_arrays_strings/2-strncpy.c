/**
 * _strncpy - copie a strings with n
 *
 *@dest:string destination
 *@n:number of character
 *@src:string source
 *
 *Return: a string
 *
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j = 0;

	while (src[j] != '\0')
	{
		if (j < n)
		{
			dest[j] = src[j];
		}
		else 
		{
			dest[j] = dest[j];
		}

		j++;
	}
	dest[j] = '\0';
	return (dest);
}
