#include "lists.h"


listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode, *temp;

	newnode = malloc(sizeof(listint_t));
	newnode->n = n;
	newnode->next = NULL;

	if (newnode == NULL)
		return (NULL);

	if (*head == NULL)
		*head = newnode;
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = newnode;
	}

	return (newnode);
}
