#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Releases the memory occupied by a linked list.
 * @head: A pointer to the list_t list that needs to be deallocated.
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
