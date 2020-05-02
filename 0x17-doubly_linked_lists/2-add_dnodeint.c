#include "lists.h"

/**
 * add_dnodeint - print the elements in a doble linked list.
 *
 * @h: list
 * Description: print the elements of one list)?
 * section header: the header of this function is lists.h
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

	if(*head != NULL)
	{
		(*head)->prev = new;
	}
	*head = new;

	return (new);
}
