#include "main.h"
/**
 * create_array - creates an array of chars
 * @size: size of array
 * @c: char to initialize
 * Return: NULL
*/
char *create_array(unsigned int size, char c)
{
	if (size != 0)
	{
		char *ptr = (char *) malloc(size * sizeof(c));
		unsigned int i;

		if (ptr != NULL)
		{
			for (i = 0; i < size; i++)
			{
				ptr[i] = c;
			}
		return (ptr);
		}
		else
			return (NULL);
	}
	return (NULL);
}
