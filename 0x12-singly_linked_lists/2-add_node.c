#include "lists.h"
#include <stdio.h>

/**
* add_node - list
*
* @head: head linked list
* @str: str
*
* Return: n element
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	size_t a;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	for (a = 0; str[a]; a++)
	;
	new_node->len = a;
	new_node->str = strdup(str);
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
