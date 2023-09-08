#include "main.h"
/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements
 * @size: number of bytes
 * Return: void
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	if (nmemb > 0 && size > 0)
	{
		unsigned int tot, i;
		char *ptr;

		tot = nmemb * size;
		ptr = malloc(tot);

		if (ptr != NULL)
		{
			for  (i = 0; i < tot; i++)
			{
				ptr[i] = 0;
			}
			return (ptr);
		}
	}
	return (NULL);
}
