#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
* print_list - list
*
* @h: linked list
*
* Return: size of list
*/

size_t print_list(const list_t *h)
{
	size_t a = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		a++;
	}
	return (a);
}