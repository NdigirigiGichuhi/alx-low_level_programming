#include "lists.h"

/**
 * free_list - frees a list_t list.
 * @head: head of list_t list.
 * Return: void.
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head->next);
		free(head);
		head = temp;
	}
}

