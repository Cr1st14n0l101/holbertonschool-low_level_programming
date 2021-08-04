#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the 
 *  node at index of a listint_t linked list.
 * @head: The pointer to the first elemnt
 * @index: The position to delete
 * Return: 1 if success or -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr = *head;
	listint_t *next;
	unsigned int counter = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = ptr->next;
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
	free(ptr->next);
	ptr->next = next;
	return (1);
}
