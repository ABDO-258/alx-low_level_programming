void reset_to_98(int *n)
{
	*n = &n;
	*n = 98;
	n = *n;
}
