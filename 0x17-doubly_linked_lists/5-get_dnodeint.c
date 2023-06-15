#include "lists.h"

/**
 * get_dnodeint_at_index - get the nth node of a `dlistint_t` doubly linked list
 * @head: pointer to linked list
 * @index: node index
 * Return: node at index given or NULL if node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int a;

	tmp = head;
	for (a = 0; tmp && a < index; tmp = tmp->next, a++)
		;

	return (tmp);
}
