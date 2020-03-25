#include "lists.h"

/**
 * sum_listint - sum the value int all elements list
 * @head: list linked
 * Return: total sum int all elements list
 **/

int sum_listint(listint_t *head)
{
	int total_sum = 0;

	while (head)
	{
		total_sum += head->n;
		head = head->next;

	}
	return (total_sum);
}
