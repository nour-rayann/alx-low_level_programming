#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: pointer to a number
 * @index: to change bit at
 * Return: int
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit;

	if (index > 64)
		return (-1);
	bit = 1 << index;
	*n = *n | bit;
	return (*n);
}
