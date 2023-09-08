#include "main.h"
/**
 * array_range - creates an array of integers
 * @min: starting int
 * @max: ending int
 * Return: int
*/
int *array_range(int min, int max)
{
	if (max >= min)
	{
		int size, i;
		int *ptr;

		size = (max - min) + 1;
		ptr = malloc(size * sizeof(int));
		if (ptr != NULL)
		{
			for (i = 0; i < size; i++)
			ptr[i] = min + i;
		}
		return (ptr);
	}
	return (NULL);
}
