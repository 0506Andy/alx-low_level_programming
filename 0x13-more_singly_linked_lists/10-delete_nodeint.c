#include "lists.h"

/**
 * delete_nodeint_at_index -deletes node at index
 * @head :pointer to first node
 * @index: position
 * Return: 1 for success otherwise -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *x, *y;

	x = *head;
	y = *head;

	if (*head == NULL)
	{
		return (-1);
	}
	else if (index == 0)
	{
		*head = x->next;
		free(x);
		x = NULL;
	}
	else
	{
		while (index != 0)
		{
			y = x;
			x = x->next;
			index--;
		}

		y->next = x->next;
		free(x);
		x = NULL;
	}
	return (1);
}
