#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers - prints numbers separated by separator
 * @separator: between numbers
 * @n: number of numbers to be printed
 * Return: void
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, m;

	if (n != 0)
	{
		va_list prntr;

		va_start(prntr, n);
		for (i = 0; i < n - 1; i++)
		{
			m = va_arg(prntr, int);
			if (separator != NULL)
			{
				printf("%d%s", m, separator);
			}
			else
				printf("%d", m);
		}
		m = va_arg(prntr, int);
		printf("%d\n", m);
		va_end(prntr);
	}
}
