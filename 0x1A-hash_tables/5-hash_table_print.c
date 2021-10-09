#include "hash_tables.h"

/**
 * hash_table_print - Function that prints a hash table.
 * @ht: The hash table
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0, j = 0, counter = 1;

	if (!ht)
		return;

	for (; i < ht->size; i++)
	{
		if (ht->array[i])
			j++;
	}
	i = 0;

	printf("{");
	for (; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			printf("'%s': ", ht->array[i]->key);
			printf("'%s'", ht->array[i]->value);
			if (counter < j)
				printf(", ");
			counter++;
		}
	}
	printf("}\n");
}
