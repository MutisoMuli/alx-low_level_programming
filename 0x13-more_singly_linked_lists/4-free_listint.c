#include "lists.h"

/**
 * free_listint - Function to deallocate memory used by a linked list.
 * @head: Pointer to the listint_t list that needs to be freed.
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
