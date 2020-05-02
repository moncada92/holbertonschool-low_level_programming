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
	const dlistint_t *tmp = h;
	size_t count = 0;

	while (tmp)
	{
		printf("%d \n", tmp->n);
		count++;
		tmp = tmp->next;
	}
	return (count);
}
