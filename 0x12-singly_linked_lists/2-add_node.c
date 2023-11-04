#include "lists.h"
/**
 * add_node - adds a new node at the beginning
 * of a list_t list.
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: address of the head.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_list;
	size_t num_of_char;

	new_list = malloc(sizeof(list_t));
	if (new_list == NULL)
		return (NULL);

	new_list->str = strdup(str);

	for (num_of_char = 0; str[num_of_char]; num_of_char++)
		;

	new_list->len = num_of_char;
	new_list->next = *head;
	*head = new_list;

	return (*head);
}
