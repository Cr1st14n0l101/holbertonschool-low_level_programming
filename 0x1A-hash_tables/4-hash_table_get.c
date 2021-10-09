#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated with a key
 * @ht: Is the hash table you want to look into
 * @key: Is the key you are looking for
 * Return: the value associated with the element,
 * or NULL if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *list = NULL;
	unsigned int hash = 0;

	if (!ht || !key)
		return (NULL);

	hash = hash_djb2((unsigned char *)key);
	list = ht->array[hash % ht->size];

	while (list)
	{
		if (!strcmp(key, list->key))
			return (list->value);
		list = list->next;
	}
	return (NULL);
}
