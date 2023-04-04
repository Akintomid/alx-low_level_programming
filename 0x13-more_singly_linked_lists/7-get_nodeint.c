#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - function returns the nth node of listint_t
 * @head: pointer to first node of listint_t
 * @index: the index of the node
 * Return: the the index element if it exists, if not NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *p_node = head;
	unsigned int element = 0;

	while (p_node != NULL && element < index)
	{
		p_node = p_node->next;
		element++;
	}
	if (element == index)
	{
		return (p_node);
	}
	else
		return (NULL);
}
