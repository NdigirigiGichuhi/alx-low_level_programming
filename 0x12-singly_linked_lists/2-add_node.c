#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: head of the list.
 * @str: string to be stored in the new node.
 * Return: allocated memory to the new node.
 */


list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
	char *target;
	int i = 0, length = 0;

	newnode = malloc(sizeof(list_t));

	if (newnode == NULL)
		return (NULL);

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
		newnode->next = *head;
		*head = newnode;
	}

	return (newnode);
}
