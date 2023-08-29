#include "lists.h"

/**
 * sum_listint - returns thesum of all data
 * @head : pointer to the first node
 * Return: sum or 0
 */
int sum_listint(listint_t *head)
{
	int sum;
	listint_t *x;

	if (head == NULL)
		return (0);

	sum = 0;
	x = head;

	while (x != NULL)
	{
		sum += x->n;
		x = x->next;
	}
	return (sum);
}
