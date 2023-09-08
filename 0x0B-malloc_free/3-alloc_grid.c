#include "main.h"
/**
 * alloc_grid - prints a 2d grid
 * @width: width of grid
 * @height: height of grid
 * Return: pointer to pointer
*/
int **alloc_grid(int width, int height)
{
	int i, n, f;
	int **ptr;

	if (width > 0 && height > 0)
	{
		ptr = malloc(height * sizeof(int));

		if (ptr != NULL)
		{
			for (i = 0; i < height; i++)
			{
				if (ptr == NULL)
				{
					for (f = 0; f < i; f++)
						free(ptr[f]);
					free(ptr);
					return (NULL);
				}
				ptr[i] = malloc(width * sizeof(int));
				for (n = 0; n < width; n++)
				{
					ptr[i][n] = 0;
				}
			}
			return (ptr);
		}
	}
	return (NULL);
}
