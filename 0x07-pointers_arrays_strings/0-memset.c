/**
 *
 * *_memset - fill a string with a fixed value
 *
 * @n:number of places to be filled
 * @b: value 
 * @s:pointer to 
 *
 * Return : string filled
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
}
