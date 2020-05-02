#include "lists.h"

/**
 * free_dlistint - free a double linked list.
 * @head: input of the list
 * Return: No return.
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = head;

	while (head != NULL)
	{
		head = head->next;
		free(tmp);
		tmp = head;
	}
	free(head);
}
