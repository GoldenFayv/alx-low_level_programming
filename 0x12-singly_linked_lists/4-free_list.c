#include "lists.h"

/**
 * free_list - frees a list
 * @head: head of the linked list.
 * Return: no return.
 */

void free_list(list_t *head)
{
	list_t *current_list;

	while ((current_list = head) != NULL)
	{
		head = head->next;
		free(current_list->str);
		free(current_list);
	}
}
