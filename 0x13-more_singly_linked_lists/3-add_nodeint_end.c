#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - function adds new node at the end of listint_t
 * @head: a pointer to a pointer pointing to the head of listint_t
 * @n: integer to add to listint_t as new element
 * Return: newly added node address
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *n_node, *l_node;

	if (!head)
	{
		return (NULL);
	}

	n_node = malloc(sizeof(listint_t));
	if (!n_node)
	{
		return (NULL);
	}

	n_node->n = n;
	n_node->next = NULL;

	if (!head)
	{
		*head = n_node;
	}
	else
	{
		l_node = *head;
	}
	while (l_node->next)
	{
		l_node = l_node->next;
	}
	l_node->next = n_node;

	return (n_node);
}
