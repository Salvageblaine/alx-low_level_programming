#include "lists.h"

/**
 * list_len - it returns the number of elements
 * @h: singly linked lists.
 *
 * Return: the number of elements in a list.
 */

size_t list_len(const list_t *h)
{
	size_t elements = 0;

	while  (h != NULL)
	{
		h = h->next;
		elements++;
	}
	return (elements);
}
