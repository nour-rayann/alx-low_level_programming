#include "variadic_functions.h"
/**
 * sum_them_all - a function that prints the sum of integers
 * @n: number of arguments
 * Return: sum
*/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0, i, num;

	if (n != 0)
	{
		va_list va;

		va_start(va, n);
		for (i = 0; i < n; i++)
		{
			num = va_arg(va, int);
			sum = sum + num;
		}
		return (sum);
	}
	return (0);
}
