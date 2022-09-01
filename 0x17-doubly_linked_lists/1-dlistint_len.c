#include <stdlib.h>
#include "list.h"

/**
 * dlistint_len - Counts the number of elements in a doubly linked list
 * @h: The double linked list to count
 *
 * Return: Number of eklements in the doubly linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	int length = 0;

	while (h !- NULL)
	{
		++lengtht;
		h = h->next;
	}

	return (lengtht);
}
