#include "function_pointers.h"
/**
 * array_iterator - a function that executes a function on elements of array
 * @array: array to perform function on
 * @size: size of array
 * @action: the function to be performed
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array)
	{
		for (i = 0; i < size; i++)
		{
			if (array[i])
			{
				action(array[i]);
			}
		}
	}
}
