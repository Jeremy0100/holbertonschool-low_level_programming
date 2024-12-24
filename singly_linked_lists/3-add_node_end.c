#include "lists.h"
/**
 * add_node_end - add node to end of a linked list
 * @head: pointer to list_t pointer
 * @str: string
 * Return: node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *other_node;
	list_t *end_node;

	while (!(other_node = malloc(sizeof(list_t))) || !head || !str)
	{
		free(other_node);
		return (NULL);
	}

	other_node->str = strdup(str);
	if (!other_node->str)
	{
		free(other_node);
		return (NULL);
	}

	other_node->len = strlen(str);
	other_node->next = NULL;

	if (*head != NULL)
	{
		end_node = *head;
		while (end_node->next)
		{
			end_node = end_node->next;
		}
		end_node->next = other_node;
	}
	else
	{
		*head = other_node;
	}

	return (other_node);
}
