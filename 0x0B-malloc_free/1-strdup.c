#include "main.h"
/**
 * _strdup - duplicated a string
 * @str: string to be duplicated
 * Return: pointer
*/
char *_strdup(char *str)
{
	int i, n;
	char *ptr;

	if (str == NULL)
		return (NULL);

	else if (str != NULL)
	{
		for (n = 0; str[n] != '\0'; n++)
		;

		ptr = (char *) malloc((n + 1) * sizeof(char));
		if (ptr != NULL)
		{
			for (i = 0; str[i] != '\0'; i++)
			{
				ptr[i] = str[i];
			}
			ptr[i] = '\0';
			return (ptr);
		}
	}
	return (NULL);
}
