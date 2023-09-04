#include <stdio.h>
#include <stdlib.h>
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
			n = atoi(argv[i]);
			if (n != 0 || (n == 0 && *argv[i] == '0'))
				sum = sum + n;
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	if (i == argc)
		printf("%d\n", sum);
	return (0);
}
