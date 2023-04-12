#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid -free allocaterd memorry for a 2 dimension array
 * @grid:the width of the 2d array
 * @height:the heigth of the 2d array
 *
 * Return: no return
 */
void free_grid(int **grid, int height)
{
	if (height != 0 && grid != NULL)
	{
		for (height = height; height >= 0 ; height--)
		{
			free(grid[height]);
		}
		free(grid);
	}
}
