#include "main.h"
/**
 * _strchr - finds the first occurrence of a character
 * @s: pointer to buufer
 * @c: character to be found
 * Return: *s
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != 0; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	if (s[i - 1] != c)
	{
		return (0);
	}
	return (0);
}
