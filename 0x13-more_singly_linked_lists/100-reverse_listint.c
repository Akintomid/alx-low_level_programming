#include <stdlib.h>
#include "lists.h"

/**
 * reverse_listint - function reverse listint_t
 * @head: pointer to first node
 * Return: pointer to first node of reversed listint_t
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *l_node = NULL, *p_node = *head, *next = NULL;

	while (p_node != NULL)
	{
		next = p_node->next;
		p_node->next = l_node;
		l_node = p_node;
		p_node = next;
	}

	*head = l_node;

	return (*head);
}
