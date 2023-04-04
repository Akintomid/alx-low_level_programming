#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - function frees listint_t
 * @head: listint_t head
 */

void free_listint2(listint_t **head)
{
	listint_t *p_node, *n_node;

	if (!head)
	{
		return;
	}

	p_node = *head;

	while (p_node)
	{
		n_node = p_node->next;
		free(p_node);
		p_node = n_node;
	}
	*head = NULL;
}
