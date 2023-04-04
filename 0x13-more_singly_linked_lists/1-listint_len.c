#include <stdio.h>
#include "lists.h"

/**
 * listint_len - function that prints the number of elements in,
 * listint_t
 * @h: a pointer that points to listint_t
 * Return: number of elements in listint_t
 */

size_t listint_len(const listint_t *h)
{
	size_t elem;

	elem = 0;

	while (h != NULL)
	{
		h = h->next;
		elem = elem + 1;
	}
	return (elem);
}
