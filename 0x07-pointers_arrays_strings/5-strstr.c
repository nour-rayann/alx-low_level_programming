#include "main.h"
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
		while (*needle != '\0')
		{
			if (*haystack == *needle)
				return (haystack);
		}
		if (*haystack == *needle)
		{
			haystack++;
			needle++;
		}
		else
			haystack++;
	}
	return (NULL);
}
