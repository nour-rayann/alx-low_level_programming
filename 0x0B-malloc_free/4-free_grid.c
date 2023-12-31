#include "main.h"
/**
 * free_grid - a function that frees a 2d array
 * @grid: array to be freed
 * @height: height of array
 * Return: void
*/
void free_grid(int **grid, int height)
{
	if (grid != NULL && height > 0)
	{
		int i;

		for (i = 0; i < height; i++)
		{
			free(grid[i]);
		}
		free(grid);
	}
}
