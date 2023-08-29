#include "lists.h"

/**
 * insert_nodeint_at_index - inserts node at given index
 * @idx : position
 * @head : pointer to first node
 * @n :data
 * Return: NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr, *ptr2;

	if (head == NULL)
		return (NULL);

	ptr = *head;
	ptr2 = malloc(sizeof(listint_t));
	if (ptr2 == NULL)
		return (NULL);

	ptr2->n = n;
	ptr2->next = NULL;

	idx--;
	while (idx != 1)
	{
		ptr = ptr->next;
		idx--;
	}
	ptr2->next = ptr->next;
	ptr->next = ptr2;

	return (ptr);
}
