#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table
 * @ht: The hash table
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tmp1 = NULL, *tmp2 = NULL;
	unsigned int i = 0;

	if (!ht)
		return;

	while (i < ht->size)
	{
		if (ht->array[i])
		{
			tmp1 = ht->array[i];
			while (tmp1)
			{
				free(tmp1->key);
				free(tmp1->value);
				tmp2 = tmp1;
				tmp1 = tmp1->next;
				free(tmp2);
			}
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
