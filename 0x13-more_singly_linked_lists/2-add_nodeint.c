#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - function adds a new node at the beginning,
 * of listint_t
 * @head: a pointer to the pointer of the first node
 * @n: integer to initialize
 * Return: the address of the added item if success, NULL if failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *n_node;

	n_node = malloc(sizeof(listint_t));

	while (n_node == NULL)
	{
		return (NULL);
	}

	n_node->n = n;
	n_node->next = *head;
	*head = n_node;

	return (n_node);
}
