#include "main.h"
/**
 * _strpbrk - locates the first occurrence in the string
 * @s: pointer to be returned
 * @accept: we check for characters in it
 * Return: *s
 */
char *_strpbrk(char *s, char *accept)
{
	char *temp;

	while (*s != '\0')
	{
		temp = accept;
		while (*temp != '\0')
		{
			if (*s == *temp)
			{
				return (s);
			}
			temp++;
		}
		s++;
	}
	if (*s == *temp)
	{
		return (s);
	}
	return (0);
}
