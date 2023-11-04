#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: head of a list.
 *
 * Return: no return.
 */
void free_listint2(listint_t **head)
{
	listint_t *tempo;
	listint_t *current;

	if (head != NULL)
	{
		current = *head;
		while ((tempo = current) != NULL)
		{
			current = current->next;
			free(tempo);
		}
		*head = NULL;
	}
}
