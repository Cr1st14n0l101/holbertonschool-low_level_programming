#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: the struct
 * @str: an string
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	int i = 0;

	list_t *ptr;

	ptr = malloc(sizeof(list_t));
	if (ptr == NULL)
		return (NULL);

	while (str[i] != '\0')
		i++;
	ptr->str = strdup(str);
	ptr->len = i;
	ptr->next = (*head);
	(*head) = ptr;

	return (*head);
}
