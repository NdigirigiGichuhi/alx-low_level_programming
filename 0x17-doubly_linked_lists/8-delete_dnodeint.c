#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of dlistint_t list.
 * @head: head of the list.
 * @index: index to delete a node from.
 * Return: 1 if it succeeded, -1 if it fails.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int i = 0, len = 0;

	if (*head == NULL)
		return (-1);

	temp = *head;

	while (temp != NULL)
	{
		temp = temp->next;
		len++;
	}

	temp = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}
	else
	{
		while (temp != NULL && i < index)
		{
			temp = temp->next;
			i++;

			if (i == (index))
			{
				temp->next->prev = temp->prev;
				temp->prev->next = temp->next;
			}
		}
	}

	return (1);
}
