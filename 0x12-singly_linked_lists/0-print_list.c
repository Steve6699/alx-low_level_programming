#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
* print_list - entry point
*
* @h: linked list
*
* Return: the numers of nodes
*/

size_t print_list(const list_t *h)
{
	size_t x = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		x++;
	}
	return (x);
}
