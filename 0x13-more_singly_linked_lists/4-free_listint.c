#include "lists.h"

/**
* free_listint - entry point
*
* @head: head
*
* Return: void
*/

void free_listint(listint_t *head)
{
	if (head == NULL)
		return;

	free_listint(head->next);
	free(head);
}
