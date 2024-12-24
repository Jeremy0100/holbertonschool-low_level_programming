#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at index of list.
 * @head: Pointer to the head of list.
 * @index: Position of node to delete.
 *
 * Return: 1 or -1
 **/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node_kill, *node_add = *head;

	if (!*head)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(node_add);
		if (*head)
			(*head)->prev = NULL;
		return (1);
	}

	for (; index > 0 && node_add; index--)
		node_add = node_add->next;

	if (index != 0)
		return (-1);

	node_kill = node_add;
	if (node_add->prev)
		node_add->prev->next = node_add->next;
	if (node_add->next)
		node_add->next->prev = node_add->prev;

	free(node_kill);
	return (1);
}
