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
	int i;

	for (i = 0; str[i]; i++)
		;

	copy = (list_t *) malloc(sizeof(list_t));

	copy->str = strdup(str);
	copy->len = i;

	copy->next = (*head);

	(*head) = copy;

	return (copy);
}
