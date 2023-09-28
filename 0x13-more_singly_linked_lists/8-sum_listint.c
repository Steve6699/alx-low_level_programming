#include "lists.h"

/**
* sum_listint - entry point
*
* @head: head
*
* Return: sum of data
*/

int sum_listint(listint_t *head)
{
	int m = 0;

	while (head)
	{
		m += head->n;
		head = head->next;
	}
	return (m);
}
