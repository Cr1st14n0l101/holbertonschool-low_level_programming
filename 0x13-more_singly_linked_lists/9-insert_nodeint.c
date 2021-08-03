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
	listint_t *tmp = *head;
	unsigned int counter = 0;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	if (*head == NULL)
	{
		new_node->n = n;
		new_node->next = NULL;
		*head = new_node;
	}
	while (tmp)
	{
		if (idx == 0)
		{
			new_node->n = n;
			new_node->next = *head;
			*head = new_node;
			return (new_node);
		}
		if (counter == idx - 1)
		{
			new_node->n = n;
			new_node->next = tmp->next;
			tmp->next = new_node;
		}
		tmp = tmp->next;
		counter++;
	}
	return (new_node);
}
