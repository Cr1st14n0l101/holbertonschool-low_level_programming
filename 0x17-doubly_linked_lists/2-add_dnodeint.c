#include "lists.h"

/**
 * add_dnodeint - Function that adds a new node
 * at the beginning of a dlistint_t list.
 * @head: Pointer to the first element of the list.
 * @n: Integer to add.
 * Return: The new node added.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	/*store the data*/
	new_node->n = n;

	/*Make the next of new mode as head and previos as NULL*/
	new_node->next = (*head);
	new_node->prev = NULL;

	/*change the prev of head to new mode*/
	if ((*head) != NULL)
		(*head)->prev = new_node;

	/*move the head to print to the new node*/
	*head = new_node;
	return (new_node);
}
