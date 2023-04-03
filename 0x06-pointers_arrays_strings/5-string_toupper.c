/**
 * *string_toupper - change array from lowercasse to uppercasse
 *
 *@s:pointer to array
 *
 *Return: the pointer s
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 97 && s[i] <= 122)
		{
			s[i] = s[i] - 32;
		}
		i++;
	}
	return (s);
}
