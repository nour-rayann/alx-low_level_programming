#include <stdio.h>
/**
 * main - prints arguments
 * @argc: number of arguments
 * @argv: array of pointers to arguments
 * Return: 0
*/
int main(int argc, char *argv[])
{
	for (; argc > 0; argc--)
	{
		printf("%s\n", *argv);
		argv++;
	}
	return (0);
}
