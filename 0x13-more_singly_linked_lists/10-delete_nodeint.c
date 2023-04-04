#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - function deletes node at specified index
 * @head: pointer to first node in listint_t
 * @index: element index
 * Return: 1 upon success, -1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *l_node, *p_node;
	unsigned int t;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		p_node = *head;
		*head = (*head)->next;
		free(p_node);
		return (1);
	}

	l_node = *head;
	p_node = (*head)->next;

	for (t = 1; t < index; t++)
	{
		if (p_node == NULL)
		{
			return (-1);
		}
		l_node = p_node;
		p_node = p_node->next;
	}

	if (p_node == NULL)
	{
		return (-1);
	}
	l_node->next = p_node->next;
	free(p_node);

	return (1);
}
