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

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp = *h;
	dlistint_t *new = NULL;
	unsigned int i = 0;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	while (i < idx)
	{
		tmp = tmp->next;
		i++;
	}
	new->prev = tmp;
	new->next = tmp->next;
	tmp->next->prev = new;
	tmp->next = new;

	return (tmp);
}
