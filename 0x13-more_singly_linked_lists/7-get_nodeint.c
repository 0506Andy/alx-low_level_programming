#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node in the listint_t
 * @head: pointer to the first node
 * @index:index of the node
 * Return:NULL or node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count;
	listint_t *current;

	count = 0;
	current = head;

	while (current != NULL)
	{
		if (count == index)
			return (current);

		current = current->next;
		count++;
	}
	return (NULL);
}
