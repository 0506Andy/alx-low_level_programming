#include "lists.h"

/**
 * listint_len - return the number of elements in listint
 * @h:pointer to the list
 * Return: number of elements in listint
 */
size_t listint_len(const listint_t *h)
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
