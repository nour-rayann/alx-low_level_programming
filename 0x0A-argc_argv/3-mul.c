#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 * @argc: count of arguments
 * @argv: array of pointers to arguments
 * Return: 0 or 1
*/
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[argc - 1]) * atoi(argv[argc - 2]));
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
