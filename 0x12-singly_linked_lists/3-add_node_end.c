#include "lists.h"

/**
 * add_node_end - adds a new node at the end if a list_t list.
 * @head: head of list_t list.
 * @str: string to be store in the new node.
 * Return: address of the added list.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode, *temp;
	char *target;
	int length = 0, i = 0;


	newnode = malloc(sizeof(list_t));

	if (newnode == NULL)
		return (NULL);

	if (str == NULL)
	{
		free(newnode);
		return (NULL);
	}
	else
		target = strdup(str);

	newnode->str = target;

	while (target[i] != '\0')
	{
		length++;
		i++;
	}

	newnode->len = length;

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
