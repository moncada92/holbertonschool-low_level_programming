#include "lists.h"

/**
 * free_listint2 - free list
 * @head: list linked
 * Return: nothing
 **/

void free_listint2(listint_t **head)
{
	listint_t *pos, *aux;

	if (head != NULL)
	{
		aux = *head;
		while (aux)
		{
			pos = aux;
			aux = pos->next;
			free(pos);
		}

		*head = NULL;
		head = NULL;

	}
	else
	{
		return;
	}
}
