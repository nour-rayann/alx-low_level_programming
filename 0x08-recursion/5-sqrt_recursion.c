#include"main.h"
int func(int n, int answer);
/**
 * _sqrt_recursion - prints natural square root
 * @n: number to compute its square root
 * Return: int
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (func(n, 1));
}
/**
 * func - a helper function
 * @n: to calculate its square root
 * @answer: the square root to be printed
 * Return: answer
*/
int func(int n, int answer)
{
	if (answer * answer == n)
		return (answer);
	else if (answer * answer < n)
		return (func(n, answer + 1));
	else
		return (-1);
}
