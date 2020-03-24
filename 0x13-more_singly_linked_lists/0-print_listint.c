#include "lists.h"

/**
 * print_listint - print elemets
 * @h: list linked
 * Return: size string
 **/

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	if (h != NULL)
	{
		for (; h; count++)
		{
			printf("%d \n", h->n);
			h = h->next;
		}
	}

	return (count);
}
