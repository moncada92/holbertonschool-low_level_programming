#include "lists.h"

/**
 * get_dnodeint_at_index - add node head double linked list.
 *
 * @head: list
 * @index: index the node
 *
 * Return: this return the num of the elements in the list
 **/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp = head;
	unsigned int i = 0;

	while (i < index)
	{
		if (tmp->next == NULL)
			return (NULL);
		tmp = tmp->next;
		i++;
	}
		new->n = tmp->n;

	return (new);
}
