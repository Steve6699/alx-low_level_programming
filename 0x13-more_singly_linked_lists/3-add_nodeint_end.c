#include "lists.h"

/**
* add_nodeint_end - list
*
* @head: head list
* @n: input n
*
* Return: element
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *x, *a;

	x = malloc(sizeof(listint_t));

	if (x == NULL)
		return (NULL);

	x->n = n;
	x->next = NULL;

	a = *head;
	if (*head == NULL)
		*head = x;
	else
	{
		while (a->next)
			a = a->next;
		a->next = x;
	}
	return (x);
}
