#include "function_pointers.h"
/**
 * int_index - a function that finds a certain integer and return its index
 * @array: array to find integer in
 * @size: size of array
 * @cmp: to call the function to find the integer
 * Return: index or -1
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, m;

	if (size && array)
	{
		for (i = 0; i < size; i++)
		{
			m = cmp(array[i]);
			if (m != 0)
				return (i);
		}
	}
	return (-1);
}
