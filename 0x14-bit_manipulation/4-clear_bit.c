#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointer to number
 * @index: to set the bit
 * Return: int
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index > 63)
		return (-1);
	mask = 1 << index;
	mask = ~mask;
	*n = *n & mask;
	return (1);
}
