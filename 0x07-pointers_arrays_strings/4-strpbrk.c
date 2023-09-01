#include "main.h"
/**
 * _strpbrk - locates the first occurrence in the string
 * @s: pointer to be returned
 * @accept: we check for characters in it
 * Return: *s
 */
char *_strpbrk(char *s, char *accept)
{
	int i, n;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (s[i] == accept[n])
			{
				return (&s[i]);
			}
		}
	}
	if (s[i] == accept[n])
	{
		return (&s[i]);
	}
	return (0);
}
