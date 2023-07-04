#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: head of the listint_t list.
 * Return: number of nodes in listint_t list.
 */

size_t print_listint(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (count);
}
