#include "main.h"
/**
 * flip_bits -  returns number of bits needed to flip a number
 * @n: first number to be flipped
 * @m: number to flip to
 * Return: number of bits
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int num_bits = 0;

	while (n | m)
	{
		if ((n & 1) != (m & 1))
		{
			num_bits++;
		}
		n = n >> 1;
		m = m >> 1;
	}
	return (num_bits);
}
