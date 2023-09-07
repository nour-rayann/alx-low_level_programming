#include "main.h"
/**
 * alloc_grid - prints a 2d grid
 * @width: width of grid
 * @height: height of grid
 * Return: pointer to pointer
*/
int **alloc_grid(int width, int height)
{
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	else if (width > 0 && height > 0)
	{
		int arr[width][height];
		int i, n;
		int **ptr = (int **) malloc ((width + height) * (sizeof(int)));

		if (ptr != NULL)
		{
			for (i = 0; i < width; i++)
			{
				for (n = 0; n < height; n++)
				{
					if (!(arr[i][n] >= 0))
						arr[i][n] = 0;
					**ptr = arr[i][n];
				}
			}
			return (ptr);
		}
	}
	return (NULL);
}
