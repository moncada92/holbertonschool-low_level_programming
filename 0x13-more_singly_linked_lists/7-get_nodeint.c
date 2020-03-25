#include "lists.h"

/**
 * pop_listint - remove one element list
 * @head: list linked
 * @index: the index list
 * Return: list select
 **/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int get_n;
	listint_t *get_nd = NULL;

	if (head == NULL)
	{
		return (NULL);
	}

	get_nd = malloc(sizeof(listint_t));

	get_nd = head;

	for (get_n = 0; get_n <= index; get_n++)
	{

		if( get_n == index)
		{
			break;
		}

		get_nd = get_nd->next;

	}

	return (get_nd);

}
