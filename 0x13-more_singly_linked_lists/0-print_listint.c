#include "lists.h"

/**
* print_listint - entry point
*
* @h: list
*
* Return: numbers of nodes
*/

size_t print_listint(const listint_t *h)
{
	size_t v;

	for (v = 0; h; v++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (v);
}
