#include "lists.h"

/**
 * print_listint - Function to display all elements in a linked list.
 * @h: Pointer to the first node of the list (of type listint_t).
 *
 * Return: The total count of nodes in the linked list.
 */
size_t print_listint(const listint_t *h)
{
	size_t num_nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num_nodes++;
		h = h->next;
	}
	return (num_nodes);
}

