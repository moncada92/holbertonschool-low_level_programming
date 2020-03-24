#include "lists.h"

/**
 * add_nodeint_end - print numbers the link list
 * @head: list linked
 * @n: int the list
 * Return: size string
 **/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *aux;
	int num = n;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	new->n = num;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	aux = *head;

	while (aux->next)
	{
		aux = aux->next;
	}

	aux->next = new;

	return (new);
}
