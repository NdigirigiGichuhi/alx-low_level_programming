#include "lists.h"

/**
 * listint_len - returns the number of elements int a linked listint_t list.
 * @h: head of listint_len.
 * Return: number of elements in listint_t list.
 */

size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
