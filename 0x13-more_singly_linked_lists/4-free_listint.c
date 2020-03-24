#include "lists.h"

/**
 * free_listint - free list
 * @head: list linked
 * Return: nothing
 **/

void free_listint(listint_t *head)
{
	listint_t *pos;

	if (head != NULL)
	{
		while (head != NULL)
		{
			pos = head;
			head = head->next;
			free(pos);
		}

	}
	else
	{
		return;
	}
}
