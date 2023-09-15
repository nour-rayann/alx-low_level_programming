#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct callfun - definition for callfun based on type
 * @c: character
 * @fun: pointer to a function
*/
typedef struct callfun
{
	char c;
	void (*fun)(va_list);
} callfun;

#endif
