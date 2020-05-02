#include "lists.h"

/**
 * print_dlistint - print the elements in a doble linked list.
 *
 * @h: list
 * Description: print the elements of one list)?
 * section header: the header of this function is lists.h
 * Return: this return the num of the elements in the list
 **/

size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		printf("%d \n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
