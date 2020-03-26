#include "lists.h"

/**
 * reverse_listint - print in reverse list link
 * @head: list linked
 * Return: size string
 **/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *new, *aux;

	aux = *head;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	while (aux->next)
	{
		new = aux->next;
		aux->next = new->next;
		new->next = *head;
		*head = new;
	}

	return (*head);
}
