#include "lists.h"

/**
* free_listint - list
*
* @head: head list
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
