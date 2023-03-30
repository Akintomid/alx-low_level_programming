#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: a pointer to the head of the list
 * @str: the strimg to be stored in the new node
 * Return: the address of the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	size_t len = 0;

	while (str && str[len])
	{
		len++;
	}
	new_node = malloc(sizeof(list_t));
	if (!new_node)
	{
		return (NULL);
	}
	new_node->str = strdup(str);
	if (str && !new_node->str)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = len;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
