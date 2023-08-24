#include "lists.h"

/**
 * list_len - returns the number of elements in the list_t list
 * @h: pointer to lists_t list
 * Return:number of elements
 */
size_t list_len(const list_t *h)
{
	size_t count;

	count = 0;

	while (h != NULL)
	{
		count++;

		h = h->next;
	}
	return (count);
}
