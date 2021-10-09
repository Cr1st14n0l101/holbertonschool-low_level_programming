#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: Is the hash table you want to add or update the key/value to
 * @key: Is the key. key can not be an empty string
 * @value: Is the value associated with the key.
 * value must be duplicated. value can be an empty string
 * Return: 1 is success otherwise 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node = NULL, *tmp = NULL;

	if (!ht || !key || !value)
		return (0);
	index = hash_djb2((unsigned char *)key) % ht->size;
	tmp = ht->array[index];
	while (tmp)
	{
		if (!strcmp(key, tmp->key))
		{
			free(tmp->value);
			tmp->value = strdup(value);
			if (!tmp->value)
				return (0);
			return (1);
		}
		tmp = tmp->next;
	}
	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);
	new_node->key = strdup(key);
	if (!new_node)
	{
		free(new_node);
		return (0);
	}
	new_node->value = strdup(value);
	if (!new_node->value)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
