#include "lists.h"
#include <stdio.h>

/**
 * PrintBeforeMAin - function of attribute construct to be executed before main
 * Return: void
*/
void __attribute__((constructor)) printBeforeMain()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
