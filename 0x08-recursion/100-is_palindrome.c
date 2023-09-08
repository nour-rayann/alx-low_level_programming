#include "main.h"
#include <string.h>
/**
 * recur - a helper function
 * @str: string
 * @i: pointer to beginning of string
 * @len: pointer to end of string
 * Return: 0 or 1
*/
int recur(char *str, int i, int len)
{
	if (len > i)
	{
		if (str[i] != str[len])
			return (0);
		else if (str[i] == str[len])
		return (recur(str, i + 1, len - 1));
	}
	else if (i >= len)
		return (1);
	return (0);
}

/**
 * is_palindrome - checks if the string is palindrome
 * @s: string to be checked
 * Return: 1 or 0
*/
int is_palindrome(char *s)
{
	int length = strlen(s);

	return (recur(s, 0, length - 1));
}
