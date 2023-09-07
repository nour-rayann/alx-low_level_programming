#include "main.h"
/**
 * malloc_checked - allocates memory
 * @b: for which memory will be allocated
 * Return: pointer
*/
void *malloc_checked(unsigned int b)
{
	int *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}
