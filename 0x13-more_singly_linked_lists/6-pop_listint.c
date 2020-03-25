#include "lists.h"

/**
 * pop_listint - remove one element list
 * @head: list linked
 * Return: nothing
 **/

int pop_listint(listint_t **head)
{
	int get_n = 0;
	listint_t *next_nd = NULL;

	if (*head == NULL)
	{
		return (0);
	}

	next_nd = (*head)->next;
	get_n = (*head)->n;
	free(*head);
	*head = next_nd;

	return (get_n);
}
