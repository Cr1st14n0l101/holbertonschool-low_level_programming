#include "lists.h"

/**
 * listint_len - Returns the number of elements in a linked listint_t list.
 * @h: pointer to the first element on the head.
 * Return: Returns the number of elements.
 */
size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
