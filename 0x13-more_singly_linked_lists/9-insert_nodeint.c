#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position.
 * @head: A pointer to a pointer to the head of the listint_t list.
 * @idx: The index at which to insert the new node (starting at 0).
 * @n: The integer value for the new node.
 *
 * Return: The address of the new node, or NULL if it fails.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
    listint_t *new_node = malloc(sizeof(listint_t));
    listint_t *current = *head;
    unsigned int i;

    if (!new_node) {
        return NULL;
    }

    new_node->n = n;

    if (idx == 0) {
        new_node->next = *head;
        *head = new_node;
        return new_node;
    }

    for (i = 0; i < idx - 1; i++) {
        if (current == NULL) {
            free(new_node);
            return NULL;
        }
        current = current->next;
    }

    if (current == NULL) {
        free(new_node);
        return NULL;
    }

    new_node->next = current->next;
    current->next = new_node;

    return new_node;
}
