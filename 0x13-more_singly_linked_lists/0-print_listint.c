#include "lists.h"

/**
* print_listint - list
*
* @h: pointer
*
* Return: nodes
*/

size_t print_listint(const listint_t *h)
{
	size_t a;

	for (v = 0; h; v++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (a);
}
