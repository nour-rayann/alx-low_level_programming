#include "lists.h"
#include <stdio.h>

/**
 * _printBeforeMain - function of attribute construct executed before main
 * Return: void
*/
void __attribute__((constructor)) printBeforeMain()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
