#include "lists.h"
#include <stdio.h>

/**
* list_len - entry point
*
* @h: linked list
*
* Return: numbers of elements in LSs
*/

size_t list_len(const list_t *h)
{
	size_t x;

	for (x = 0; h != NULL; x++)
	{
		h = h->next;
	}
	return (x);
}
