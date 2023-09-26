#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node
 * @head: list
 * @index: number of node to be returned
 * Return: node
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node = head;
	unsigned int count = 0;

	while (node)
	{
		if (count == index)
			return (node);
		node = node->next;
		count++;
	}
	return (NULL);
}
