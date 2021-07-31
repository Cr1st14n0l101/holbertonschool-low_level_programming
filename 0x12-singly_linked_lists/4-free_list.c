#include "lists.h"

/**
 * free_list - free the lists
 * @head: the node
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *tempo;

	while (head)
	{
		tempo = head->next;
		free(head->str);
		free(head);
		head = tempo;
	}
}
