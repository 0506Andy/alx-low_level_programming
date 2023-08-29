#include "lists.h"

/**
 * add_nodeint - new node at the begginning
 * @head :pointer to first node
 * @n: data
 * Return:Address to new element otherwise NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = NULL;

	node = (listint_t *)malloc(sizeof(listint_t));

	node->n = n;
	node->next = *head;
	*head  = node;

	return (node);
}
