/**
 * _strncat - concatenates two strings with n
 *
 *@dest:string destination
 *@n:number of character
 *@src:string source
 *
 *Return:2 string in 1
 *
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;
	char *result;

	result = dest;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != src[n])
	{
		result[i] = src[j];
		i++;
		j++;
	}
	result[i] = '\0';
	return (dest);
}
