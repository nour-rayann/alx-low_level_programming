#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/**
 * isInteger - checks if the given string is integer
 * @str: pointer
 * Return: bool
 */

bool isInteger(const char *str)
{
	char *endptr;

	strtol(str, &endptr, 10);
	return (*endptr == '\0' && endptr != str);
}

/**
 * main - adds numbers
 * @argc: count of arguments
 * @argv: array of pointers
 * Return: 0 or 1
*/

int main(int argc, char *argv[])
{
	int i, n;
	int sum = 0;

	if (argc == 1)
		printf("0\n");
	else if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (isInteger(argv[i]))
			{
				n = atoi(argv[i]);
				sum = sum + n;
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	printf("%d\n", sum);
	return (0);
}
