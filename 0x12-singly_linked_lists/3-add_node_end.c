#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds a node to the end of the the list
 * @head: adress of pointer to head node
 * @str: string field of node
 *
 * Return: pointer to the new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	list_t *node = *head;

	if (!head || !new_node)
	{
		free(new_node);
		return (NULL);
	}

	if (str)
	{
		new_node->str = strdup(str);
		if (!new_node->str)
		{
			free(new_node);
			return (NULL);
		}
		new_node->len = _strlen(new_node->str);
	}
	else
	{
		new_node->str = NULL;
		new_node->len = 0;
	}

	new_node->next = NULL;

	if (node)
	{
		while (node->next)
			node = node->next;
		node->next = new_node;
	}
	else
	{
		*head = new_node;
	}
	return (new_node);
}
