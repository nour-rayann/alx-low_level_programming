#include "main.h"
/**
 * _strchr - finds the first occurrence of a character
 * @s: pointer to buufer
 * @c: character to be found
 * Return: *s
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s != c)
	{
		if (*s == '\0')
			return (s);
	}
	return (0);
}
