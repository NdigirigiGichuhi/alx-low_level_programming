#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data in a list.
 * @head: head of the list.
 * Return: sum of all data.
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *temp;

	temp = head;

	while (temp != NULL)
	{
		sum = sum + temp->n;
		temp = temp->next;
	}

	return (sum);
}
