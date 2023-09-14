#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_strings - prints gives strings separated by a separator
 * @separator: between strings
 * @n: number of strings to be printed
 * Return: void
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	if (n != 0)
	{
		va_list str;
		char *s;

		va_start(str, n);
		for (i = 0; i < n - 1; i++)
		{
			s = va_arg(str, char*);
			if (s != NULL && separator != NULL)
				printf("%s%s", s, separator);
			else if (s == NULL && separator != NULL)
				printf("nil%s", separator);
			else
				printf("nil");
		}
		s = va_arg(str, char*);
		if (s != NULL)
			printf("%s\n", s);
		else
			printf("nil\n");
		va_end(str);
	}
	else
		printf("\n");
}
