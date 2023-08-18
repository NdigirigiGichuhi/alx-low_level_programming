#include "lists.h"

/**
 * free_dlistint - frees dlistint_t list.
 * @head: head of the list.
 * Return: void.
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
	head = NULL;
}
