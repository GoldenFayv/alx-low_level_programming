#include "lists.h"

/**
 * add_node_end - adds a new_list_list node at the end
 * of a list_t list.
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: address of the head.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_list, *temp;
	size_t num_char;

	new_list = malloc(sizeof(list_t));
	if (new_list == NULL)
		return (NULL);

	new_list->str = strdup(str);

	for (num_char = 0; str[num_char]; num_char++)
		;

	new_list->len = num_char;
	new_list->next = NULL;
	temp = *head;

	if (temp == NULL)
	{
		*head = new_list;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new_list;
	}

	return (*head);
}
