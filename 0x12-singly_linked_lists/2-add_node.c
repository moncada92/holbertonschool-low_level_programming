#include "lists.h"

/**
 * add_node - add elements to list.
 *
 * @head: list
 * @str: string
 * Description: add elements to list
 * Return: return element list
 **/
list_t *add_node(list_t **head, const char *str)
{
	list_t *copy;
	char *c_str;
	int i;

	if (head == NULL || str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i]; i++)
		;

	copy = (list_t *) malloc(sizeof(list_t));

	c_str = strdup(str);
	if (c_str == NULL)
	{
		free(copy);
		return (NULL);
	}

	copy->str = c_str;
	copy->len = i;

	copy->next = (*head);

	(*head) = copy;

	return (copy);
}
