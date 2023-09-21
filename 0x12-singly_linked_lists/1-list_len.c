#include "lists.h"

/**
 * list_len -  returns the number of elements in a linked list_t list
 * @h: pointer to list_t list
 * Return: number of elements
*/
size_t list_len(const list_t *h)
{
	size_t num_elems = 0;

	while (h)
	{
		num_elems++;
		h = h->next;
	}
	return (num_elems);
}
