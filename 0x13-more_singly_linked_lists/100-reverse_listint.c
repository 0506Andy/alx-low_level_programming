#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: pointer to listint_t
 * Return: pointer to the first node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *x, *y;

	x = NULL;
	y = *head;

	while (y != NULL)
	{
		*head = y->next;
		y->next = x;
		x = y;
		y = *head;
	}
	*head = x;
	return (*head);
}
