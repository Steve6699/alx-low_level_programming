#include "lists.h"

/**
* add_nodeint_end - entry oint
*
* @head: head
* @n: input
*
* Return: new element
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *f, *m;

	f = malloc(sizeof(listint_t));

	if (f == NULL)
		return (NULL);

	f->n = n;
	f->next = NULL;

	m = *head;
	if (*head == NULL)
		*head = f;
	else
	{
		while (m->next)
			m = m->next;
		m->next = f;
	}
	return (f);
}
