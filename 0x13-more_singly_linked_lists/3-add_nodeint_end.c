#include "lists.h"

/**
 * add_nodeint_end - adds new noid at the end od listint_t
 * @head: pointer to first node
 * @n: data
 * Return: Adress to new element or void
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr, *temp;

	ptr = *head;

	if (head == NULL)
		return (NULL);

	temp = (listint_t *)malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->next = NULL;

	if (ptr == NULL)
	{
		*head = temp;
	}
	else
	{
		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		ptr->next = temp;
	}
	return (temp);
}
