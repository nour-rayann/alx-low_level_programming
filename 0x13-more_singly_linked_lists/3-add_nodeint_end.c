#include "lists.h"
#include <string.h>

/**
 * add_nodeint_end - adds a new node at the end of a list
 * @head: pointer to a pointer
 * @n: integer to be added
 * Return: the address of the new element, or NULL if it failed
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_end, *traverse;

	new_end = malloc(sizeof(listint_t));
	if (!new_end)
		return (NULL);
	new_end->n = n;
	new_end->next = NULL;
	if (!(*head))
		*head = new_end;
	else
	{
		traverse = *head;
		while (traverse->next)
			traverse = traverse->next;
		traverse->next = new_end;
	}
	return (traverse);
}
