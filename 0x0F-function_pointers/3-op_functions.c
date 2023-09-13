#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - adds two integers
 * @a: first integer
 * @b: second integer
 * Return: int
*/
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts two integers
 * @a: first integer
 * @b: second integer
 * Return: int
*/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplicates two integers
 * @a: first integer
 * @b: second integer
 * Return: int
*/
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two integers
 * @a: first integer
 * @b: second integer
 * Return: int
*/
int op_div(int a, int b)
{
	if (b != 0)
		return (a / b);
	printf("Error\n");
	exit(100);
}

/**
 * op_mod - returns the remaining after dividing two integers
 * @a: first integer
 * @b: second integer
 * Return: int
*/
int op_mod(int a, int b)
{
	if (b != 0)
		return (a % b);
	printf("Error\n");
	exit(100);
}
