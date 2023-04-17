/**
 *_sqrt_recursion_helper - calculate square root of n
 *
 * @n:number you want his square root
 * @x:help get square root
 *
 * Return: x if it square root
 */
int _sqrt_recursion_helper(int n, int x)
{
	if (x * x == n || x == n)
		return (x);
	else
		return (_sqrt_recursion_helper(n, x + 1));
}
/**
 *_sqrt_recursion - calculate square root of n
 *
 *@n:number you want his square root
 *
 * Return: x if it square root
 */
int _sqrt_recursion(int n)
{
	int c;

	if (n == 1)
		return (1);
	if (n < 0)
		return (-1);
	c = _sqrt_recursion_helper(n, 0);
	if (c == n)
		return (-1);
	else
		return (c);
}
