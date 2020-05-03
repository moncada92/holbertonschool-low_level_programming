#include "lists.h"

/**
 * insert_dnodeint_at_index - insert node in n position double linked list.
 *
 * @h: list
 * @idx: index the node
 * @n: value node
 *
 * Return: return node  in the list
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
		new->next = NULL;
		new->prev = NULL;
		new->n = n;
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
