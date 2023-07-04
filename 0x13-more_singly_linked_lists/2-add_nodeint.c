#include "lists.h"

/**
 * add_nodeint - adds a newnode at the beginning of a listsint_t list.
 * @head: head of listint_t list.
 * @n: data of the newnode.
 * Return: address of the new element.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	newnode->n = n;
	newnode->next = NULL;

	if (newnode == NULL)
		return (NULL);

	if (*head == NULL)
	{
		*head = newnode;
	}
	else
	{
		newnode->next = *head;
		*head = newnode;
	}

	return (newnode);
}
