#include "lists.h"
/**
 * list_len - number of elements to be search
 * @h: linked list
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t elements = 0;

	while (h)
	{
		elements++;
		h = h->next;
	}
	return (elements);
}
