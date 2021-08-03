#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list.
 * @head: pointer to the first element
 * Return: returns the head node’s data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int num = 0;

	if (head != NULL)
	{
		tmp = *head;
		num = (*head)->n;
		*head = (*head)->next;
		free(tmp);
	}
	else
		return (0);
	return (num);
}
