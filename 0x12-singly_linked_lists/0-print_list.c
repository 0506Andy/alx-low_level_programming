#include "lists.h"

/**
 * print_list - prints list_t list
 * @h:pointer to the list_t list
 * Return:number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count;

	count = 0;

	for (; h != NULL; h = h->next)
	{
		if (h->str == NULL)
			printf("[%d] (nil)\n", h->len);
		else
			printf("[%d] %s\n", h->len, h->str);

		count++;
	}
	return (count);
}
