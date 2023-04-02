/**
 * reverse_array - reverse an array
 *
 *@a:array 1
 *@n:length 2
 *
 *Return: 0 always
 */
void reverse_array(int *a, int n)
{
	int j = 0;
	int b[n];

	n--;
	while (n >= 0)
	{
		b[j] = a[n];
		j++;
		n--;
	}
	for (n = 0; n <= j; n++)
	{
		a[n] = b[n];
	}
}
