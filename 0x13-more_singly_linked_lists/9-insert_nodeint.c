#include "lists.h"

/**
 * insert_nodeint_at_index - insert into node element list
 * @head: list linked
 * @idx: the index list
 * @n: value int
 * Return: list new
 **/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *add_nd, *aux;
	unsigned int i;

	add_nd = malloc(sizeof(listint_t));

	if (add_nd == NULL)
	{
		free(add_nd);
		return (NULL);
	}
	add_nd->n = n;

	aux = (*head);

	for (i = 0; i < idx; i++)
	{
		if (i + 1 == idx)
		{
			add_nd->next = aux->next;
			aux->next = add_nd;
			return (add_nd);
		}
		aux = aux->next;
	}

	return (NULL);
}
