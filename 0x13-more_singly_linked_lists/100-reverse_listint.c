#include "lists.h"

/**
 * reverse_listint - print in reverse list link
 * @head: list linked
 * Return: size string
 **/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *tmp, *actual;

	if (*head == NULL)
		return (NULL);

	actual = *head;

	while (actual->next)
	{
		tmp = actual->next;
		actual->next = tmp->next;
		tmp->next = *head;
		*head = tmp;
	}
	return (*head);
}
