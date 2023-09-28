#include "lists.h"
#include <stdlib.h>

/**
* free_list - list
*
* @head: head of linked  list
*
* Return: void
*/

void free_list(list_t *head)
{

	if (head == NULL)
		return;
	free_list(head->next);
	free(head);
}
