#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a list
 * @head: pointer to the head of the list
 * @index: index of the node to delete
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp;

	if (!head || !*head)
		return (-1);

	tmp = get_dnodeint_at_index(*head, index);
	if (!tmp)
		return (-1);

	if (tmp->prev)
		tmp->prev->next = tmp->next;
	else
		*head = tmp->next;

	if (tmp->next)
		tmp->next->prev = tmp->prev;
	free(tmp);

	return (1);
}
