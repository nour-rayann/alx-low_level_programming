#include "main.h"
#include <string.h>
/**
 * recurs - a helper function
 * @str1: first string
 * @str2: second string
 * @i: counter for first string
 * @n: counter for second string
 * Return: 0 or 1
*/
int recurs(char *str1, char *str2, int i, int n)
{
	if (str2[n] == '\0' && str1[i] == '\0')
		return (1);
	if (str2[n] == '\0' && str2[n - 1] == '*')
		return (1);
	if (str1[i] != '\0' && str2[n] != '\0')
	{
		if (str2[n] != '*')
		{
			if (str1[i] == str2[n])
			{
				return (recurs(str1, str2, i + 1, n + 1));
			}
			else if (str1[i] != str2[n] && str2[n - 1] == '*')
				return (recurs(str1, str2, i + 1, n));
			else
				return (0);
		}
		else if (str2[n] == '*')
		{
			return (recurs(str1, str2, i, n + 1));
		}

	}
	return (0);
}

/**
 * wildcmp - compares the length of two strings
 * @s1: first string
 * @s2: second string
 * Return: 0 or 1
*/
int wildcmp(char *s1, char *s2)
{
	return (recurs(s1, s2, 0, 0));
}
