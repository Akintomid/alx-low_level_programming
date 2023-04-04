#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - function deletes the head node of listint_t
 * @head: a pointer to the first node in listint_t
 * Return: the head node data
 */

int pop_listint(listint_t **head)
{
	int data = (*head)->n;
	listint_t *tmp = *head;

	if (*head == NULL)
	{
		return (0);
	}

	*head = (*head)->next;
	free(tmp);
	return (data);
}
