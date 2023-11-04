#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * of a linked list.
 * @head: head of a list.
 * @index: index of the list where the node is
 * deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *previous_node;
	listint_t *next_node;

	previous_node = *head;

	if (index != 0)
	{
		for (i = 0; i < index - 1 && previous_node != NULL; i++)
		{
			previous_node = previous_node->next;
		}
	}

	if (previous_node == NULL || (previous_node->next == NULL && index != 0))
	{
		return (-1);
	}

	next_node = previous_node->next;

	if (index != 0)
	{
		previous_node->next = next_node->next;
		free(next_node);
	}
	else
	{
		free(previous_node);
		*head = next_node;
	}

	return (1);
}
