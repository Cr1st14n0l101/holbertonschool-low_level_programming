#include "lists.h"

/**
 * dlistint_len - Function that returns the number
 * of elements in a linked dlistint_t list.
 * @h: Pointer ti the list's head.
 * Return: The number of elements in a linked dlistint_t list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
