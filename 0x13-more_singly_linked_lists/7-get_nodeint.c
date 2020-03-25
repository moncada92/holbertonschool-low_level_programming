#include "lists.h"

/**
 * get_nodeint_at_index - select element list
 * @head: list linked
 * @index: the index list
 * Return: list select
 **/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *get_nd;
	unsigned int i;


	get_nd = head;

	for (i = 0; get_nd; i++)
	{
		if (i == index)
			return (get_nd);
		get_nd = get_nd->next;
	}
	return (get_nd);
}
