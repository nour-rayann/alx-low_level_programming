#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to the list_t list
 * Return: the number of nodes
*/
size_t print_list(const list_t *h)
{
	size_t size = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		size++;
		h = h->next;
	}
	return (size);
}
