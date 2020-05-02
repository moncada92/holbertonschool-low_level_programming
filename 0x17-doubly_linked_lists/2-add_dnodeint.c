#include "lists.h"

/**
 * add_dnodeint - add node head double linked list.
 *
 * @head: list
 * @n: valie the node
 *
 * Return: this return the num of the elements in the list
 **/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	new->prev = NULL;

	if (*head != NULL)
	{
		(*head)->prev = new;
	}
	*head = new;

	return (new);
}
