/**
 * _memcpy - copie a number of value to other string
 *
 * @dest:string that will take input
 * @src: string to copie input
 * @n:number of place to copie
 *
 * Return: (dest) string filled
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i <= n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
