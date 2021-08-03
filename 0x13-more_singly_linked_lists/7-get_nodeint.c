#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: pointer to the first element of the list
 * @index: an especific node in the list
 * Return: returns the nth node of a listint_t linked list.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int counter = 0;

	if (head == NULL)
		return (NULL);
	while (current)
	{
		if (counter == index)
			return (current);
		counter++;
		current = current->next;
	}
	return (current ? current : NULL);
}
