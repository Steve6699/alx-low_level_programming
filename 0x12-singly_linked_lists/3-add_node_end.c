#include "lists.h"

/**
* add_node_end - entry point
*
* @head: head of list
* @str: string
*
* Return: new element
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newend, *d;
	size_t l;

	newend = malloc(sizeof(list_t));
	if (newend == NULL)
		return (NULL);

	for (l = 0; str[l] != '\0'; l++)
	;
	newend->len = l;

	newend->str = strdup(str);

	newend->next = NULL;
	d = *head;
	if (*head == NULL)
		*head = newend;
	else
	{
		while (d->next)
			d = d->next;
		d->next = newend;
	}
	return (newend);
}
