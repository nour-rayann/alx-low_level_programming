#include "main.h"
/**
 * string_nconcat - prints string s1 and n bytes of string s2
 * @s1: first string
 * @s2: second string
 * @n: number of bytes
 * Return: pointer
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i, m, count, r;

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (m = 0; s2[m] != '\0'; m++)
		;
	if (s1 == NULL)
	{
		s1 = "";
		i = 1;
	}
	if (s1 == NULL)
	{
		s2 = "";
	}
	ptr = malloc((n + i + 1) * sizeof(char));

	if (ptr != NULL)
	{
		for (count = 0; s1[count] != '\0'; count++)
		{
			ptr[count] = s1[count];
		}
		for (r = 0; r < n && s2[r] != '\0'; r++)
		{
			ptr[count] = s2[r];
			count++;
		}
		count++;
		ptr[count] = '\0';
		return (ptr);
	}
	return (NULL);
}
