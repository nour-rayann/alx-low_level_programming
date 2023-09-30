#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @n: number
 * @index: to return bit at
 * Return: int
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int counter = 1;
	unsigned long int temp;

	temp = n;
	while (temp)
	{
		temp = temp >> 1;
		counter++;
	}
	if (counter < index)
		return (-1);
	return ((n >> index) & 1);
}
