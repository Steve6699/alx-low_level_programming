#include "lists.h"

/**
* add_node_end - list
*
* @head: head of linked list
* @str: str
*
* Return: n element
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newenode, *s;
	size_t a;

	newenode = malloc(sizeof(list_t));
	if (newenode == NULL)
		return (NULL);

	for (a = 0; str[a] != '\0'; a++)
	;
	newenode->len = a;

	newenode->str = strdup(str);

	newenode->next = NULL;
	s = *head;
	if (*head == NULL)
		*head = newenode;
	else
	{
		while (s->next)
			s = s->next;
		s->next = newenode;
	}
	return (newenode);
}
