#include "lists.h"

/**
 * add_dnodeint_end - add node head double linked list.
 *
 * @head: list
 * @n: valie the node
 *
 * Return: this return the num of the elements in the list
 **/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;
	dlistint_t *tmp = *head;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	if (tmp == NULL)
	{
		new->n = n;
		new->next = NULL;
		new->prev = NULL;
		tmp = new;
		*head = new;

	}
	else
	{
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		new->prev = tmp;
		tmp->next = new;
		new->next = NULL;
		new->n = n;
	}

	return (new);
}
