#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - function frees a listint_t
 * @head: head of listint_t
 */

void free_listint(listint_t *head)
{
	listint_t *present_node, *n_node;

	present_node = head;

	while (present_node)
	{
		n_node = present_node->next;
		free(present_node);
		present_node = n_node;
	}
}
