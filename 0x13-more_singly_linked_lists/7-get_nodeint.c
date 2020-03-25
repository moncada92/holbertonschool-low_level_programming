#include "lists.h"

/**
 * get_nodeint_at_index - select element list
 * @head: list linked
 * @index: the index list
 * Return: list select
 **/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int get_n;
	listint_t *get_nd;

	get_nd = head;

	for (get_n = 0; get_n; get_n++)
	{

		if (get_n == index)
		{
			return (get_nd);
		}

		get_nd = get_nd->next;

	}

	return (get_nd);

}
