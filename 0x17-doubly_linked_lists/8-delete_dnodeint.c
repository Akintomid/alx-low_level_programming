#include "lists.h"

/**
 * delete_dnodeint_at_index - Delete node at index of a `dlistint_t`ilinked list
 * @head: pointer to head of linked list
 * @index: index position
 * Return: 1 if succeeded, -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp, *next, *prev;
	unsigned int a;

	if (*head == NULL)
		return (-1);

	for (tmp = *head, a = 0, prev = NULL; tmp && a < index; a++)
	{
		prev = tmp;
		tmp = tmp->next;
	}

	if (tmp == NULL)
		return (-1);

	next = tmp->next;
	if (prev == NULL)
	{
		free(tmp);
		if (next != NULL)
		{
			next->prev = NULL;
			*head = next;
		}
		else
			*head = NULL;
	}
	else if (next == NULL)
	{
		prev->next = NULL;
		free(tmp);
	}
	else
	{
		prev->next = next;
		next->prev = prev;
		free(tmp);
	}

	return (1);
}
