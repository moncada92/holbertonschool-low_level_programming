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

	while (tmp != NULL)
	{
      		result += tmp->n;
		tmp = tmp->next;
	}

	return (result);
}
