#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	listint_t *head;

	head = NULL;
	print_listint(head);
	free_listint2(&head);
	printf("%p\n", (void *)head);
	return (0);
}
