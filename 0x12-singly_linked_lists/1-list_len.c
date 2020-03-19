#include "lists.h"

/**
 * list_len - print the number elements in a list.
 *
 * @h: list
 * Description: print the elements of one list)?
 * Return: this return the num of the elements in the list
 **/
size_t list_len(const list_t *h)
{
	int count;

	for (count = 0; h ; count++)
	{
		h = h->next;
	}

	return (count);
}
