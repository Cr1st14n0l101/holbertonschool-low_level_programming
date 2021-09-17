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
	dlistint_t *tmp = *h;
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (!*h)
	{
		new_node->next = *h;
		new_node->prev = NULL;
		*h = new_node;
		return (new_node);
	}
	if (idx == 0)
	{
		new_node->next = *h;
		new_node->prev = NULL;
		*h = new_node;
		return (new_node);
	}
	for (count = 1; tmp; count++)
	{
		if (count == idx)
		{
			new_node->next = tmp->next;
			new_node->prev = tmp;
			tmp->next = new_node;
			return (new_node);
		}
		tmp = tmp->next;
	}
	return (NULL);
}
