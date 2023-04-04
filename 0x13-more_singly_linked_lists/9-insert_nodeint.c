#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - function inserts a new node,
 * at a given position
 * @head: pointer to the first node
 * @idx: index
 * @n: new node data
 * Return: new node address upon success, els NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *n_node = malloc(sizeof(listint_t));
	listint_t *l_node = NULL;
	listint_t *p_node = *head;
	unsigned int t = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	if (n_node == NULL)
	{
		return (NULL);
	}

	n_node->n = n;

	if (idx == 0)
	{
		n_node->next = *head;
		*head = n_node;
		return (n_node);
	}
	while (p_node != NULL && t < idx)
	{
		l_node = p_node;
		p_node = p_node->next;
		t = t + 1;
	}
	if (t < idx)
	{
		free(n_node);
		return (NULL);
	}

	n_node->next = p_node;
	l_node->next = n_node;

	return (n_node);
}
