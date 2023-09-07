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
		i = 0;
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
	unsigned int x, y, counter, r;
	char *ptr;

	if (s1 != NULL)
		x = _strlen(s1);
	if (s2 != NULL)
		y = _strlen(s2);
	ptr = malloc((x + y + 1) * sizeof(char));

	if (ptr != NULL)
	{
		if (s1 != NULL)
		{
			for (counter = 0; s1[counter] != '\0'; counter++)
			{
				ptr[counter] = s1[counter];
			}
		}
		if (s2 != NULL)
		{
			if (s1 == NULL)
				counter = 0;
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
	else if (s1 == NULL && s2 == NULL)
	{
		ptr = "";
		return (ptr);
	}
	return (NULL);
}
