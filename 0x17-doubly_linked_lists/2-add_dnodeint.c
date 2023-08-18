#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginnig of a dlistint_t list.
 * @head: head of the list.
 * @n: data of the node to be added.
 * Return: addrss of the new element, or null if it failed.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	if (head == NULL)
		return (NULL);

	newnode = malloc(sizeof(dlistint_t));

	if (newnode == NULL)
	{
		return (NULL);
	}

	newnode->n = n;
	newnode->next = NULL;
	newnode->prev = NULL;

	if (*head == NULL)
	{
		*head = newnode;
	}
	else
	{
		(*head)->prev = newnode;
		newnode->next = *head;
		*head = newnode;
	}
	return (newnode);
}
