#include "lists.h"

/**
 * sum_listint - sum up all the data in a linked list
 * @head: head of the list
 *
 * Return: sum of the number
 */
int sum_listint(listint_t *head)
{
	size_t total = 0;

	while (head != NULL)
	{
		total += head->n;
		head = head->next;
	}
	return (total);
}
