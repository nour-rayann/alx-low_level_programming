#include "main.h"
/**
 *  _memset - function to be executed
 *  @s: pointer to characters
 *  @b: character to be printed
 *  @n: number of bytes
 *  Return: *s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *ptr = s;

	for (i = 0; i < n; i++)
	{
		*ptr = b;
		ptr++;
	}
	return (s);
}

