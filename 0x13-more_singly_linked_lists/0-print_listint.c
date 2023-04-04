#include <stdio.h>
#include "lists.h"

/**
 * print_listint - Prints the element of listint_t
 * @h: pointer to the list
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t count;

	count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count = count + 1;
	}
	return (count);
}
