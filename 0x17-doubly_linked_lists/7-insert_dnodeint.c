#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: head of the list.
 * @idx: index to add a node.
 * @n: data of the newnode.
 * Return: address of the newnode.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newnode, *temp;
	unsigned int len = 0, i = 0;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;
	newnode->prev = NULL;

	temp = *h;

	while (temp != NULL)
	{
		temp = temp->next;
		len++;
	}
	temp = *h;

	if (*h == NULL)
	{
		*h = newnode;
	}
	else if (idx > len - 1)
	{
		return (NULL);
	}
	else
	{
		while (temp != NULL && i == idx)
		{
			temp = temp->next;
			i++;
			newnode->prev = temp;
			newnode->next = temp->next;
			temp->next = newnode;
			newnode->next->prev = newnode;
		}
	}
	return (newnode);
}
