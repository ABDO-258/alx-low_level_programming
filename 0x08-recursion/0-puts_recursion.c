/**
 *_puts_recursion - print a string in recursion 
 *
 * @s poiter to string 
 *
 * Return: no return
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}

