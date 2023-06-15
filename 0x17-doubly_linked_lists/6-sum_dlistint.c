#include "lists.h"

/**
 * sum_dlistint - get the sum of all the data `n` of a `dlistint_t` linked list
 * @head: head of doubly linked list
 * Return: summation of all `n` or 0 if linked list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int summation;
	dlistint_t *tmp;

	tmp = head;
	for (summation = 0; tmp; tmp = tmp->next)
		summation += tmp->n;

	return (summation);
}
