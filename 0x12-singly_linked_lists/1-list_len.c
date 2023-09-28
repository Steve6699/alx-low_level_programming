#include "lists.h"
#include <stdio.h>

/**
* list_len - list
*
* @h: linked list
*
* Return: size of list
*/

size_t list_len(const list_t *h)
{
	size_t a;

	for (a = 0; h != NULL; a++)
	{
		h = h->next;
	}
	return (a);
}
