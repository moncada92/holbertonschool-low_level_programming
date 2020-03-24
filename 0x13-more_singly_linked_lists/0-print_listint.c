#include "lists.h"

/**
 * print_listint - print elemets
 * @h: list linked
 * Return: size string
 **/

size_t print_listint(const listint_t *h)
{
	int count = 0;

	for (; h; count++)
	{
		printf("%d \n", h->n);
		h = h->next;
	}

	return (count);
}
