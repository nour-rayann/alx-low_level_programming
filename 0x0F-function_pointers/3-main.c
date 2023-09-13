#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - the main function to call operations
 * @argc: number of arguments
 * @argv: arguments
 * Return: int
*/
int main(int argc, char *argv[])
{
	int n, m, res;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	n = atoi(argv[1]);
	m = atoi(argv[3]);
	res = (*get_op_func(argv[2]))(n, m);
	printf("%d\n", res);
	return (0);
}
