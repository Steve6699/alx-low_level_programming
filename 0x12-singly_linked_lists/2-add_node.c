#include "lists.h"
#include <stdio.h>

/**
* add_node - entry point
*
* @head: head of the linked list
* @str: string
*
* Return: new element
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_nodes;
	size_t l;

	new_nodes = malloc(sizeof(list_t));

	if (new_nodes == NULL)
		return (NULL);

	for (l = 0; str[l]; l++)
	;
	new_nodes->len = l;
	new_nodes->str = strdup(str);
	new_nodes->next = *head;
	*head = new_nodes;
	return (new_nodes);
}
