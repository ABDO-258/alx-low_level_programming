#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid -allocate memorry for a 2 dimension array
 * @width:the width of the 2d array
 * @height:the heigth of the 2d array
 *
 * Return: an 2d array
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **a = malloc(height * sizeof(int *));

	if (width <= 0 || height <= 0)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		a[i] = malloc(width * sizeof(int));
		if (a[i] == NULL)
		{
			for (i = i; i >= 0; i--)
			{
				free(a[i]);
			}
			free(a);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			a[i][j] = 0;
		}
	}
	return (a);
}
