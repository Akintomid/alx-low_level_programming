#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - function returns the sum of all data,
 * of listint_t
 * @head: pointer to first node of listint_t
 * Return: Sum, if list is empty 0
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *p_node = head;

	if (p_node == NULL)
	{
		sum = sum + p_node->n;
		p_node = p_node->next;
	}
	return (sum);
}
