/**
 * swap_int - swap value of a and b
 *
 *@a: value a
 *@b: value b
 *
 *
 *
 * Return:  return it void
 */
void swap_int(int *a, int *b)
{
	int medium;

	medium = *a;
	*a = *b;
	*b = medium;
}
