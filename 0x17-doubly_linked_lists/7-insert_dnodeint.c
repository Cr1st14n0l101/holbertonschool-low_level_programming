#include "lists.h"

/**
 * insert_dnodeint_at_index - Function that inserts
 * a new node at a given position.
 * @h: Pointer to the head of the list.
 * @idx: index of the list where the new node should be added.
 * @n: Integer ot add.
 * Return: The new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count = 0;
	dlistint_t *tmp = *h, *tmp2 = *h;
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	/*verify if the idx is into the range of the list*/
	while (tmp2)
	{
		count++;
		tmp2 = tmp2->next;
	}
	if (idx > count)
		return (NULL);

	count = 0;
	new_node->n = n;
	while (tmp)
	{
		if (count == idx)
		{
			new_node->next = tmp->next;
			new_node->prev = tmp;
			tmp->next = new_node;
			return (new_node);
		}
		count++;
		tmp = tmp->next;
	}
	return (NULL);
}
