#include "lists.h"

/**
 * listint_len - print num elemets list
 * @h: list linked
 * Return: size string
 **/

size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
