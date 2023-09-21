#include "lists.h"
#include <string.h>

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to a pointer
 * @str: string
 * Return: the address of the new element, or NULL if it failed
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int str_len;

	for (str_len = 0; str[str_len] != '\0'; str_len++)
	;
	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = str_len;
	new_node->next = *head;
	*head = new_node;
	return (*head);
}
