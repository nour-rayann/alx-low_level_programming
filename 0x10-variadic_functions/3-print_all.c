#include "variadic_functions.h"
#include <stdio.h>
/**
 * num - prints integers
 * @va: list of arguments
 * Return: void
*/
void num(va_list va)
{
	printf("%d", va_arg(va, int));
}

/**
 * letter - prints characters
 * @va: list of arguments
 * Return: void
*/
void letter(va_list va)
{
	printf("%c", va_arg(va, int));
}

/**
 * flot - prints float numbers
 * @va: list of arguments
 * Return: void
*/
void flot(va_list va)
{
	printf("%f", va_arg(va, double));
}

/**
 * str - prints string
 * @va: list of arguments
 * Return: void
*/
void str(va_list va)
{
	char *strr = va_arg(va, char *);

	strr != NULL ? printf("%s", strr) : printf("(nil)");
}

/**
 * print_all - a function that prints anything
 * @format: contains the list of types of arguments
 * Return: void
*/
void print_all(const char * const format, ...)
{
	callfun arr[] = {
		{ 'i', num },
		{ 'c', letter },
		{ 'f', flot },
		{ 's', str },
		{ '\0', NULL }
	};

	va_list va;
	int i = 0, m;

	va_start(va, format);

	while (format && format[i])
	{
		m = 0;
		while (m < 4)
		{
			if (format[i] == arr[m].c)
			{
				arr[m].fun(va);
				if (format[i + 1])
					printf(", ");
				break;
			}
			m++;
		}
		i++;
	}
	va_end(va);
	printf("\n");
}
