#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index
 * index of a dlistint_t linked list.
 * @head: The pointer to the first element in the list.
 * @index: The position to delete.
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *ptr = *head;
	dlistint_t *next;
	unsigned int counter = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		if ((*head)->next == NULL)
		{
			*head = NULL;
			free(ptr);
			return (1);
		}
		*head = ptr->next;
		ptr->next->prev = NULL;
		free(ptr);
		return (1);
	}
	while (ptr->next && counter < index - 1)
	{
		ptr = ptr->next;
		counter++;
	}

	if (ptr == NULL || ptr->next == NULL)
	return (-1);

	next = ptr->next->next;
	ptr->next->prev = next;
	free(ptr->next);
	ptr->next = next;
	return (1);
}
