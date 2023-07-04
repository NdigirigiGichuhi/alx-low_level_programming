#include "lists.h"

/**
 * free_listint - frees listint_t list.
 * @head: head of listint_t.
 * Return: void.
 */
void free_listint(listint_t *head)
{
	listint_t *current, *next;

	current = head;
	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
	head = NULL;
}
