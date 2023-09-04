#include <stdio.h>
/**
 * main - a program that prints its name
 * @argc: count of arguments
 * @argv: array of pointers to the arguments
 * Return: 0
*/
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
