#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - locates the first occurrence in the string
 * @s: pointer to be returned
 * @accept: we check for characters in it
 * Return: *s
 */
char *_strpbrk(char *s, char *accept)
{
	int n;

	while (*s != '\0')
	{
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (*s == accept[n])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
