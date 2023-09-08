#include "main.h"
/**
 * free_grid - a function that frees a 2d array
 * @grid: array to be freed
 * @height: height of array
 * Return: void
*/
void free_grid(int **grid, int height)
{
	while(height > 0)
	{
		height--;
		free(grid[height]);
	}
}
