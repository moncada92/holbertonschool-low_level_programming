#include "lists.h"

/**
 * print_list - print the elements in a list.
 *
 * @h: list
 * Description: print the elements of one list)?
 * section header: the header of this function is lists.h
 * Return: this return the num of the elements in the list
 **/
size_t print_list(const list_t *h)
{
	int count;

	for (count = 0; h ; count++)
	{
		if (h->str == '\0')
			printf("[0] (nil)\n");
		else
			printf("[%i] %s\n", h->len, h->str);
		h = h->next;
	}

	return (count);
}
