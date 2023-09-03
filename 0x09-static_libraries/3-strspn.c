#include "main.h"
/**
 * _strspn - returns the number of bytes in the initial segment
 * @s: buffer which is checked
 * @accept: buffer which we check for its content
 * Return: i
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	int n;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (s[i] == accept[n])
				break;
		}
		if (s[i] != accept[n])
			break;
	}
	return (i);
}
