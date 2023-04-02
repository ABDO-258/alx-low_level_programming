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
	int b;

	for (j = 0; j < n / 2; j++)
	{
		b = a[j];
		a[j] = a[n - j - 1];
		a[n - j - 1] = b;
	}
}
