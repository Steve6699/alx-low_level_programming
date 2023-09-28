#include "lists.h"

/**
* listint_len - entry point
*
* @h: list
*
* Return: number of elements
*/

size_t listint_len(const listint_t *h)
{
	size_t b;

	for (b = 0; h; b++)
	{
		h = h->next;
	}
	return (b);
}
