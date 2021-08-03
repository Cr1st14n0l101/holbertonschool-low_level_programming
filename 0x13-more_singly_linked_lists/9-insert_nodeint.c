#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position.
 * @head: Pointer to the first element of the list
 * @idx: The node position to insert
 * @n: The value for the node
 * Return: The address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *tail;
	unsigned int counter = 0;

	tail = *head;
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	if (*head == NULL)
	{
		*head = new_node;
		new_node->next = NULL;
		return (new_node);
	}
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	while (counter < (idx - 1) && tail->next)
	{
		tail = tail->next;
		counter++;
	}
	if (counter < idx - 1)
		return (NULL);
	new_node->next = tail->next;
	tail->next = new_node;
	return (new_node);
}
