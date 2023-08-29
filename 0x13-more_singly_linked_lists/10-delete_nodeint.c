#include "lists.h"

/**
 * delete_nodeint_at_index -deletes node at index
 * @head :pointer to first node
 * @index: position
 * Return: 1 for success otherwise -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *x, *y;

	if (*head == NULL || *head == NULL)
		return (-1);

	x = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		free(x);
		return (1);
	}

	for (i = 0; i < index; i++)
	{
		y = x;
		x = x->next;

		if (x == NULL)
			return (-1);
	}

	y->next = x->next;
	free(x);

	return (1);
}
