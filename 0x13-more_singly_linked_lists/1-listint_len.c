#include "lists.h"

/**
* listint_len - list
*
* @h: pointer
*
* Return: elements
*/

size_t listint_len(const listint_t *h)
{
	size_t a;

	for (b = 0; h; b++)
	{
		h = h->next;
	}
	return (a);
}
