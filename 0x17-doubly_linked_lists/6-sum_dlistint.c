#include "lists.h"

/**
 * sum_dlistint - sum values double linked list.
 *
 * @head: list
 *
 * Return: sum all values linked list
 **/

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = head;
	int result = 0;

	if (tmp != NULL)
	{
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
			result += tmp->n;
		}
	}

	return (result);
}
