#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees a listint_t list
 * @head: pointer to a pointer
 * Return: void
*/
void free_listint2(listint_t **head)
{
	listint_t *temporary;

	while (*head)
	{
		temporary = (*head)->next;
		free(*head);
		*head = temporary;
	}
	*head = NULL;
}
