#include "main.h"
/**
 * get_endianness - checks the endianness
 * Return: 0 if big endian, 1 if little endian
*/
int get_endianness(void)
{
	unsigned int num = 1;
	char *c;
	int rtrn;

	c = (char *) &num;
	rtrn = *c;
	return (rtrn);
}
