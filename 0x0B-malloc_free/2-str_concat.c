#include "main.h"
/**
 * str_concat - pints to strings
 * @s1: first string to be printed
 * @s2: second string to be printed
 * Return: pointer
*/
char *str_concat(char *s1, char *s2)
{
	int i, n, sum, m, b;
	char *ptr;

	if (s1 != NULL || s2 != NULL)
	{
		if (s1 != NULL)
		{
			for (i = 0; s1[i] != '\0'; i++)
			;
		}
		if (s2 != NULL)
		{
			for (n = 0; s2[n] != '\0'; n++)
			;
		}
		sum = n + i;
		ptr = (char *) malloc((sum + 1) * sizeof(char));

		if (ptr != NULL)
		{
			if (s1 != NULL)
				{
				for (m = 0; s1[m] != '\0'; m++)
					ptr[m] = s1[m];
				}
			if (s2 != NULL)
			{
				for (b = 0; s2[b] != '\0'; b++)
				{
					ptr[m] = s2[b];
					m++;
				}
				m++;
			}
			ptr[m] = '\0';
			return (ptr);
		}
	}
	return (NULL);
}
