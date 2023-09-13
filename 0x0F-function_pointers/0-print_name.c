#include "function_pointers.h"
/**
 * print_name - a function that prints the name that the user provides
 * @name: name provided
 * @f: pointer to a function that prints name
 * Return: void
*/
void print_name(char *name, void (*f)(char *))
{
	if (f && name)
	{
		f(name);
	}
}
