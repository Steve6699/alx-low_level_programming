#include "lists.h"

/**
* add_nodeint - entry point
*
* @head: head list
* @n: input
*
* Return: new element
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *h;

	h = malloc(sizeof(listint_t));

	if (h == NULL)
		return (NULL);

	h->n = n;
	h->next = *head;
	*head = h;
	return (h);
}
