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
	dlistint_t *tmp = *h, *new_node, *prev_node;
	unsigned int count = 0;

	if (h == NULL || (*h == NULL && idx != 0))
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	prev_node = NULL;

	while (tmp)
	{
		if (count == idx)
		{
			prev_node->next = new_node;
			new_node->prev = prev_node;
			new_node->next = tmp;
			tmp->prev = new_node;
			return (new_node);
		}
		if ((count == idx - 1) && (tmp->next == NULL))
		{
			tmp->next = new_node;
			new_node->prev = tmp;
			return (new_node);
		}
		prev_node = tmp;
		tmp = tmp->next;
		count++;
	}
	free(new_node);
	return (NULL);
}
