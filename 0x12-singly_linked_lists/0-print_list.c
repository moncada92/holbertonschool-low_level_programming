#include "lists.h"

/**
 * print_list - print num the list structur pointer
 * @h: list
 * Return: return num list type size_t
 **/

size_t print_list(const list_t *h)
{

	unsigned int count = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nill)\n");
		}
		else
		{
			printf("[%i] %s \n", h->len, h->str);
		}
		count++;
		h = h->next;
	}

	return (count);
}
