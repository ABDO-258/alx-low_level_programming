/**
 * _strcat - concatenates two strings
 *
 *@dest:string destination
 *@src:string source
 *
 *Return:2 string in 1
 *
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;
	char *result;

	result = dest;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		result[i] = src[j];
		i++;
		j++;
	}
	result[i] = '\0';
	return (result);
}
