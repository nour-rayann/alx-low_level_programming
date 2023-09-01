#include "main.h"
/**
 * _memcpy - copies memory from source to dest
 * @dest: destination
 * @src: source
 * @n: number of bytes
 * Return: *dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
