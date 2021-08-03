#include "lists.h"

/**
 * add_nodeint_end - adds a element in the end of the list
 * @head: Pointer to the new element
 * @n: A number to insert in the list
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *tmp = *head;

	if (head == NULL)
		return (NULL);

	while (tmp != NULL && tmp->next != NULL)
		tmp = tmp->next;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (tmp != NULL)
		tmp->next = new_node;
	else
		*head = new_node;
	return (new_node);
}
