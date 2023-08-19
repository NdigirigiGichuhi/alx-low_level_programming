#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: head of the list.
 * @index: return node at index.
 * Return: memory location of a node.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp, *num;
	unsigned int count = 0, len = 0;


	if (head == NULL)
		return (NULL);

	temp = head;

	while (temp != NULL)
	{
		len++;
		temp = temp->next;
	}

	temp = head;

	if (index > len)
	{
		return (NULL);
	}
	else
	{
		if (len == 1)
		{
			num = head;
		}
		else
		{

			while (temp != NULL)
			{
				temp = temp->next;
				count++;

				if (count == index)
				{
					num = temp;
				}
			}
		}
	}
	return (num);
}
