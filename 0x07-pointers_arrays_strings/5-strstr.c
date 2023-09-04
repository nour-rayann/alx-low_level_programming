#include "main.h"
#include <stdio.h>
/**
 * _strstr - finds a substring in a string
 * @haystack: string
 * @needle: substring to be found
 * Return: pointer
*/
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *start = haystack;
		char *sub = needle;

		while (*sub != '\0' && *haystack == *sub)
		{
			haystack++;
			sub++;
		}

		if (*sub == '\0')
		{
			return (start);
		}

		haystack = start + 1;
	}

	return (NULL);
}
