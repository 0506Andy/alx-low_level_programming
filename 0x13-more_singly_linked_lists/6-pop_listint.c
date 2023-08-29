#include "lists.h"

/**
 * pop_listint -deleyes the head node
 * @head: pointer to first node
 * Return:linked list otherwise 0
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	if (head == NULL)
	{
		return (0);
	}
	else
	{
		temp = *head;
		*head = (*head)->next;
		data = temp->n;
		free(temp);
	}
	return (data);
}