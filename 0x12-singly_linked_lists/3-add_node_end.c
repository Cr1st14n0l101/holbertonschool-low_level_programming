#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: the first element
 * @str: string
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int i = 0;
	list_t *ptr;
	list_t *tempo;

	if (str == NULL)
		return (NULL);
	ptr = malloc(sizeof(list_t));
	if (ptr == NULL)
		return (NULL);
	ptr->str = strdup(str);
	while (str[i] != '\0')
		i++;
	ptr->len = i;
	ptr->next = NULL;
	if (*head == NULL)
	{
		*head = ptr;
		return (ptr);
	}
	tempo = *head;
	while (tempo->next)
		tempo = tempo->next;
	tempo->next = ptr;
	return (ptr);
}
