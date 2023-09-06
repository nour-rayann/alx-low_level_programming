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

	for (n = 0; str[n] != '\0'; n++)
	;

	ptr = (char *) malloc(n * sizeof(char));

	if (str != NULL)
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			ptr[i] = str[i];
		}
		return (ptr);
	}
	else
		return (NULL);
}
