#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to a pointer
 * Return: the head node’s data
*/
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n = 0;

	if (*head)
	{
		n = (*head)->n;
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	return (n);
}
