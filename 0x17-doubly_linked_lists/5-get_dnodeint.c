#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: head of the list.
 * @index: return node at index.
 * Return: memory location of a node.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *temp, *num;

	temp = head;

	if (head == NULL)
		return (NULL);

	while (temp != NULL)
	{
		temp = temp->next;
		count++;

		if (count == index)
		{
			num = temp;
		}
	}
	return (num);
}
