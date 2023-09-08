#include "main.h"
/**
 * _strlen - length of string
 * @s: string to calculate its length
 * Return: int
*/

int _strlen(char *s)
{
	unsigned int i;

	if (s != NULL)
	{
		for (i = 0; s[i] != '\0'; i++)
		;
	}
	else
		i = 1;
	return (i);
}

/**
 * string_nconcat - prints string s1 and n bytes of string s2
 * @s1: first string
 * @s2: second string
 * @n: number of bytes
 * Return: pointer
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int x = 0, y = 0, counter = 0, r;
	char *ptr;

	x = _strlen(s1);
	y = _strlen(s2);
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n >= y)
		n = y;
	ptr = malloc((x + n + 1) * sizeof(char));

	if (ptr != NULL)
	{
		if (s1 != NULL)
		{
			for (; s1[counter] != '\0'; counter++)
			{
				ptr[counter] = s1[counter];
			}
		}
		if (s2 != NULL)
		{
			for (r = 0; r < n && s2[r] != '\0'; r++)
			{
				ptr[counter] = s2[r];
				counter++;
			}
		}
		counter++;
		ptr[counter] = '\0';
		return (ptr);
	}
	return (NULL);
}
